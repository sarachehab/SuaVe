#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>

//#include "vbuddy.cpp"
#define MAX_SIM_CYC 10000

int main (int argc, char **argv, char **ev){
  int i;
  int clk;
  Verilated::commandArgs(argc, argv);

  //init top verilog instance
  Vtop* top = new Vtop;

  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp,99);
  tfp->open ("top.vcd");//!!!! not correct!!!!
  /*
  //init Vbuddy
  if(vbdOpen()!=1) return (-1);
  vbdHeader("lab 4");
  */
  //initialize simulation inputs

  top->clk = 1;
  top->rst = 1;

  for(i=0; i<MAX_SIM_CYC; i++){

    //dump values into vcd file
    for(clk=0; clk<2; clk++){
      tfp->dump (2*i+clk);
      top->clk = !top->clk;
      top->eval ();
    }

    top->rst = 0;

    // std::cout << (top->a0) << std::endl;

    //vbdCycle(i+1);
      
    // either simulation finished, or 'q' is pressed
    if (Verilated::gotFinish()){
    exit(0);    
    }
  
  }
  tfp->close();
  exit(0);
  
}