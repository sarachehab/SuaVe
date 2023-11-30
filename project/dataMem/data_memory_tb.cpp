#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <fstream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vdata_memory.h"

#define MAX_SIM_CYC 20
#define VERIF_START_TIME 7
int simcyc = 0;

std::vector<int32_t> simulated_data_memory;

void build_simulated_data_memory()
{
    std::ifstream input_file;
    input_file.open("gaussian_hex.txt");

    if (!input_file.is_open())
    {
        std::cout << "could not access file" << std::endl;
    }

    int32_t n;

    while (input_file >> n)
    {
        simulated_data_memory.push_back(n);
    }

    input_file.close();
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
        std::cout << std::endl
                  << "simulation_value: " << tx->rd_o << std::endl;
        int i = 0;

        switch (in->byte_op_i)
        {
        case 0:

            for (i = 0; i < 4; i++)
            {
                std::cout << expected_value << std::endl;
                expected_value += (simulated_data_memory[base_address + i] & 0xFF) << (8 * i);
            }
            std::cout << "expected value: " << expected_value << std::endl;

            if (read_value != expected_value)
            {
                std::cout << std::endl;
                std::cout << "DataMemoryScb: read word mismatch: " << in->addr_i << std::endl;
                std::cout << "  Expected: " << expected_value << "  Actual: " << read_value << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }

            if (in->we_i)
            {
                simulated_data_memory[base_address] = (in->wd_i) & (0xFF);
                simulated_data_memory[base_address + 1] = ((in->wd_i) >> 8) & (0xFF);
                simulated_data_memory[base_address + 2] = ((in->wd_i) >> 16) & (0xFF);
                simulated_data_memory[base_address + 3] = ((in->wd_i) >> 24) & (0xFF);
            }

            break;

        case 1:

            expected_value = simulated_data_memory[(in->addr_i) % 65536];

            if (expected_value != read_value)
            {
                std::cout << std::endl;
                std::cout << "DataMemoryScb: read byte mismatch: " << in->addr_i << std::endl;
                std::cout << "  Expected: " << expected_value << "  Actual: " << read_value << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }

            if (in->we_i)
            {
                simulated_data_memory[in->addr_i] = in->wd_i;
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
    DataMemoryInDrv(Vdata_memory *dut)
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
    Vdata_memory *dut;
};

class DataMemoryInMon
{
public:
    DataMemoryInMon(Vdata_memory *dut, DataMemoryScb *scb)
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
    Vdata_memory *dut;
    DataMemoryScb *scb;
};

class DataMemoryOutMon
{
public:
    DataMemoryOutMon(Vdata_memory *dut, DataMemoryScb *scb)
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
    Vdata_memory *dut;
    DataMemoryScb *scb;
};

DataMemoryInTx *rndDataMemoryInTx()
{
    DataMemoryInTx *tx = new DataMemoryInTx();
    tx->addr_i = (rand() % 10) + 65536;
    tx->we_i = rand() % 2;
    tx->byte_op_i = rand() % 2;
    tx->wd_i = rand() % 256;
    return tx;
}

int main(int argc, char **argv, char **env)
{
    int clk;
    build_simulated_data_memory();

    // initilize seed
    srand(time(NULL));

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vdata_memory *dut = new Vdata_memory;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("data_memory.vcd");

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