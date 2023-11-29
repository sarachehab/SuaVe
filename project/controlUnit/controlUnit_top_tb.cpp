#include "VcontrolUnit_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv, char **env) {

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vdelay * top = new Vdelay;

    int simcyc;     // simulation clock count
    int tick;       // each clk cycle has two ticks for two edges


    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("delay.vcd");




}