#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu_run_reference.h"
#include "vbuddy.cpp" 
    
#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
  int simcyc;     
  int tick;

  Verilated::commandArgs(argc, argv);
  Vcpu_run_reference* top = new Vcpu_run_reference;
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("cpu_run_reference.vcd");
 
  if (vbdOpen()!=1) return(-1);
  vbdHeader("Running reference");
  vbdSetMode(1); // Flag mode set to one-shot

  top->clk_i = 1;
  top->rst_i = 0;
  top->trigger_i = 1;
  
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }
    vbdPlot(int (top->a0_o), 0, 255);
    vbdCycle(simcyc);

    top -> rst_i = vbdFlag();

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
      exit(0);
  }

  vbdClose();  
  tfp->close(); 
  printf("Exiting\n");
  exit(0);
}
