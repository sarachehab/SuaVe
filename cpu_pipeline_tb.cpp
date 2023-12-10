#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
// #include "vbuddy.cpp"
#include <iostream>
#include <fstream>

#define MAX_SIM_CYC 20

int main(int argc, char **argv, char **env)
{
  int simcyc;
  int tick;

  Verilated::commandArgs(argc, argv);
  Vcpu *top = new Vcpu;
  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("cpu_pipeline_tb.vcd");

  top->clk = 1;
  top->rst = 1;

  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
  {
    for (tick = 0; tick < 2; tick++)
    {
      tfp->dump(2 * simcyc + tick);
      top->clk = !top->clk;
      top->eval();
    }

    top->rst = (simcyc < 3);

    // either simulation finished
    if (Verilated::gotFinish())
      break;
  }
  tfp->close();
  printf("Exiting\n");
  exit(0);
}
