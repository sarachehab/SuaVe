#include //top level sv file ".h"
#include "verilated.h"
#include "verilated_vcd_c.h"

#include "vbuddy.cpp"
#define MAX_SIM_CYC 10000

int main (int argc, char **argv, char **ev){
  int i;
  int clk;
  Verilated::commandArgs(argc, argv);

  //init top verilog instance
  Vf1_fsm * top = new Vf1_fsm;

  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp,99);
  //tfp->open ("Vf1_fsm.vcd");

  //init Vbuddy
  if(vbdOpen()!=1) return (-1);
  vbdHeader("lab 4");
  //initialize simulation inputs
  top->clk = 1;
  top->rst = 0;

  for(i=0; i<MAX_SIM_CYC; i++){

    //dump values into vcd file
    for(clk=0; clk<2; clk++){
      tfp->dump (2*i+clk);
      top->clk = !top->clk;
      top->eval ();
    }

    vbdCycle(i+1);
      
    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q'))
      exit(0);
  }
  vbdClose();
  tfp->close();
  exit(0);
}