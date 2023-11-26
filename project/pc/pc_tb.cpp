#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vpc.h"

#define MAX_SIM_CYC 20
#define VERIF_START_TIME 7
int simcyc = 0;

class PcInTx
{
public:
    uint32_t PC;
    uint32_t ImmExt;
    uint PCSrc;
};

class PcOutTx
{
public:
    uint32_t PC;
};

class PcScb
{
public:
    // input interface monitor port
    void writeIn(PcInTx *tx)
    {
        in_q.push_back(tx);
    }

    // output interface monitor port
    void writeOut(PcOutTx *tx)
    {

        // check queue
        if (in_q.empty())
        {
            std::cout << "Fatal Error in PcScb: Empty PcInTx queue" << std::endl;
            exit(1);
        }

        // grab transaction item from front of queue
        PcInTx *in;
        in = in_q.front();
        in_q.pop_front();

        switch (in->PCSrc)
        {

        // add instruction
        case 0:
            if (in->PC + 4 != tx->PC)
            {
                std::cout << std::endl;
                std::cout << "+4 increment mismatch" << std::endl;
                std::cout << "  Expected: " << in->PC + 4
                          << "  Actual: " << tx->PC << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        // sub instruction
        case 1:
            if (in->PC + in->ImmExt != tx->PC)
            {
                std::cout << std::endl;
                std::cout << "immediate increment mismatch" << std::endl;
                std::cout << "  Expected: " << in->PC - in->ImmExt
                          << "  Actual: " << tx->PC << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;
        }
    }

private:
    std::deque<PcInTx *> in_q;
};

class PcInDrv
{
public:
    PcInDrv(Vpc *dut)
    {
        this->dut = dut;
    }

    void drive(PcInTx *tx)
    {
        if (tx != NULL)
        {
            dut->ImmExt = tx->ImmExt;
            dut->PCSrc = tx->PCSrc;
            delete tx;
        }
    }

private:
    Vpc *dut;
};

class PcInMon
{
public:
    PcInMon(Vpc *dut, PcScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        // create a new transaction item and populate it with data observerd at the interface pin
        PcInTx *tx = new PcInTx();
        tx->PC = dut->PC;
        tx->ImmExt = dut->ImmExt;
        tx->PCSrc = dut->PCSrc;

        // pass transaction item to score board
        scb->writeIn(tx);
    }

private:
    Vpc *dut;
    PcScb *scb;
};

class PcOutMon
{
public:
    PcOutMon(Vpc *dut, PcScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        if (simcyc > 0)
        { // create new transaction item and populate it with result observed
            PcOutTx *tx = new PcOutTx();
            tx->PC = dut->PC;

            // pass transaction item to score board
            scb->writeOut(tx);
        }
    }

private:
    Vpc *dut;
    PcScb *scb;
};

PcInTx *rndPcInTx()
{
    PcInTx *tx = new PcInTx();
    tx->PC = 0;
    tx->PCSrc = rand() % 2;
    tx->ImmExt = 4 * (rand() % 25);
    return tx;
}

int main(int argc, char **argv, char **env)
{
    int clk;

    // initilize seed
    srand(time(NULL));

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vpc *dut = new Vpc;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("pc.vcd");

    // init transaction item
    PcInTx *tx;

    // create driver, scoreboard, input monitor, output monitor
    PcInDrv *drv = new PcInDrv(dut);
    PcScb *scb = new PcScb();
    PcInMon *inMon = new PcInMon(dut, scb);
    PcOutMon *outMon = new PcOutMon(dut, scb);

    // init clk
    dut->clk = 1;
    dut->rst = 0;

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            dut->clk = !dut->clk;
            dut->eval();

            // if on rising clock edge
            if (dut->clk == 1)
            {
                // generate a randomised transaction item
                tx = rndPcInTx();

                // drive input into dut
                drv->drive(tx);
                // monitor the input interface
                inMon->monitor();
                // monitor the output interface
                outMon->monitor();
            }
            tfp->dump(clk + 2 * simcyc);
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