#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcache.h"

#include <iostream>

#define MAX_SIM_CYC 50

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


    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++) {
        for (tick = 0; tick < 2; tick++) {
            tfp->dump(2 * simcyc + tick);
            top->clk_i = !top->clk_i;
            top->eval();
        }

        top->cache_enable_i = 0b0;

        if(simcyc == 3) {
            top->cache_enable_i = 1;
            top->write_enable_i = 0b1;
            top->address_i = 0b100000;
            top->write_data_i = 59;

        }
        if(simcyc == 4) {
            top->write_enable_i = 0b1;
            top->address_i = 0b1100000;
            top->write_data_i = 56;
        }
        else top->cache_enable_i = 0b0;

        if (Verilated::gotFinish()) break;
    }
  tfp->close();
  exit(0);
}
