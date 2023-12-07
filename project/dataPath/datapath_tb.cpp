#include <iostream>
#include <stdlib.h>
#include <memory>
#include <vector>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vdatapath.h"

#define MAX_SIM_CYC 20
int simcyc = 0;

std::vector<int> simulated_register_file(32, 0);
std::vector<int> simulated_data_memory(32, 0);

enum Instructions
{
    LBU,
    LW,
    ADDI,
    SLLI,
    SLTI,
    XORI,
    SRLI,
    SRAI,
    ORI,
    ANDI,
    SB,
    SW,
    ADD,
    SUB,
    SLL,
    SLT,
    SLTU,
    XOR,
    SRL,
    SRA,
    OR,
    AND,
    LUI,
    JALR,
    JAL
};

class DatapathInTx
{
public:
    uint32_t reg_addr1_i, reg_addr2_i, reg_addr3_i;
    uint reg_we_i, result_src_i;
    uint32_t imm_ext_i, pc_next_i;
    uint alu_control_i, alu_src_i, alu_eq_o;
    uint data_mem_we_i, data_mem_byte_op_i;
};

class DatapathOutTx
{
public:
    uint32_t a0_o;
    uint eq_o;
};

class DatapathScb
{
public:
    // input interface monitor port
    void writeIn(DatapathInTx *tx)
    {
        in_q.push_back(tx);
    }

    // output interface monitor port
    void writeOut(DatapathOutTx *tx)
    {
        // check queue
        if (in_q.empty())
        {
            std::cout << "Fatal Error in DatapathScb: Empty DatapathInTx queue" << std::endl;
            exit(1);
        }

        // grab transaction item from front of queue
        DatapathInTx *in;
        in = in_q.front();
        in_q.pop_front();

        // switch (in->result_src_i)
        // {
        // case 0: // I and R instructions
        //     /* code */
        //     break;
        // case 1: // load instruction
        //     if (in->data_mem_byte_op_i)
        //     {
        //     }
        //     else
        //     {
        //     }
        //     if (tx->a0_o != simulated_register_file[9])
        //     {
        //         std::cout << 'DataPathSCB Error: Wrong a0 value' << std::endl;
        //         std::cout << 'Expected: ' << simulated_register_file[9] << std::endl;
        //         std::cout << "Simulation Cycle: " << simcyc << std::endl;
        //     }
        //     break;
        // case 2: // JAL instruction
        //     simulated_register_file[in->reg_addr3_i] = in->pc_next_i;
        //     break;
        // case 3: // U instruction
        //     break;
        // }
    }

private:
    std::deque<DatapathInTx *> in_q;
};

class DatapathInDrv
{
public:
    DatapathInDrv(Vdatapath *dut)
    {
        this->dut = dut;
    }

    void drive(DatapathInTx *tx)
    {
        if (tx != NULL)
        {
            dut->reg_addr1_i = tx->reg_addr1_i;
            dut->reg_addr2_i = tx->reg_addr2_i;
            dut->reg_addr3_i = tx->reg_addr3_i;
            dut->reg_we_i = tx->reg_we_i;
            dut->result_src_i = tx->result_src_i;
            dut->imm_ext_i = tx->imm_ext_i;
            dut->alu_control_i = tx->alu_control_i;
            dut->alu_src_i = tx->alu_src_i;
            dut->data_mem_we_i = tx->data_mem_we_i;
            dut->data_mem_byte_op_i = tx->data_mem_byte_op_i;
            dut->pc_next_i = tx->pc_next_i;

            delete tx;
        }
    }

private:
    Vdatapath *dut;
};

class DatapathInMon
{
public:
    DatapathInMon(Vdatapath *dut, DatapathScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        // create a new transaction item and populate it with data observerd at the interface pin
        DatapathInTx *tx = new DatapathInTx();
        tx->reg_addr1_i = dut->reg_addr1_i;
        tx->reg_addr2_i = dut->reg_addr2_i;
        tx->reg_addr3_i = dut->reg_addr3_i;
        tx->reg_we_i = dut->reg_we_i;
        tx->result_src_i = dut->result_src_i;
        tx->imm_ext_i = dut->imm_ext_i;
        tx->alu_control_i = dut->alu_control_i;
        tx->alu_src_i = dut->alu_src_i;
        tx->data_mem_we_i = dut->data_mem_we_i;
        tx->data_mem_byte_op_i = dut->data_mem_byte_op_i;
        tx->pc_next_i = dut->pc_next_i;

        // pass transaction item to score board
        scb->writeIn(tx);
    }

private:
    Vdatapath *dut;
    DatapathScb *scb;
};

class DatapathOutMon
{
public:
    DatapathOutMon(Vdatapath *dut, DatapathScb *scb)
    {
        this->dut = dut;
        this->scb = scb;
    }

    void monitor()
    {
        if (simcyc > 0)
        { // create new transaction item and populate it with result observed
            DatapathOutTx *tx = new DatapathOutTx();
            tx->eq_o = dut->eq_o;
            tx->a0_o = dut->a0_o;

            // pass transaction item to score board
            scb->writeOut(tx);
        }
    }

private:
    Vdatapath *dut;
    DatapathScb *scb;
};

