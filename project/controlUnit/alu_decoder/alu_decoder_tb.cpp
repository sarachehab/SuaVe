#include "Valu_decoder.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "iostream"
#include <vector>
#include <iostream>
#include <string>

std::vector <std::string> instructions = {
    "add", "sub", "and", "or", "slt", "sll","srl","sltu","xor" ,
    "addi", "andi", "ori", "slti","slli","srli", "xori",
    "lui",
    "lw", "sw", "lbu", "sb",
    "bne",
    "jalr",
    };

int answers (std::string instr){

    if(instr == "add" || instr == "addi" || instr == "lw" || instr == "sw" || instr == "lbu" || instr == "sb"|| instr == "jalr") {
    return 0b0000;
    }
    else if(instr == "bne" || instr == "sub") {
    return 0b1000;
    }
    else if(instr == "lui" || instr == "sll" || instr == "slli") {
    return 0b0001;
    }
    else if(instr == "sra" || instr == "srai") {
    return 0b1101;
    }
    else if(instr == "srl" || instr == "srli") {
    return 0b0101;
    }   
    else if(instr == "sltu" || instr == "sltui") {
    return 0b0011;
    }
    else if(instr == "slt" || instr == "slti") {
    return 0b0010;
    }
    else if(instr == "or" || instr == "ori") {
    return 0b0110;
    }
    else if(instr == "and" || instr == "andi") {
    return 0b0111;
    }
    else if(instr == "xor" || instr == "xori") {
    return 0b0100;
    }
    else{
        return 0;
    }
}
int getaluop (std::string instr) {

    if(instr == "add" || instr == "sub" || instr == "and" || instr == "or" || instr == "slt" || instr == "sll" || instr == "srl" || instr == "sltu" || instr == "xor" || instr == "sra" || instr=="jalr") {
        return 0b10;
    }
    else if(instr == "addi" || instr == "andi" || instr == "ori" || instr == "slti" || instr == "slli" || instr == "srli" || instr == "xori" || instr == "srai" || instr == "sltiu") {
        return 0b10;
    }
    else if(instr == "lw" || instr == "sw" || instr == "lbu" || instr == "sb") {
        return 0b00;
    }
    else if(instr == "bne") {
        return 0b01;
    }
        else if(instr == "lui") {
        return 0b11;
    }
    else {
        return 0b0;
    }
}

int getaluopb5 (std::string instr) {

    if(instr == "add" || instr == "sub" || instr == "and" || instr == "or" || instr == "slt" || instr == "sll" || instr == "srl" || instr == "sltu" || instr == "xor" || instr == "sra" || instr == "jalr") {
        return 0b1;
    }
    else if(instr == "addi" || instr == "andi" || instr == "ori" || instr == "slti" || instr == "slli" || instr == "srli" || instr == "xori" || instr == "srai" || instr == "sltiu") {
        return 0b0;
    }

    else {
        return 0b0;
    }
}



int getfunct3 (std::string instr) {

    if(instr == "add" || instr == "sub" || instr == "addi" || instr == "lbu" || instr == "sb" || instr == "bne" || instr == "jalr") {
        return 0x0;
    }

    else if(instr == "sll" || instr == "slli") {
        return 0x1;
    }

    else if(instr == "slt" || instr == "slti" || instr == "lw" || instr == "sw") {
        return 0x2;
    }
    
    else if(instr == "sltu") {
        return 0x3;
    }
    
    else if(instr == "xor" || instr == "xori") {
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
    if(instr == "sub" || instr == "sra" || instr == "srai" ) {
        return 1;
    }
    else {
        return 0;
    }
}



int main (int argc, char **argv, char **ev){


    Verilated::commandArgs(argc, argv);

    //init top verilog instance
    Valu_decoder * top = new Valu_decoder;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("alu_decoder.vcd");

std::cout << "expected trace file" << std::endl;
    for(int simcyc=0; simcyc<25; simcyc++){

        top->eval();
        tfp->dump(simcyc);
    
        if(simcyc < instructions.size()) {
            top->alu_op_i = getaluop(instructions[simcyc]);
            top->funct3_i = getfunct3(instructions[simcyc]);
            top->funct7_b5_i = getfunct7_b5(instructions[simcyc]);
            top->op_5_i = getaluopb5(instructions[simcyc]);

            std::cout << answers(instructions[simcyc]) <<std::endl;
    // simulation finished

        if (Verilated::gotFinish()){
            exit(0);
        }
    }
    }
    tfp->close();
    exit(0);
    }


