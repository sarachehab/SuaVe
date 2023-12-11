#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcache.h"

#define MAX_SIM_CYC 100

int main(int argc, char **argv, char **env) {
    int simcyc;
    int tick;

    Verilated::commandArgs(argc, argv);
    Vcache *top = new Vcache;
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("cache.vcd");

    top->clk_i = 1;

    int cntReading = 0;
    bool currentlyReading = false;
    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++) {
        for (tick = 0; tick < 2; tick++) {
            tfp->dump(2 * simcyc + tick);
            top->clk_i = !top->clk_i;
            top->eval();
        }




        if (Verilated::gotFinish()) break;
    }
  tfp->close();
  printf("Exiting\n");
  exit(0);
}
