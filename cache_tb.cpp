#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcache.h"
#include<vector>
#include<cstdint>
#include <cstdlib>
#include <ctime>
#include <iostream>

void seed_random () {
    srand(static_cast<unsigned>(time(nullptr)));
}
int get_rand () {
    return rand();
}

#define MAX_SIM_CYC 10

int main(int argc, char **argv, char **env) {
    int simcyc;
    int tick;

    Verilated::commandArgs(argc, argv);
    Vcache *top = new Vcache;
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("cache.vcd");

    top->clk_i = 0;

    std::vector<int32_t> memory;

    for (int i = 0; i<=0x1FFFF; i++){
        memory.push_back(get_rand());
    }
    std::cout << memory[12] << std::endl;

    int cntReading = 0;
    bool currentlyReading = false;
    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++) {
        
        for (tick = 0; tick < 2; tick++) {
            tfp->dump(2 * simcyc + tick);
            top->clk_i = !top->clk_i;
            top->eval();
        }
        top->write_enable_i =1;
        if(simcyc ==2){
            top->address_i = 0x10;
            top->write_data_i = 0x05;
        }
        if(simcyc ==3){
            top->address_i = 0x1000;
            top->write_data_i = 0x60;
        }
        if(simcyc ==4){
            top->address_i = 0x100;
            top->write_data_i = 0x65;
        }
        if(simcyc == 5){
            top->address_i = 0x1000;
            top->write_data_i = 0x257;
        }
        // if(simcyc ==4 ){ //when fully populated
        //     top->address_i = 0x10000;
        //     top->write_data_i = 0xFFFF;
        // }
        // if(simcyc == 5){
        //     top->address_i = 0x10000;
        //     top-> write_data_i = 0xF12F;
        // }
        
        if (Verilated::gotFinish()) break;
    }
  tfp->close();
  printf("Exiting\n");
  exit(0);
}
