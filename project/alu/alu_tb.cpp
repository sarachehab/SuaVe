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

std::vector<uint> possible_ALUControl = {0, 1, 2, 3, 5};

class AluInTx
{
public:
    uint32_t SrcA;
    uint32_t SrcB;
    uint ALUControl;
};

class AluOutTx
{
public:
    uint32_t ALUResult;
    uint EQ;
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

        switch (in->ALUControl)
        {

        // add instruction
        case 0:
            if (in->SrcA + in->SrcB != tx->ALUResult)
            {
                std::cout << std::endl;
                std::cout << "AluScb: add mismatch" << std::endl;
                std::cout << "  Expected: " << in->SrcA + in->SrcB
                          << "  Actual: " << tx->ALUResult << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            else 
            {
                std::cout << "correct match of " << in->SrcA << " + " << in->SrcB << " = " << tx->ALUResult << std::endl;
            }
            break;

        // sub instruction
        case 1:
            if ((in->SrcA - in->SrcB != tx->ALUResult) && ((in->SrcA == in->SrcB) == tx->EQ))
            {
                std::cout << std::endl;
                std::cout << "AluScb: sub/eq mismatch" << std::endl;
                std::cout << "  Expected ALUResult: " << in->SrcA - in->SrcB
                          << "  Actual: " << tx->ALUResult << std::endl;
                std::cout << "  Expected EQ: " << (in->SrcA == in->SrcB)
                          << "  Actual: " << tx->EQ << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            std::cout << "correct match of " << in->SrcA << " - " << in->SrcB << " = " << int(tx->ALUResult) << std::endl;
            break;

        // and instruction
        case 2:
            if ((in->SrcA & in->SrcB) != tx->ALUResult)
            {
                std::cout << std::endl;
                std::cout << "AluScb: and mismatch" << std::endl;
                std::cout << "  Expected: " << (in->SrcA & in->SrcB)
                          << "  Actual: " << tx->ALUResult << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            std::cout << "correct match of " << in->SrcA << " & " << in->SrcB << " = " << tx->ALUResult << std::endl;
            break;

        // or instruction
        case 3:
            if ((in->SrcA | in->SrcB) != tx->ALUResult)
            {
                std::cout << std::endl;
                std::cout << "AluScb: or mismatch" << std::endl;
                std::cout << "  Expected: " << (in->SrcA | in->SrcB)
                          << "  Actual: " << tx->ALUResult << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            std::cout << "correct match of " << in->SrcA << " | " << in->SrcB << " = " << tx->ALUResult << std::endl;
            break;

        // slt instruction
        case 5:
            if ((in->SrcA < in->SrcB) != tx->ALUResult)
            {
                std::cout << std::endl;
                std::cout << "AluScb: slt mismatch" << std::endl;
                std::cout << "  Expected: " << (in->SrcA < in->SrcB)
                          << "  Actual: " << tx->ALUResult << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            std::cout << "correct match of " << in->SrcA << " < " << in->SrcB << std::endl;
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
            dut->SrcA = tx->SrcA;
            dut->SrcB = tx->SrcB;
            dut->ALUControl = tx->ALUControl;
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
        tx->ALUControl = dut->ALUControl;
        tx->SrcA = dut->SrcA;
        tx->SrcB = dut->SrcB;

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
        // create new transaction item and populate it with result observed
        AluOutTx *tx = new AluOutTx();
        tx->ALUResult = dut->ALUResult;
        tx->EQ = dut->EQ;

        // pass transaction item to score board
        scb->writeOut(tx);
    }

private:
    Valu *dut;
    AluScb *scb;
};

AluInTx *rndAluInTx()
{
    AluInTx *tx = new AluInTx();
    tx->SrcA = rand() % 100;
    tx->SrcB = rand() % 100;
    tx->ALUControl = possible_ALUControl[rand() % 5];
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
            // dut->eval();

            // if on rising clock edge
            // if (dut->clk == 1)
            if (clk == 1)
            {
                // generate a randomised transaction item
                tx = rndAluInTx();
                //
                drv->drive(tx);
                dut->eval();
                // monitor the input interface
                inMon->monitor();
                // monitor the output interface
                outMon->monitor();
            }
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