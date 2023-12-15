#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <fstream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcache.h"

#define MAX_SIM_CYC 20
#define VERIF_START_TIME 7
int simcyc = 0;

std::vector<int8_t> simulated_data_memory{
    static_cast<int8_t>(0x55),
    static_cast<int8_t>(0x42),
    static_cast<int8_t>(0x4F),
    static_cast<int8_t>(0x3C),
    static_cast<int8_t>(0x50),
    static_cast<int8_t>(0x1A),
    static_cast<int8_t>(0x18),
    static_cast<int8_t>(0xB9)};

void print_lst()
{
    for (int i = 0; i < simulated_data_memory.size(); i++)
    {
        std::cout << static_cast<int>(simulated_data_memory[i]) << " ";
    }
    std::cout << std::endl;
}

class DataMemoryInTx
{
public:
    uint addr_i;
    uint byte_op_i;
    uint we_i;
    int32_t wd_i;
};

class DataMemoryOutTx
{
public:
    int32_t rd_o;
};

class DataMemoryScb
{
public:
    // input interface monitor port
    void writeIn(DataMemoryInTx *tx)
    {
        in_q.push_back(tx);
    }

    // output interface monitor port
    void writeOut(DataMemoryOutTx *tx)
    {

        // check queue
        if (in_q.empty())
        {
            std::cout << "Fatal Error in DataMemoryScb: Empty DataMemoryInTx queue" << std::endl;
            exit(1);
        }

        // grab transaction item from front of queue
        DataMemoryInTx *in;
        in = in_q.front();
        in_q.pop_front();

        int32_t base_address = ((in->addr_i) & 0xFFFFFFFC) & 65535;

        int32_t expected_value = 0;
        int32_t read_value = tx->rd_o;
        int i = 0;

        switch (in->byte_op_i)
        {
        case 0:

            if (in->we_i == 0)
            {
                expected_value += (simulated_data_memory[base_address + 3] & 0xFF) << (8 * 3);

                for (i = 0; i < 3; i++)
                {
                    expected_value += abs((simulated_data_memory[base_address + i] & 0xFF) << (8 * i));
                }

                if (read_value != expected_value)
                {
                    std::cout << std::endl;
                    std::cout << "DataMemoryScb: read word mismatch: " << in->addr_i << std::endl;
                    std::cout << "  Expected: " << expected_value << "  Actual: " << read_value << std::endl;
                    std::cout << "  Simtime: " << simcyc << std::endl;
                }
            }

            else
            {
                simulated_data_memory[base_address] = (in->wd_i) & (0xFF);
                simulated_data_memory[base_address + 1] = ((in->wd_i) >> 8) & (0xFF);
                simulated_data_memory[base_address + 2] = ((in->wd_i) >> 16) & (0xFF);
                simulated_data_memory[base_address + 3] = ((in->wd_i) >> 24) & (0xFF);
            }

            break;

        case 1:

            if (in->we_i == 0)
            {
                expected_value = simulated_data_memory[(in->addr_i) % 65536];

                if (expected_value < 0)
                {
                    expected_value = (1 << 8) + expected_value; // get 2s complement
                }

                if (expected_value != read_value)
                {
                    std::cout << std::endl;
                    std::cout << "DataMemoryScb: read byte mismatch: " << in->addr_i << std::endl;
                    std::cout << "  Expected: " << expected_value << "  Actual: " << read_value << std::endl;
                    std::cout << "  Simtime: " << simcyc << std::endl;
                }
            }
            else
            {
                simulated_data_memory[(in->addr_i) % 65536] = in->wd_i;
            }

            break;
        }
    }

private:
    std::deque<DataMemoryInTx *> in_q;
};

class DataMemoryInDrv
{
public:
    DataMemoryInDrv(Vcache *dut)
    {
        this->dut = dut;
    }

    void drive(DataMemoryInTx *tx)
    {
        if (tx != NULL)
        {
            dut->addr_i = tx->addr_i;
            dut->we_i = tx->we_i;
            dut->byte_op_i = tx->byte_op_i;
            dut->wd_i = tx->wd_i;
            delete tx;
        }
    }

private:
    Vcache *dut;
};

class DataMemoryInMon
{
public:
    DataMemoryInMon(Vcache *dut, DataMemoryScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        // create a new transaction item and populate it with data observerd at the interface pin
        DataMemoryInTx *tx = new DataMemoryInTx();
        tx->addr_i = dut->addr_i;
        tx->we_i = dut->we_i;
        tx->byte_op_i = dut->byte_op_i;
        tx->wd_i = dut->wd_i;

        // pass transaction item to score board
        scb->writeIn(tx);
    }

private:
    Vcache *dut;
    DataMemoryScb *scb;
};

class DataMemoryOutMon
{
public:
    DataMemoryOutMon(Vcache *dut, DataMemoryScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        if (simcyc > 0)
        { // create new transaction item and populate it with result observed
            DataMemoryOutTx *tx = new DataMemoryOutTx();
            tx->rd_o = dut->rd_o;

            // pass transaction item to score board
            scb->writeOut(tx);
        }
    }

private:
    Vcache *dut;
    DataMemoryScb *scb;
};

DataMemoryInTx *rndDataMemoryInTx()
{
    DataMemoryInTx *tx = new DataMemoryInTx();
    tx->addr_i = (rand() % 8) + 65536;
    tx->we_i = rand() % 2;
    tx->byte_op_i = rand() % 2;
    tx->wd_i = rand() % 256;
    return tx;
}

int main(int argc, char **argv, char **env)
{
    int clk;

    // initilize seed
    srand(time(NULL));

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vcache *dut = new Vcache;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("cache.vcd");

    // init transaction item
    DataMemoryInTx *tx;

    // create driver, scoreboard, input monitor, output monitor
    DataMemoryInDrv *drv = new DataMemoryInDrv(dut);
    DataMemoryScb *scb = new DataMemoryScb();
    DataMemoryInMon *inMon = new DataMemoryInMon(dut, scb);
    DataMemoryOutMon *outMon = new DataMemoryOutMon(dut, scb);

    // init clk
    dut->clk_i = 1;

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(clk + 2 * simcyc);
            dut->clk_i = !dut->clk_i;


            // if on rising clock edge
            if (dut->clk_i == 1)
            {
                // generate a randomised transaction item
                tx = rndDataMemoryInTx();
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
