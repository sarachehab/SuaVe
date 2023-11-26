#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valu.h"

#define MAX_SIM_CYC 20
#define VERIF_START_TIME 7
int simcyc = 0;

std::vector<uint> possible_alu_control_i = {0, 1, 2, 3, 5};

class AluInTx
{
public:
    uint32_t src1_i;
    uint32_t src2_i;
    uint alu_control_i;
};

class AluOutTx
{
public:
    uint32_t alu_result_o;
    uint eq_o;
};

class AluScb
{
public:
    // input interface monitor port
    void writeIn(AluInTx *tx)
    {
        in_q.push_back(tx);
    }

    // output interface monitor port
    void writeOut(AluOutTx *tx)
    {

        // check queue
        if (in_q.empty())
        {
            std::cout << "Fatal Error in AluScb: Empty AluInTx queue" << std::endl;
            exit(1);
        }

        // grab transaction item from front of queue
        AluInTx *in;
        in = in_q.front();
        in_q.pop_front();

        switch (in->alu_control_i)
        {

        // add instruction
        case 0:
            if (in->src1_i + in->src2_i != tx->alu_result_o)
            {
                std::cout << std::endl;
                std::cout << "AluScb: add mismatch" << std::endl;
                std::cout << "  Expected: " << in->src1_i + in->src2_i
                          << "  Actual: " << tx->alu_result_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        // sub instruction
        case 1:
            if ((in->src1_i - in->src2_i != tx->alu_result_o) && ((in->src1_i == in->src2_i) == tx->eq_o))
            {
                std::cout << std::endl;
                std::cout << "AluScb: sub/eq_o mismatch" << std::endl;
                std::cout << "  Expected alu_result_o: " << in->src1_i - in->src2_i
                          << "  Actual: " << tx->alu_result_o << std::endl;
                std::cout << "  Expected eq_o: " << (in->src1_i == in->src2_i)
                          << "  Actual: " << tx->eq_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        // and instruction
        case 2:
            if ((in->src1_i & in->src2_i) != tx->alu_result_o)
            {
                std::cout << std::endl;
                std::cout << "AluScb: and mismatch" << std::endl;
                std::cout << "  Expected: " << (in->src1_i & in->src2_i)
                          << "  Actual: " << tx->alu_result_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        // or instruction
        case 3:
            if ((in->src1_i | in->src2_i) != tx->alu_result_o)
            {
                std::cout << std::endl;
                std::cout << "AluScb: or mismatch" << std::endl;
                std::cout << "  Expected: " << (in->src1_i | in->src2_i)
                          << "  Actual: " << tx->alu_result_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        // slt instruction
        case 5:
            if ((in->src1_i < in->src2_i) != tx->alu_result_o)
            {
                std::cout << std::endl;
                std::cout << "AluScb: slt mismatch" << std::endl;
                std::cout << "  Expected: " << (in->src1_i < in->src2_i)
                          << "  Actual: " << tx->alu_result_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;
        }
    }

private:
    std::deque<AluInTx *> in_q;
};

class AluInDrv
{
public:
    AluInDrv(Valu *dut)
    {
        this->dut = dut;
    }

    void drive(AluInTx *tx)
    {
        if (tx != NULL)
        {
            dut->src1_i = tx->src1_i;
            dut->src2_i = tx->src2_i;
            dut->alu_control_i = tx->alu_control_i;
            delete tx;
        }
    }

private:
    Valu *dut;
};

class AluInMon
{
public:
    AluInMon(Valu *dut, AluScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        // create a new transaction item and populate it with data observerd at the interface pin
        AluInTx *tx = new AluInTx();
        tx->alu_control_i = dut->alu_control_i;
        tx->src1_i = dut->src1_i;
        tx->src2_i = dut->src2_i;

        // pass transaction item to score board
        scb->writeIn(tx);
    }

private:
    Valu *dut;
    AluScb *scb;
};

class AluOutMon
{
public:
    AluOutMon(Valu *dut, AluScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        if (simcyc > 0)
        { // create new transaction item and populate it with result observed
            AluOutTx *tx = new AluOutTx();
            tx->alu_result_o = dut->alu_result_o;
            tx->eq_o = dut->eq_o;

            // pass transaction item to score board
            scb->writeOut(tx);
        }
    }

private:
    Valu *dut;
    AluScb *scb;
};

AluInTx *rndAluInTx()
{
    AluInTx *tx = new AluInTx();
    tx->src1_i = rand() % 100;
    tx->src2_i = rand() % 100;
    tx->alu_control_i = possible_alu_control_i[rand() % 5];
    return tx;
}

int main(int argc, char **argv, char **env)
{
    int clk;

    // initilize seed
    srand(time(NULL));

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Valu *dut = new Valu;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("alu.vcd");

    // init transaction item
    AluInTx *tx;

    // create driver, scoreboard, input monitor, output monitor
    AluInDrv *drv = new AluInDrv(dut);
    AluScb *scb = new AluScb();
    AluInMon *inMon = new AluInMon(dut, scb);
    AluOutMon *outMon = new AluOutMon(dut, scb);

    // init clk
    // dut->clk = 1;

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(clk + 2 * simcyc);
            // dut->clk = !dut->clk; // no clock for this module

            // if on rising clock edge
            // if (dut->clk == 1)
            if (clk == 1)
            {
                // generate a randomised transaction item
                tx = rndAluInTx();
                drv->drive(tx);
                // monitor the input interface
                inMon->monitor();
                // monitor the output interface
                outMon->monitor();
            }
            dut->eval();
        }

        if ((Verilated::gotFinish()))
        {
            break;
        }
    }

    tfp->close();

    delete dut;
    delete outMon;
    delete inMon;
    delete scb;
    delete drv;

    exit(EXIT_SUCCESS);
}