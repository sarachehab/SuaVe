#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcachev2.h"
#include <vector>
#include <cstdint>
#include <cstdlib>
#include <ctime>
#include <iostream>

void seed_random () {
    srand(static_cast<unsigned>(time(nullptr)));
}
int get_rand () {
    return rand();
}

#define MAX_SIM_CYC 50

int main(int argc, char **argv, char **env) {
    int simcyc;
    int tick;

    Verilated::commandArgs(argc, argv);
    Vcachev2 *top = new Vcachev2;
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("cache.vcd");

    top->clk_i = 0;

    std::vector<int32_t> memory;

    for (int i = 0; i<=0x1FFFF; i++){
        memory.push_back(get_rand());
    }

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++) {
        for (tick = 0; tick < 2; tick++) {
            tfp->dump(2 * simcyc + tick);
            top->clk_i = !top->clk_i;
            top->eval();
        }
        //testing load operations under multiple conditions
        top->byte_op_i = 1;
        if(simcyc == 1) {
            top->cache_enable_i = 1;
            top->write_enable_i = 0;
            top->address_i = 5;//testing what happens if not on byte edge 
        }
        else if(simcyc == 2) {
            top->write_enable_i = 0;
            top->address_i = 68;
        }
        else if(simcyc == 3) {
            top->write_enable_i = 0;
            top->address_i = 12;
        }
        else if(simcyc == 4) {
            top->write_enable_i = 0;
            top->address_i = 76;
        }
        else if(simcyc == 5) {
            top->write_enable_i = 0;
            top->address_i = 204;
        }
        // else if(simcyc == 6) {
        //     top->write_enable_i = 0;
        //     top->address_i = 140;
        // }
        // else if(simcyc == 7) {
        //     top->write_enable_i = 0;
        //     top->address_i = 204;
        // }
        // else if(simcyc == 8) {
        //     top->write_enable_i = 0;
        //     top->address_i = 460;
        // } 
        // else if(simcyc == 9) {
        //     top->write_enable_i = 0;
        //     top->address_i = 0b101001100;
        // }
        //testing store op in multiple conditions:
        else if(simcyc == 5) {
            top->write_enable_i = 1;
            top->address_i = 16;
            top->write_data_i = 0x34af57df;
        }
        else if(simcyc == 6) {
            top->write_enable_i = 1;
            top->address_i = 16;
            top->write_data_i = 0x56efa290;
        }
        else if(simcyc == 7) {
            top->write_enable_i = 1;
            top->address_i = 20;
            top->write_data_i = 0x90fe4510;
        }
        else if(simcyc == 8) {
            top->write_enable_i = 1;
            top->address_i = 16;
            top->write_data_i = 0x8d1f094a;
        }
        else if(simcyc == 9) {
            top->write_enable_i = 1;
            top->address_i = 32;
            top->write_data_i = 0x8d13214a;
        }
        else top->cache_enable_i = 0;


        if (Verilated::gotFinish()) break;
    }
  tfp->close();
  exit(0);
}

