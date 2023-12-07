#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
// #include "vbuddy.cpp"
#include <iostream>
#include <fstream>

#define MAX_SIM_CYC 20000

int main(int argc, char **argv, char **env)
{
  std::ofstream pdfFile;
  pdfFile.open("gaussian.txt");
  int simcyc;
  int tick;

  Verilated::commandArgs(argc, argv);
  Vcpu *top = new Vcpu;
  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("cpu_run_reference.vcd");

  // if (vbdOpen() != 1)
  //   return (-1);
  // vbdHeader("Running reference");
  // vbdSetMode(1); // Flag mode set to one-shot

  top->clk_i = 1;
  top->rst_i = 1;
  // top->trigger_i = 1;

  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
  {
    for (tick = 0; tick < 2; tick++)
    {
      tfp->dump(2 * simcyc + tick);
      top->clk_i = !top->clk_i;
      top->eval();
    }
    if (top->a0_o != 0)
    {
      pdfFile << top->a0_o << "\n";
      std::cout << top->a0_o << std::endl;
    }
    pdfFile << top->a0_o << "\n";
    // std::cout << top->a0_o << std::endl;
    //  vbdPlot(int (top->a0_o), 0, 255);
    //  vbdCycle(simcyc);

    top->rst_i = (simcyc < 3);

    // // either simulation finished, or 'q' is pressed
    if (Verilated::gotFinish())
      break;
  }
  pdfFile.close();
  // vbdClose();
  tfp->close();
  printf("Exiting\n");
  exit(0);
}
