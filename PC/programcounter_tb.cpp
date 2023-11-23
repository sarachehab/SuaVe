#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vprogramcounter.h"
#include "Vbuddy.cpp"

#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env)
{

    int simcyc;
    int tick;

    Verilated::commandArgs(argc, argv);

    // init DUI
    Vprogramcounter *top = new Vprogramcounter;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("programcounter.vcd");

    // init Vbuddy
    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("Program Counter");
    vbdSetMode(1);

    // init simulation inputs
    top->clk = 1;
    top->PCsrc = 0;
    top->ImmOp = 4;
    top->rst = 0;

    // simulate clock
    for (int simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {

        // dump variables in VCD file and toggle clock
        for (int tick = 0; tick < 2; tick++)
        {
            tfp->dump(2 * simcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }

        vbdHex(4, (int(top->PC) >> 16) & 0xF);
        vbdHex(3, (int(top->PC) >> 8) & 0xF);
        vbdHex(2, (int(top->PC) >> 4) & 0xF);
        vbdHex(1, int(top->PC) & 0xF);

        vbdCycle(simcyc + 1);

        top->PCsrc = vbdFlag();
        top->ImmOp = vbdValue();
        top->rst = (simcyc % 8 == 0);

        if (Verilated::gotFinish() || vbdGetkey() == 'q')
        {
            break;
        }
    }

    vbdClose();
    tfp->close();
    exit(0);
}