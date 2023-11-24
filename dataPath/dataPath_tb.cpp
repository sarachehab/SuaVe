#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VdataPath.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 200000

/*
Connecting to UBS Vbuddy: in Administrator: Windows PowerShell run:
usbipd wsl list
usbipd wsl attach --busid <BUSID>
*/

int main(int argc, char **argv, char **env)
{

    int simcyc;
    int tick;

    Verilated::commandArgs(argc, argv);

    // init DUI
    VdataPath *top = new VdataPath;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("dataPath.vcd");

    // init Vbuddy
    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("dataPath");
    vbdSetMode(1);

    // init simulation inputs
    top->clk = 1;
    top->RegWrite = 1;
    top->ALUsrc = 1;
    top->rs1 = 4;
    top->rs2 = 0;
    top->rd = 11;
    top->ImmOp = 3;

    int maximum = 256;

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

        vbdHex(4, (int(top->a0) >> 16) & 0xF);
        vbdHex(3, (int(top->a0) >> 8) & 0xF);
        vbdHex(2, (int(top->a0) >> 4) & 0xF);
        vbdHex(1, int(top->a0) & 0xF);

        vbdCycle(simcyc + 1);

        if (top->a0 > maximum){
            top->RegWrite = 1;
            top->ALUsrc = vbdFlag();
            top->rs1 = 0;
            top->rs2 = 0;
            top->rd = 10;
            top->ImmOp = 0;
        }
        else {
            top->RegWrite = 1;
            top->ALUsrc = vbdFlag();
            top->rs1 = 10;
            top->rs2 = 0;
            top->rd = 10;
            top->ImmOp = vbdValue();
        }

        if (Verilated::gotFinish() || vbdGetkey() == 'q')
        {
            break;
        }
    }

    vbdClose();
    tfp->close();
    exit(0);
}