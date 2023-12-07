#include "Vdatapath.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

void seed_random () {
    srand(static_cast<unsigned>(time(nullptr)));
}
int get_rand () {
    return (rand() % 200) + 1;
}

//adding values to registers to run tests. 
void test_load_values (Vdatapath* top , int i , int cmp) {
    top->data_mem_we_i = 0;
    top->data_mem_byte_op_i = 0;
    top->pc_next_i = 0;
    top->reg_we_i = 1;
    top->result_src_i = 0;
    top->alu_control_i = 0;//set to add mode which is what is used to "MOV" into register
    top->alu_src_i = 1;//set to immediate mode therefore reg_addr2_i is dont care:
    top->reg_addr2_i = 0;


    if(i-cmp == 1) {
        std::cout << "testing if register 0 works" << std::endl;
        //test if writing to register zero works as expected.
        top->reg_addr3_i = 0;
        top->reg_addr1_i = 0;//temporary register 0;
        top->imm_ext_i = get_rand();
    }

    else if((i-cmp) == 2) {
        std::cout << "testing if register can hold values" << std::endl;
        top->reg_addr3_i = 5;
        top->reg_addr1_i = 0;//temporary register 0;
        top->imm_ext_i = get_rand();
    }
    else if(i-cmp == 3) {
        std::cout << "testing if register can change value" << std::endl;
        top->reg_addr3_i = 5;
        top->reg_addr1_i = 0;//temporary register 0;
        top->imm_ext_i = get_rand();
    }
    else if(i-cmp == 4) {
        std::cout << "adding values to registers for future tests" << std::endl;
        top->reg_addr3_i = 6;
        top->reg_addr1_i = 0;//temporary register 0;
        top->imm_ext_i = get_rand();
    }
    else if(i-cmp == 5) {
        top->reg_addr3_i = 7;
        top->reg_addr1_i = 0;//temporary register 0;
        top->imm_ext_i = get_rand();
    }
}

