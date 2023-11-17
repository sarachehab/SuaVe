#include "Vinstrmem.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

#define MAX_SIM_CYC 20


int main ( int argc , char ** argv , char **env) {
    //i counts the number of clock ticks
    //clk is the module clokc signal
    int simcyc;
    int tick;

    Verilated::commandArgs(argc , argv);
    //init top verilog instance
    Vinstrmem* top = new Vinstrmem; //instantitate the counter modules as Vcounter
    //init tracedump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp , 99);
    tfp->open ("instrmem.vcd");

    //intialise simulation inputs
    top->A = 0;
    top->clk = 0;

    //run simulation for many clock cycles
    for (simcyc = 0 ; simcyc < MAX_SIM_CYC ; simcyc++){
        //dump varaibles into VCD file and toggle clock
        for(tick = 0 ; tick < 2 ; tick++) {
            tfp->dump (2*simcyc + tick); //unit in ps
            top->clk = !top->clk;
            top->eval();
        }

        //testing if the ROM outputs the expected instructions by incrementing Read Address:
        top->A++;




        if(Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}