DatapathInTx *rndDatapathInTx()
{
    DatapathInTx *tx = new DatapathInTx();
    tx->reg_addr1_i = rand() % 32;
    tx->reg_addr2_i = rand() % 32;
    tx->reg_addr3_i = rand() % 32;
    tx->imm_ext_i = rand() % 256;
    tx->pc_next_i = rand() % 256;

    Instructions instr = static_cast<Instructions>(rand() % 24);

    switch (instr)
    {
    case LBU:
        tx->reg_addr1_i = 0;
        tx->imm_ext_i = rand() % 32;
        tx->alu_control_i = 0;
        tx->reg_we_i = 1;
        tx->alu_src_i = 1;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 1;
        tx->result_src_i = 1;
        break;
    case LW:
        tx->reg_addr1_i = 0;
        tx->imm_ext_i = rand() % 32;
        tx->alu_control_i = 0;
        tx->reg_we_i = 1;
        tx->alu_src_i = 1;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 1;
        break;
    case ADDI:
        tx->alu_control_i = 0;
        tx->reg_we_i = 1;
        tx->alu_src_i = 1;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case SLLI:
        tx->alu_control_i = 1;
        tx->reg_we_i = 1;
        tx->alu_src_i = 1;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        tx->imm_ext_i = rand() % 32;
        break;
    case SLTI:
        tx->alu_control_i = 2;
        tx->reg_we_i = 1;
        tx->alu_src_i = 1;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        tx->imm_ext_i = rand() % 32;
        break;
    case XORI:
        tx->alu_control_i = 4;
        tx->reg_we_i = 1;
        tx->alu_src_i = 1;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case SRLI:
        tx->alu_control_i = 5;
        tx->reg_we_i = 1;
        tx->alu_src_i = 1;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        tx->imm_ext_i = rand() % 32;
        break;
    case SRAI:
        tx->alu_control_i = 13;
        tx->reg_we_i = 1;
        tx->alu_src_i = 1;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        tx->imm_ext_i = rand() % 32;
        break;
    case SB:
        tx->reg_addr1_i = 0;
        tx->imm_ext_i = rand() % 32;
        tx->alu_control_i = 0;
        tx->reg_we_i = 0;
        tx->alu_src_i = 1;
        tx->data_mem_we_i = 1;
        tx->data_mem_byte_op_i = 1;
        tx->result_src_i = 0;
        break;
    case SW:
        tx->reg_addr1_i = 0;
        tx->imm_ext_i = rand() % 32;
        tx->alu_control_i = 0;
        tx->reg_we_i = 0;
        tx->alu_src_i = 1;
        tx->data_mem_we_i = 1;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case ADD:
        tx->alu_control_i = 0;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case SUB:
        tx->alu_control_i = 8;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case SLL:
        tx->alu_control_i = 1;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case SLT:
        tx->alu_control_i = 2;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case XOR:
        tx->alu_control_i = 4;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case SRL:
        tx->alu_control_i = 5;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case SRA:
        tx->alu_control_i = 13;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case OR:
        tx->alu_control_i = 6;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case AND:
        tx->alu_control_i = 7;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 0;
        break;
    case LUI:
        tx->alu_control_i = 0;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 3;
        tx->imm_ext_i = (tx->imm_ext_i << 20);
        break;
    case JALR:
        tx->alu_control_i = 0;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 2;
        tx->imm_ext_i = (tx->imm_ext_i << 20);
        break;
    case JAL:
        tx->reg_addr3_i = 1;
        tx->alu_control_i = 0;
        tx->reg_we_i = 1;
        tx->alu_src_i = 0;
        tx->data_mem_we_i = 0;
        tx->data_mem_byte_op_i = 0;
        tx->result_src_i = 2;
        tx->imm_ext_i = (tx->imm_ext_i << 20);
        break;
    default:;
    }
    std::cout << "Simulation Cycle: " << simcyc << std::endl;
    std::cout << "Instruction: " << instr << std::endl;
    std::cout << std::endl;
    return tx;
}

int main(int argc, char **argv, char **env)
{
    int clk;

    // initilize seed
    srand(time(NULL));

    Verilated::commandArgs(argc, argv);

    // init top verilog instance
    Vdatapath *dut = new Vdatapath;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("datapath.vcd");

    // init transaction item
    DatapathInTx *tx;

    // create driver, scoreboard, input monitor, output monitor
    DatapathInDrv *drv = new DatapathInDrv(dut);
    DatapathScb *scb = new DatapathScb();
    DatapathInMon *inMon = new DatapathInMon(dut, scb);
    DatapathOutMon *outMon = new DatapathOutMon(dut, scb);

    dut->clk_i = 1;

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (clk = 0; clk < 2; clk++)
        {
            tfp->dump(clk + 2 * simcyc);
            dut->clk_i = !dut->clk_i;
            if (clk == 1)
            {
                // generate a randomised transaction item
                tx = rndDatapathInTx();
                drv->drive(tx);
                // monitor the input interface
                inMon->monitor();
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