//testing if alu controls are working and correct outputs are being written to a0: 
void test_alu (Vdatapath* top , int i , int cmp) {
    //basic settings:
    top->data_mem_we_i = 0;
    top->data_mem_byte_op_i = 0;
    top->pc_next_i = 0;
    top->reg_we_i = 1;
    top->result_src_i = 0;
    
    if(i-cmp == 1) {
        std::cout  << "testing add instruction with imm" << std::endl;
        top->alu_control_i = 0;
        top->alu_src_i = 1;
        top->reg_addr1_i = 5;
        top->reg_addr2_i = 0;//(dont care)
        top->reg_addr3_i = 10;
        top->imm_ext_i = get_rand();
    }
    else if(i-cmp == 2) {
        std::cout  << "testing add instruction with another reg" << std::endl;
        top->alu_control_i = 0;
        top->alu_src_i = 0;
        top->reg_addr1_i = 6;
        top->reg_addr2_i = 7;
        top->reg_addr3_i = 10;
        top->imm_ext_i = get_rand();//dont care
    }
    else if(i-cmp == 3) {
        std::cout  << "testing logical shift left with imm" << std::endl;
        top->alu_control_i = 0b0001;
        top->alu_src_i = 1;
        top->reg_addr1_i = 5;
        top->reg_addr2_i = 7;//(dont care)
        top->reg_addr3_i = 10;
        top->imm_ext_i = 2; //should shift value and we should see it quadruple
    }
    else if(i-cmp == 4) {
        //first move suitable value into register to carry out a shift
        top->alu_control_i = 0b0000;
        top->alu_src_i = 1;
        top->reg_addr1_i = 0;
        top->reg_addr2_i = 7;//dont care
        top->reg_addr3_i = 5;
        top->imm_ext_i = 2;
    }
    else if(i-cmp == 5){
        top->alu_control_i = 0b0001;
        top->alu_src_i = 0;
        top->reg_addr1_i = 7;
        top->reg_addr2_i = 5;
        top->reg_addr3_i = 10;//expect to sift by 2 which is *4 operation
        top->imm_ext_i = 6;//dont care
    }
    else if(i-cmp == 6){
        std::cout << "testing set less than with imm" << std::endl;
        top->alu_control_i = 0b0010;
        top->alu_src_i = 1;
        top->reg_addr1_i = 7;
        top->reg_addr2_i = 5;//dont care
        top->reg_addr3_i = 10;//should contain binary value 1 or 0
        top->imm_ext_i = 150;
    }
    else if(i-cmp == 7){
        std::cout << "testing set less than with imm" << std::endl;
        top->alu_control_i = 0b0010;
        top->alu_src_i = 0;
        top->reg_addr1_i = 7;
        top->reg_addr2_i = 5;
        top->reg_addr3_i = 10;//should contain binary value 1 or 0
        top->imm_ext_i = 150;//dont care
    }
    else if(i-cmp == 8){
        std::cout << "testing xor with imm" << std::endl;
        top->alu_control_i = 0b0100;
        top->alu_src_i = 1;
        top->reg_addr1_i = 6;
        top->reg_addr2_i = 5;//dont care
        top->reg_addr3_i = 10;//should hold rg[6] ^ 100
        top->imm_ext_i = get_rand();
    }
    else if(i-cmp == 9){
        std::cout << "testing xor with another reg" << std::endl;
        top->alu_control_i = 0b0100;
        top->alu_src_i = 0;
        top->reg_addr1_i = 6;
        top->reg_addr2_i = 5;
        top->reg_addr3_i = 10;//should hold rg[6] ^ reg[5]
        top->imm_ext_i = 100;//dont care
    }
    else if(i-cmp == 10){
        std::cout << "testing logical shift right with imm" << std::endl;
        top->alu_control_i = 0b0101;
        top->alu_src_i = 1;
        top->reg_addr1_i = 7;
        top->reg_addr2_i = 5;//dont care
        top->reg_addr3_i = 10;//should hold rg[7] >> 2
        top->imm_ext_i = 2; //result should be divided by 4
    }
    else if(i-cmp == 11){
        std::cout << "testing logical shift right with another reg" << std::endl;
        top->alu_control_i = 0b0101;
        top->alu_src_i = 0;
        top->reg_addr1_i = 6;
        top->reg_addr2_i = 5;
        top->reg_addr3_i = 10;//should hold rg[7] >> reg[5](2)
        top->imm_ext_i = 100;//dont care
    }
    else if(i-cmp == 12){
        std::cout << "testing or with imm" << std::endl;
        top->alu_control_i = 0b0110;
        top->alu_src_i = 1;
        top->reg_addr1_i = 6;
        top->reg_addr2_i = 5;//dont care
        top->reg_addr3_i = 10;//should hold rg[6] or imm
        top->imm_ext_i = get_rand();
    }
    else if(i-cmp == 13){
        std::cout << "testing or with another reg" << std::endl;
        top->alu_control_i = 0b0110;
        top->alu_src_i = 0;
        top->reg_addr1_i = 7;
        top->reg_addr2_i = 5;
        top->reg_addr3_i = 10;//should hold rg[7] or reg[5]
        top->imm_ext_i = get_rand(); // dont care
    }
    else if(i-cmp == 14){
        std::cout << "testing and with imm" << std::endl;
        top->alu_control_i = 0b0111;
        top->alu_src_i = 1;
        top->reg_addr1_i = 6;
        top->reg_addr2_i = 5;//dont care
        top->reg_addr3_i = 10;//should hold rg[6] and imm
        top->imm_ext_i = get_rand();
    }
    else if(i-cmp == 15){
        std::cout << "testing and with another reg" << std::endl;
        top->alu_control_i = 0b0111;
        top->alu_src_i = 0;
        top->reg_addr1_i = 6;
        top->reg_addr2_i = 7;
        top->reg_addr3_i = 10;//should hold rg[6] and reg[5]
        top->imm_ext_i = get_rand();//dont care
    }
    else if(i-cmp == 16){
        std::cout << "testing sub (only reg to reg)" << std::endl;
        top->alu_control_i = 0b1000;
        top->alu_src_i = 0;
        top->reg_addr1_i = 6;
        top->reg_addr2_i = 7;
        top->reg_addr3_i = 10;//should hold rg[6] - reg[5]
        top->imm_ext_i = get_rand();//dont care
    }
    else if(i-cmp == 17){
        std::cout << "testing arithmetic shift right with imm" << std::endl;
        //first we must load appropriate values to test this
        top->alu_control_i = 0b000;
        top->alu_src_i = 1;
        top->reg_addr1_i = 0;
        top->reg_addr2_i = 7;//dont care
        top->reg_addr3_i = 5; // set r5 to -100
        top->imm_ext_i = -1 * get_rand();
    }
    else if(i-cmp == 18){
        //not working.
        top->alu_control_i = 0b1101;
        top->alu_src_i = 1;
        top->reg_addr1_i = 5;
        top->reg_addr2_i = 7;//dont care
        top->reg_addr3_i = 10;//should hold rg[5](-100) >> 2 which is divide by 4
        top->imm_ext_i = 2;
    }

}

/*
reg adresses can range from 0-31
results source can range from 0-3
immext and pcnext are 32 bit numbers
alucontrol does specific things depending on number in range 0-7

we are reading the outputs from register a0 so we would need to set reg_addr_3_i = 10;

to drive values into the register file we will make use of the imm_ext_i input ? random number? 
__________________________________________________________________
>first load values into register file...
that is a good test as it is 

>then we need to check with the register file data that the alu_controls are working
and that the correct data is being written to the expected register. 

>then test if register values can be moved into data memory
and if these values can then be moved into the register file

>with that we have also tested the output control mux but we need to run a final test on if
we are able to write data to the register file from the pc_next_i input. 

with that we should have covered all our basis?

*/

int main ( int argc , char ** argv , char **env) {
    seed_random();
    int i;
    int clk;

    Verilated::commandArgs(argc , argv);
    Vdatapath* top = new Vdatapath; //instantitate the counter modules as Vcounter
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp , 99);
    tfp->open ("dpv2.vcd");
    std::cout << "----------running tests----------" << std::endl;

    //run simulation for many clock cycles
    for (i = 0 ; i < 50 ; i++){
        //dump varaibles into VCD file and toggle clock

        for(clk= 0 ; clk < 2 ; clk++) {
            tfp->dump (2*i+clk); //unit in ps
            top->clk_i = !top->clk_i;
            top->eval();
        }
        int init_test_load_values = 3;
        int init_test_alu = 10;

        if(i > init_test_load_values && i < init_test_alu) {
            test_load_values(top , i , init_test_load_values);
        }
        
        if(i > init_test_alu) {
            test_alu(top , i , init_test_alu);
        }

        if(Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}




