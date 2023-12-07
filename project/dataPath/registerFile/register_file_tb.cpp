#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vregister_file.h"

#define MAX_SIM_CYC 20
#define VERIF_START_TIME 7
int simcyc = 0;

std::vector<uint> simulated_register_file(32);

class RegisterFileInTx
{
public:
    uint addr1_i;
    uint addr2_i;
    uint addr3_i;
    uint addr3_we_i;
    uint32_t addr3_wd_i;
};

class RegisterFileOutTx
{
public:
    uint32_t rd1_o;
    uint32_t rd2_o;
};

class RegisterFileScb
{
public:
    // input interface monitor port
    void writeIn(RegisterFileInTx *tx)
    {
        in_q.push_back(tx);
    }

    // output interface monitor port
    void writeOut(RegisterFileOutTx *tx)
    {

        // check queue
        if (in_q.empty())
        {
            std::cout << "Fatal Error in RegisterFileScb: Empty RegisterFileInTx queue" << std::endl;
            exit(1);
        }

        // grab transaction item from front of queue
        RegisterFileInTx *in;
        in = in_q.front();
        in_q.pop_front();

        if (simulated_register_file[in->addr1_i] != ((in->addr1_i == 0) ? 0 : tx->rd1_o))
        {
            std::cout << std::endl;
            std::cout << "RegisterFileScb: read addr1 mismatch: " << in->addr1_i << std::endl;
            std::cout << "  Expected: " << ((in->addr1_i == 0) ? 0 : tx->rd1_o) << "  Actual: " << simulated_register_file[in->addr1_i] << std::endl;
            std::cout << "  Simtime: " << simcyc << std::endl;
        }
        if (simulated_register_file[in->addr2_i] != ((in->addr2_i == 0) ? 0 : tx->rd2_o))
        {
            std::cout << std::endl;
            std::cout << "RegisterFileScb: read addr2 mismatch: " << in->addr2_i << std::endl;
            std::cout << "  Expected: " << ((in->addr2_i == 0) ? 0 : tx->rd2_o) << "  Actual: " << simulated_register_file[in->addr2_i] << std::endl;
            std::cout << "  Simtime: " << simcyc << std::endl;
        }

        if (in->addr3_we_i && in->addr3_i != 0)
        {
            simulated_register_file[in->addr3_i] = in->addr3_wd_i;
        }
    }

private:
    std::deque<RegisterFileInTx *> in_q;
};

class RegisterFileInDrv
{
public:
    RegisterFileInDrv(Vregister_file *dut)
    {
        this->dut = dut;
    }

    void drive(RegisterFileInTx *tx)
    {
        if (tx != NULL)
        {
            dut->addr1_i = tx->addr1_i;
            dut->addr2_i = tx->addr2_i;
            dut->addr3_i = tx->addr3_i;
            dut->addr3_we_i = tx->addr3_we_i;
            dut->addr3_wd_i = tx->addr3_wd_i;
            delete tx;
        }
    }

private:
    Vregister_file *dut;
};

class RegisterFileInMon
{
public:
    RegisterFileInMon(Vregister_file *dut, RegisterFileScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        // create a new transaction item and populate it with data observerd at the interface pin
        RegisterFileInTx *tx = new RegisterFileInTx();
        tx->addr1_i = dut->addr1_i;
        tx->addr2_i = dut->addr2_i;
        tx->addr3_i = dut->addr3_i;
        tx->addr3_we_i = dut->addr3_we_i;
        tx->addr3_wd_i = dut->addr3_wd_i;

        // pass transaction item to score board
        scb->writeIn(tx);
    }

private:
    Vregister_file *dut;
    RegisterFileScb *scb;
};

class RegisterFileOutMon
{
public:
    RegisterFileOutMon(Vregister_file *dut, RegisterFileScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        if (simcyc > 0)
        { // create new transaction item and populate it with result observed
            RegisterFileOutTx *tx = new RegisterFileOutTx();
            tx->rd1_o = dut->rd1_o;
            tx->rd2_o = dut->rd2_o;

            // pass transaction item to score board
            scb->writeOut(tx);
        }
    }

private:
    Vregister_file *dut;
    RegisterFileScb *scb;
};

RegisterFileInTx *rndRegisterFileInTx()
{
    RegisterFileInTx *tx = new RegisterFileInTx();
    tx->addr1_i = rand() % 32;
    tx->addr2_i = rand() % 32;
    tx->addr3_i = rand() % 32;
    tx->addr3_we_i = rand() % 2;
    tx->addr3_wd_i = rand() % 1000;
    return tx;
}

int main(int argc, char **argv, char **env)
{
    int clk;

    // initilize seed
    srand(time(NULL));

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vregister_file *dut = new Vregister_file;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("register_file.vcd");

    // init transaction item
    RegisterFileInTx *tx;

    // create driver, scoreboard, input monitor, output monitor
    RegisterFileInDrv *drv = new RegisterFileInDrv(dut);
    RegisterFileScb *scb = new RegisterFileScb();
    RegisterFileInMon *inMon = new RegisterFileInMon(dut, scb);
    RegisterFileOutMon *outMon = new RegisterFileOutMon(dut, scb);

    // init clk
    dut->clk_i = 1;

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(clk + 2 * simcyc);
            dut->clk_i = !dut->clk_i;
            if (dut->clk_i){
                // generate a randomised transaction item
                tx = rndRegisterFileInTx();
                drv->drive(tx);
                // monitor the input interface
                inMon->monitor();
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