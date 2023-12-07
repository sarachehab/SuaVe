#include "VcontrolUnit_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <vector>
#include <iostream>
#include <string>
#include <bitset>
#define MAX_SIM_CYC 200

std::vector <std::string> instructions = {
    "add", "sub", "and", "or", "slt", "sll","srl","sltu","xor" ,
    "addi", "andi", "ori", "slti","slli","srli", "sltiu" , "xori",
    "lui",
    "lw", "sw", "lbu", "sb",
    "beq",
    "jal" , "jalr"
    };
int32_t getopcode (std::string instr) {

    if(instr == "add" || instr == "sub" || instr == "and" || instr == "or" || instr == "slt" || instr == "sll" || instr == "srl" || instr == "sltu" || instr == "xor") {
        return 0b0110011;
    }
    else if(instr == "addi" || instr == "andi" || instr == "ori" || instr == "slti" || instr == "sltiu" || instr == "slli" || instr == "srli" || instr == "sltui" || instr == "xori") {
        return 0b0010011;
    }
    else if (instr == "lui") {
        return 0b0110111;
    }
    else if(instr == "lw" || instr == "lbu") {
        return 0b0000011;
    }
    else if(instr == "sw" || instr == "sb") {
        return 0b0100011;
    }
    else if(instr == "beq") {
        return 0b1100011;
    }
    else if(instr == "jal") {
        return 0b1101111;
    }
    else {
        return 0b1100111;
    }
}

int getfunct3 (std::string instr) {

    if(instr == "add" || instr == "sub" || instr == "addi" || instr == "lbu" || instr == "sb" || instr == "beq" || instr == "jalr") {
        return 0x0;
    }

    else if(instr == "sll" || instr == "slli") {
        return 0x1;
    }

    else if(instr == "slt" || instr == "slti" || instr == "lw" || instr == "sw") {
        return 0x2;
    }
    
    else if(instr == "sltu" || instr == "sltiu") {
        return 0x3;
    }
    
    else if(instr == "xor" || instr == "xori" || instr == "lbu") {
        return 0x4;
    }
    
    else if(instr == "srl" || instr == "srli" || instr == "sra" || instr == "srai") {
        return 0x5;
    }
    
    else if(instr == "or" || instr == "ori") {
        return 0x6;
    }
    
    else if(instr == "and" || instr == "andi") {
        return 0x7;
    }
    else {
        return 0b000;
    }
}


int getfunct7_b5 (std::string instr) {
    if(instr == "sub" || instr == "sra" || instr == "srai") {
        return 1;
    }
    else {
        return 0;
    }
}

int main(int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);
    VcontrolUnit_top * top = new VcontrolUnit_top;

    int simcyc;
    int tick;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("controlUnit_top.vcd");

    for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {

        top->eval();
        tfp->dump(simcyc);

        if(simcyc < instructions.size()) {
            std::bitset<sizeof(short int) * 8> binaryRepresentation(getopcode(instructions[simcyc]));

            std::cout << instructions[simcyc] << ": " << binaryRepresentation << std::endl;
            top->zero_i = 0;
            top->op_i = getopcode(instructions[simcyc]);
            top->funct3_i = getfunct3(instructions[simcyc]);
            top->funct7_5_i = getfunct7_b5(instructions[simcyc]);
        }

        if (Verilated::gotFinish())  exit(0);
    }
    tfp->close(); 
    exit(0);
}

    /*we are interested in testing the following and these have the given inputs:
    instruction |opcode |funct3 |funct7_b5
    add         |0110011|000    |0
    sub         |0110011|000    |1
    and         |0110011|111    |0
    or          |0110011|110    |0
    slt         |0110011|010    |0

    addi        |0010011|000    |x
    andi        |0010011|111    |x 
    ori         |0010011|110    |x
    slti        |0010011|010    |x

    lw          |0000011|010    |x
    sw          |0100011|010    |x
    beq         |1100011|000    |x
    jal         |1101111|xxx    |x
    */
