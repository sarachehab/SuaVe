#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vpc.h"

#define MAX_SIM_CYC 20
int simcyc = 0;
uint32_t expected_pc = 0xBFC00000;

class PcInTx
{
public:
    uint32_t imm_ext_i, jta_jalr_i;
    uint jump_taken_i, rst_i, jalr_instr_i;
};

class PcOutTx
{
public:
    uint32_t pc_o;
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

        if (in->rst_i)
        {
            expected_pc = 0xBFC00000;
            if (tx->pc_o != expected_pc)
            {
                std::cout << std::endl;
                std::cout << "rst mismatch" << std::endl;
                std::cout << "  Expected: " << expected_pc
                          << "  Actual: " << tx->pc_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
        }

        else
        {

            switch (in->jump_taken_i)
            {

            case 0:
                expected_pc = expected_pc + 4;
                if (tx->pc_o != expected_pc)
                {
                    std::cout << std::endl;
                    std::cout << "+4 increment mismatch" << std::endl;
                    std::cout << "  Expected: " << expected_pc
                              << "  Actual: " << tx->pc_o << std::endl;
                    std::cout << "  Simtime: " << simcyc << std::endl;
                }
                break;

            case 1:
                if (in->jalr_instr_i)
                {
                    expected_pc = in->jta_jalr_i;
                    if (tx->pc_o != expected_pc)
                    {
                        std::cout << std::endl;
                        std::cout << "JALR increment mismatch" << std::endl;
                        std::cout << "  Expected: " << expected_pc
                                  << "  Actual: " << tx->pc_o << std::endl;
                        std::cout << "  Simtime: " << simcyc << std::endl;
                    }
                }
                else
                {
                    expected_pc += in->imm_ext_i;
                    if (tx->pc_o != expected_pc)
                    {
                        std::cout << std::endl;
                        std::cout << "immediate increment mismatch" << std::endl;
                        std::cout << "  Expected: " << expected_pc
                                  << "  Actual: " << tx->pc_o << std::endl;
                        std::cout << "  Simtime: " << simcyc << std::endl;
                    }
                }

                break;
            }
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
            dut->imm_ext_i = tx->imm_ext_i;
            dut->jalr_instr_i = tx->jalr_instr_i;
            dut->jta_jalr_i = tx->jta_jalr_i;
            dut->jump_taken_i = tx->jump_taken_i;
            dut->rst_i = tx->rst_i;
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
        tx->imm_ext_i = dut->imm_ext_i;
        tx->jalr_instr_i = dut->jalr_instr_i;
        tx->jta_jalr_i = dut->jta_jalr_i;
        tx->jump_taken_i = dut->jump_taken_i;
        tx->rst_i = dut->rst_i;

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
            tx->pc_o = dut->pc_o;

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
    tx->imm_ext_i = 4 * (rand() % 25);
    tx->jump_taken_i = rand() % 2;
    tx->jta_jalr_i = 4 * (rand() % 25) + 0xBFC00000;
    tx->jalr_instr_i = 0;
    if (tx->jump_taken_i)
    {
        tx->jalr_instr_i = rand() % 2;
    }
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
    dut->clk_i = 1;
    dut->rst_i = 0;

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(clk + 2 * simcyc);
            dut->clk_i = !dut->clk_i;
            if (dut->clk_i)
            {
                // generate a randomised transaction item
                tx = rndPcInTx();
                tx->rst_i = (simcyc % 10 == 0) ? 1 : 0;
                drv->drive(tx);
                // monitor the input interface
                inMon->monitor();
                // if on falling clock edge
            }
            if (dut->clk_i == 0)
            {
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