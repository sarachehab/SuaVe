#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vextend_unit.h"

#define MAX_SIM_CYC 20
int simcyc = 0;

std::vector<uint> possible_extend_unit_control = {0, 1, 2, 3, 4};

int32_t ExtendUnitTest(uint32_t instruction, int imm_src_i)
{
    int immediate = 0;

    // Extracting immediate based on instruction type
    switch (imm_src_i)
    {
    case 0:                                                                     // I-type instruction
        immediate = (int)((instruction >> 13) & 0xFFF);                         // 12-bit immediate
        immediate = (immediate & 0x800) ? (immediate | 0xFFFFF000) : immediate; // Sign extension
        break;
    case 1:                                                                             // S-type instruction
        immediate = (int)(((instruction >> 13) & 0xFE0) | ((instruction >> 0) & 0x1F)); // 12-bit immediate
        immediate = (immediate & 0x800) ? (immediate | 0xFFFFF000) : immediate;         // Sign extension
        break;
    case 2: // B-type instruction
        immediate = (int)(((instruction & 0x1000000) >> 13) | ((instruction & 0xFC0000) >> 14) |
                          ((instruction & 0x1E) >> 1) | ((instruction & 0x1) << 10)); // 13-bit immediate
        immediate <<= 1;
        immediate = (immediate & 0x1000) ? (immediate | 0xFFFFE000) : immediate; // Sign extension
        break;
    case 3: // J-type instruction
        immediate = (int)(((instruction & 0x1000000) >> 5) | ((instruction & 0x1FE0) << 6) |
                          ((instruction & 0x2000) >> 3) | ((instruction & 0xFFC000) >> 14)); // 21-bit immediate
        immediate <<= 1;
        immediate = (immediate & 0x100000) ? (immediate | 0xFFE00000) : immediate; // Sign extension
        break;
    case 4:                                         // U-type instruction
        immediate = (int)(instruction & 0x1FFFFE0); // 20-bit immediate, zero-extended
        immediate <<= 7;
        break;
    default:
        immediate = 0;
        break;
    }

    return immediate;
}

class ExtendUnitInTx
{
public:
    uint32_t instr_i;
    int imm_src_i;
};

class ExtendUnitOutTx
{
public:
    int32_t imm_ext_o;
};

class ExtendUnitScb
{
public:
    // input interface monitor port
    void writeIn(ExtendUnitInTx *tx)
    {
        in_q.push_back(tx);
    }

    // output interface monitor port
    void writeOut(ExtendUnitOutTx *tx)
    {

        // check queue
        if (in_q.empty())
        {
            std::cout << "Fatal Error in ExtendUnitScb: Empty ExtendUnitInTx queue" << std::endl;
            exit(1);
        }

        // grab transaction item from front of queue
        ExtendUnitInTx *in;
        in = in_q.front();
        in_q.pop_front();

        if (tx->imm_ext_o != ExtendUnitTest(in->instr_i, in->imm_src_i))
        {
            std::cout << std::endl;
            std::cout << "ExtendUnitScb: extension mismatch for immsrc: " << in->imm_src_i << " and instr: " << std::hex << in->instr_i << std::endl;
            std::cout << "  Expected: " << std::hex << ExtendUnitTest(in->instr_i, in->imm_src_i)
                      << "  Actual: " << std::hex << tx->imm_ext_o << std::endl;
            std::cout << "  Simtime: " << simcyc << std::endl;
        }
    }

private:
    std::deque<ExtendUnitInTx *>
        in_q;
};

class ExtendUnitInDrv
{
public:
    ExtendUnitInDrv(Vextend_unit *dut)
    {
        this->dut = dut;
    }

    void drive(ExtendUnitInTx *tx)
    {
        if (tx != NULL)
        {
            dut->instr_i = tx->instr_i;
            dut->imm_src_i = tx->imm_src_i;
            delete tx;
        }
    }

private:
    Vextend_unit *dut;
};

class ExtendUnitInMon
{
public:
    ExtendUnitInMon(Vextend_unit *dut, ExtendUnitScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        // create a new transaction item and populate it with data observerd at the interface pin
        ExtendUnitInTx *tx = new ExtendUnitInTx();
        tx->instr_i = dut->instr_i;
        tx->imm_src_i = dut->imm_src_i;

        // pass transaction item to score board
        scb->writeIn(tx);
    }

private:
    Vextend_unit *dut;
    ExtendUnitScb *scb;
};

class ExtendUnitOutMon
{
public:
    ExtendUnitOutMon(Vextend_unit *dut, ExtendUnitScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        if (simcyc > 0)
        { // create new transaction item and populate it with result observed
            ExtendUnitOutTx *tx = new ExtendUnitOutTx();
            tx->imm_ext_o = dut->imm_ext_o;

            // pass transaction item to score board
            scb->writeOut(tx);
        }
    }

private:
    Vextend_unit *dut;
    ExtendUnitScb *scb;
};

ExtendUnitInTx *rndExtendUnitInTx()
{
    ExtendUnitInTx *tx = new ExtendUnitInTx();
    tx->instr_i = rand() % 33554432;
    tx->imm_src_i = possible_extend_unit_control[rand() % possible_extend_unit_control.size()];
    return tx;
}

int main(int argc, char **argv, char **env)
{
    int clk;

    // initilize seed
    srand(time(NULL));

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vextend_unit *dut = new Vextend_unit;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("extend_unit.vcd");

    // init transaction item
    ExtendUnitInTx *tx;

    // create driver, scoreboard, input monitor, output monitor
    ExtendUnitInDrv *drv = new ExtendUnitInDrv(dut);
    ExtendUnitScb *scb = new ExtendUnitScb();
    ExtendUnitInMon *inMon = new ExtendUnitInMon(dut, scb);
    ExtendUnitOutMon *outMon = new ExtendUnitOutMon(dut, scb);

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
                tx = rndExtendUnitInTx();
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