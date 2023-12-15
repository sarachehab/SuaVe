#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vmain_decoder.h"

#define MAX_SIM_CYC 200
int simcyc = 0;

std::vector<int> simulated_op_values = {3, 19, 35, 51, 55, 99, 103, 111};

class MainDecoderInTx
{
public:
    uint op_i;
};

class MainDecoderOutTx
{
public:
    int branch_o;
    int jump_o;
    int result_src_o;
    int mem_write_o;
    int alu_src_o;
    int imm_src_o;
    int reg_write_o;
    int alu_op_o;
};

class MainDecoderScb
{
public:
    // input interface monitor port
    void writeIn(MainDecoderInTx *tx)
    {
        in_q.push_back(tx);
    }

    // output interface monitor port
    void writeOut(MainDecoderOutTx *tx)
    {

        // check queue
        if (in_q.empty())
        {
            std::cout << "Fatal Error in MainDecoderScb: Empty MainDecoderInTx queue" << std::endl;
            exit(1);
        }

        // grab transaction item from front of queue
        MainDecoderInTx *in;
        in = in_q.front();
        in_q.pop_front();

        switch (in->op_i)
        {
        case 3: // load
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->result_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: result source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->result_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 35: // store
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 19: // immediate
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->result_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: result source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->result_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 2)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 2
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 51:
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->result_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: result source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->result_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 2)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 2
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 55: // Upper Immediate
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->result_src_o != 3)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: result source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 3
                          << "  Actual: " << tx->result_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 4)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 4
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 99:
            if (tx->branch_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 2)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 2
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 103: // JALR
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->result_src_o != 2)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: result source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 2
                          << "  Actual: " << tx->result_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 2)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 2
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 111:
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 3)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 3
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "MainDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;
        }
    }

private:
    std::deque<MainDecoderInTx *> in_q;
};

class MainDecoderInDrv
{
public:
    MainDecoderInDrv(Vmain_decoder *dut)
    {
        this->dut = dut;
    }

    void drive(MainDecoderInTx *tx)
    {
        if (tx != NULL)
        {
            dut->op_i = tx->op_i;
            delete tx;
        }
    }

private:
    Vmain_decoder *dut;
};

class MainDecoderInMon
{
public:
    MainDecoderInMon(Vmain_decoder *dut, MainDecoderScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        // create a new transaction item and populate it with data observerd at the interface pin
        MainDecoderInTx *tx = new MainDecoderInTx();
        tx->op_i = dut->op_i;

        // pass transaction item to score board
        scb->writeIn(tx);
    }

private:
    Vmain_decoder *dut;
    MainDecoderScb *scb;
};

class MainDecoderOutMon
{
public:
    MainDecoderOutMon(Vmain_decoder *dut, MainDecoderScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        if (simcyc > 0)
        { // create new transaction item and populate it with result observed
            MainDecoderOutTx *tx = new MainDecoderOutTx();
            tx->branch_o = dut->branch_o;
            tx->jump_o = dut->jump_o;
            tx->result_src_o = dut->result_src_o;
            tx->mem_write_o = dut->mem_write_o;
            tx->alu_src_o = dut->alu_src_o;
            tx->imm_src_o = dut->imm_src_o;
            tx->reg_write_o = dut->reg_write_o;
            tx->alu_op_o = dut->alu_op_o;

            // pass transaction item to score board
            scb->writeOut(tx);
        }
    }

private:
    Vmain_decoder *dut;
    MainDecoderScb *scb;
};

MainDecoderInTx *rndMainDecoderInTx()
{
    MainDecoderInTx *tx = new MainDecoderInTx();
    tx->op_i = simulated_op_values[rand() % simulated_op_values.size()];
    return tx;
}

int main(int argc, char **argv, char **env)
{
    int clk;

    // initilize seed
    srand(time(NULL));

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vmain_decoder *dut = new Vmain_decoder;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("main_decoder.vcd");

    // init transaction item
    MainDecoderInTx *tx;

    // create driver, scoreboard, input monitor, output monitor
    MainDecoderInDrv *drv = new MainDecoderInDrv(dut);
    MainDecoderScb *scb = new MainDecoderScb();
    MainDecoderInMon *inMon = new MainDecoderInMon(dut, scb);
    MainDecoderOutMon *outMon = new MainDecoderOutMon(dut, scb);

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(clk + 2 * simcyc);

            // if on rising clock edge
            if (clk == 1)
            {
                // generate a randomised transaction item
                tx = rndMainDecoderInTx();
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