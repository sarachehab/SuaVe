#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <fstream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vinstruction_memory.h"

#define MAX_SIM_CYC 20
#define VERIF_START_TIME 7
int simcyc = 0;

std::vector<int8_t> simulated_instruction_memory{
    static_cast<int8_t>(0x0f), static_cast<int8_t>(0xf0), static_cast<int8_t>(0x03), static_cast<int8_t>(0x13),
    static_cast<int8_t>(0x00), static_cast<int8_t>(0x00), static_cast<int8_t>(0x05), static_cast<int8_t>(0x13),
    static_cast<int8_t>(0x00), static_cast<int8_t>(0x00), static_cast<int8_t>(0x05), static_cast<int8_t>(0x93),
    static_cast<int8_t>(0x00), static_cast<int8_t>(0x05), static_cast<int8_t>(0x85), static_cast<int8_t>(0x13),
    static_cast<int8_t>(0x00), static_cast<int8_t>(0x15), static_cast<int8_t>(0x85), static_cast<int8_t>(0x93),
    static_cast<int8_t>(0xfe), static_cast<int8_t>(0x65), static_cast<int8_t>(0x9c), static_cast<int8_t>(0xe3),
    static_cast<int8_t>(0xfe), static_cast<int8_t>(0x03), static_cast<int8_t>(0x18), static_cast<int8_t>(0xe3)};

void print_lst()
{
    for (int i = 0; i < simulated_instruction_memory.size(); i++)
    {
        std::cout << static_cast<int>(simulated_instruction_memory[i]) << " ";
    }
    std::cout << std::endl;
}

class InstructionMemoryInTx
{
public:
    uint addr_i;
};

class InstructionMemoryOutTx
{
public:
    int32_t instr_o;
};

class InstructionMemoryScb
{
public:
    // input interface monitor port
    void writeIn(InstructionMemoryInTx *tx)
    {
        in_q.push_back(tx);
    }

    // output interface monitor port
    void writeOut(InstructionMemoryOutTx *tx)
    {

        // check queue
        if (in_q.empty())
        {
            std::cout << "Fatal Error in InstructionMemoryScb: Empty InstructionMemoryInTx queue" << std::endl;
            exit(1);
        }

        // grab transaction item from front of queue
        InstructionMemoryInTx *in;
        in = in_q.front();
        in_q.pop_front();

        int32_t base_address = ((in->addr_i) & 0xFFFFFFFC) & 0xBFC00000;

        int32_t expected_instruction = 0;
        int i = 0;

        expected_instruction += (simulated_instruction_memory[base_address + 3] & 0xFF) << (8 * 3);

        for (i = 0; i < 3; i++)
        {
            expected_instruction += abs((simulated_instruction_memory[base_address + i] & 0xFF) << (8 * i));
        }

        if (expected_instruction != tx->instr_o)
        {
            std::cout << std::endl;
            std::cout << "InstructionMemoryScb: read instruction mismatch: " << in->addr_i << std::endl;
            std::cout << "  Expected: " << expected_instruction << "  Actual: " << tx->instr_o << std::endl;
            std::cout << "  Simtime: " << simcyc << std::endl;
        }
    }

private:
    std::deque<InstructionMemoryInTx *>
        in_q;
};

class InstructionMemoryInDrv
{
public:
    InstructionMemoryInDrv(Vinstruction_memory *dut)
    {
        this->dut = dut;
    }

    void drive(InstructionMemoryInTx *tx)
    {
        if (tx != NULL)
        {
            dut->addr_i = tx->addr_i;
            delete tx;
        }
    }

private:
    Vinstruction_memory *dut;
};

class InstructionMemoryInMon
{
public:
    InstructionMemoryInMon(Vinstruction_memory *dut, InstructionMemoryScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        // create a new transaction item and populate it with data observerd at the interface pin
        InstructionMemoryInTx *tx = new InstructionMemoryInTx();
        tx->addr_i = dut->addr_i;

        // pass transaction item to score board
        scb->writeIn(tx);
    }

private:
    Vinstruction_memory *dut;
    InstructionMemoryScb *scb;
};

class InstructionMemoryOutMon
{
public:
    InstructionMemoryOutMon(Vinstruction_memory *dut, InstructionMemoryScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        if (simcyc > 0)
        { // create new transaction item and populate it with result observed
            InstructionMemoryOutTx *tx = new InstructionMemoryOutTx();
            tx->instr_o = dut->instr_o;

            // pass transaction item to score board
            scb->writeOut(tx);
        }
    }

private:
    Vinstruction_memory *dut;
    InstructionMemoryScb *scb;
};

InstructionMemoryInTx *rndInstructionMemoryInTx()
{
    InstructionMemoryInTx *tx = new InstructionMemoryInTx();
    tx->addr_i = (rand() % 7) + 0xBFC00000;
    return tx;
}

int main(int argc, char **argv, char **env)
{
    int clk;

    // initilize seed
    srand(time(NULL));

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vinstruction_memory *dut = new Vinstruction_memory;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("instruction_memory.vcd");

    // init transaction item
    InstructionMemoryInTx *tx;

    // create driver, scoreboard, input monitor, output monitor
    InstructionMemoryInDrv *drv = new InstructionMemoryInDrv(dut);
    InstructionMemoryScb *scb = new InstructionMemoryScb();
    InstructionMemoryInMon *inMon = new InstructionMemoryInMon(dut, scb);
    InstructionMemoryOutMon *outMon = new InstructionMemoryOutMon(dut, scb);

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(clk + 2 * simcyc);

            // if on rising clock edge
            if (clk == 1)
            {
                // generate a randomised transaction item
                tx = rndInstructionMemoryInTx();
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