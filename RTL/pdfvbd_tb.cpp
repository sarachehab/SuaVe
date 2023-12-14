#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include "vbuddy.cpp"
#include <vector>
#include <iostream>
#include <fstream>
#include <chrono>
#include <thread>

#define MAX_SIM_CYC 20000000
// clk 247390 is when it starts a0 reading for gaussian

int main(int argc, char **argv, char **env)
{
    std::ofstream pdfFile;
    // pdfFile.open("gaussian.txt");
    // pdfFile.open("sine.txt");
    pdfFile.open("distribution.txt");
    // pdfFile.open("noisy.txt");
    std::vector<uint32_t> pdf_values;

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

    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("Pipeline PDF");
    vbdSetMode(1); // Flag mode set to one-shot

    top->clk = 1;
    top->rst = 1;

    int cntReading = 0;
    bool currentlyReading = false;
    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (tick = 0; tick < 2; tick++)
        {
            tfp->dump(2 * simcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }

        if (top->a0 == -1)
        {
            currentlyReading = true;
        }

        if (currentlyReading)
        {
            cntReading++;
            if (cntReading % 5 == 2)
            {
                pdfFile << top->a0 << "\n";
                pdf_values.push_back(top->a0);
            }
        }

        top->rst = (simcyc < 3);

        if (cntReading > 256 * 5)
            break;

        // either simulation finished
        if (Verilated::gotFinish())
            break;
    }

    for (int i = 0; i < pdf_values.size(); i++)
    {
        vbdPlot(pdf_values[i], 0, 255);
        std::this_thread::sleep_for(std::chrono::microseconds(100));
    }

    std::cout << simcyc << std::endl;
    pdfFile.close();
    vbdClose();
    tfp->close();
    printf("Exiting\n");
    exit(0);
}