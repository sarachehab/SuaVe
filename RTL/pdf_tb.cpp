#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
// #include "vbuddy.cpp"
#include <iostream>
#include <fstream>

#define MAX_SIM_CYC 20000000
// clk 247390 is when it starts a0_o reading for gaussian

int main(int argc, char **argv, char **env)
{
  std::ofstream pdfFile;
  // pdfFile.open("gaussian.txt");
  // pdfFile.open("sine.txt");
  pdfFile.open("distribution.txt");
  // pdfFile.open("noisy.txt");

  if (!pdfFile.is_open())
  {
    std::cout << "pdfFile is not open" << std::endl;
  }

  int simcyc;
  int tick;

  Verilated::commandArgs(argc, argv);
  Vcpu *top = new Vcpu;
  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("pdf.vcd");

  top->clk_i = 1;
  top->rst_i = 1;
  // top->trigger_i = 1;

  int cntReading = 0;
  bool currentlyReading = false;
  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
  {
    for (tick = 0; tick < 2; tick++)
    {
      tfp->dump(2 * simcyc + tick);
      top->clk_i = !top->clk_i;
      top->eval();
    }

    if (top->a0_o == -1)
    {
      currentlyReading = true;
    }

    if (currentlyReading)
    {
      cntReading++;
      if (cntReading % 3 == 2)
      {
        pdfFile << top->a0_o << "\n";
      }
    }

    top->rst_i = (simcyc < 3);

    if (cntReading > 256 * 3)
      break;

    // either simulation finished
    if (Verilated::gotFinish())
      break;
  }
  pdfFile.close();
  tfp->close();
  printf("Exiting\n");
  exit(0);
}
