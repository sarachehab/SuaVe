#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Valu_decoder.h"

#define MAX_SIM_CYC 20
#define VERIF_START_TIME 7
int simcyc = 0;

std::vector<int> simulated_op_values = {3, 19, 35, 51, 99, 111};

class AluDecoderInTx
{
public:
    uint op_i;
};

class AluDecoderOutTx
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

class AluDecoderScb
{
public:
    // input interface monitor port
    void writeIn(AluDecoderInTx *tx)
    {
        in_q.push_back(tx);
    }

    // output interface monitor port
    void writeOut(AluDecoderOutTx *tx)
    {

        // check queue
        if (in_q.empty())
        {
            std::cout << "Fatal Error in AluDecoderScb: Empty AluDecoderInTx queue" << std::endl;
            exit(1);
        }

        // grab transaction item from front of queue
        AluDecoderInTx *in;
        in = in_q.front();
        in_q.pop_front();

        switch (in->op_i)
        {
        case 3: // load
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->result_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: result source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->result_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 35: // store
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 19: // immediate
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->result_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: result source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->result_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 2)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 2
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 51:
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->result_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: result source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->result_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 2)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 2
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 99:
            if (tx->branch_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 2)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 2
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;

        case 111:
            if (tx->branch_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: branch mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->branch_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->jump_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: jump mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->jump_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->mem_write_o != 0)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: memory write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 0
                          << "  Actual: " << tx->mem_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_src_o != 2) // don't care?
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 2
                          << "  Actual: " << tx->alu_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->imm_src_o != 3)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: immediate source mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 3
                          << "  Actual: " << tx->imm_src_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->reg_write_o != 1)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: register write mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 1
                          << "  Actual: " << tx->reg_write_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            if (tx->alu_op_o != 2)
            {
                std::cout << std::endl;
                std::cout << "AluDecoderScb: alu operation mismatch for op " << in->op_i << std::endl;
                std::cout << "  Expected: " << 2
                          << "  Actual: " << tx->alu_op_o << std::endl;
                std::cout << "  Simtime: " << simcyc << std::endl;
            }
            break;
        }
    }

private:
    std::deque<AluDecoderInTx *> in_q;
};

class AluDecoderInDrv
{
public:
    AluDecoderInDrv(Valu_decoder *dut)
    {
        this->dut = dut;
    }

    void drive(AluDecoderInTx *tx)
    {
        if (tx != NULL)
        {
            dut->op_i = tx->op_i;
            delete tx;
        }
    }

private:
    Valu_decoder *dut;
};

class AluDecoderInMon
{
public:
    AluDecoderInMon(Valu_decoder *dut, AluDecoderScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        // create a new transaction item and populate it with data observerd at the interface pin
        AluDecoderInTx *tx = new AluDecoderInTx();
        tx->op_i = dut->op_i;

        // pass transaction item to score board
        scb->writeIn(tx);
    }

private:
    Valu_decoder *dut;
    AluDecoderScb *scb;
};

class AluDecoderOutMon
{
public:
    AluDecoderOutMon(Valu_decoder *dut, AluDecoderScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        if (simcyc > 0)
        { // create new transaction item and populate it with result observed
            AluDecoderOutTx *tx = new AluDecoderOutTx();
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
    Valu_decoder *dut;
    AluDecoderScb *scb;
};

AluDecoderInTx *rndAluDecoderInTx()
{
    AluDecoderInTx *tx = new AluDecoderInTx();
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
    Valu_decoder *dut = new Valu_decoder;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("alu_decoder.vcd");

    // init transaction item
    AluDecoderInTx *tx;

    // create driver, scoreboard, input monitor, output monitor
    AluDecoderInDrv *drv = new AluDecoderInDrv(dut);
    AluDecoderScb *scb = new AluDecoderScb();
    AluDecoderInMon *inMon = new AluDecoderInMon(dut, scb);
    AluDecoderOutMon *outMon = new AluDecoderOutMon(dut, scb);

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(clk + 2 * simcyc);

            // if on rising clock edge
            if (clk == 1)
            {
                // generate a randomised transaction item
                tx = rndAluDecoderInTx();
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