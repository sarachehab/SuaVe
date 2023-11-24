#include "Vcontrolunit.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <fstream>

#define MAX_SIM_CYC 20


int main ( int argc , char ** argv , char **env) {
    //i counts the number of clock ticks
    //clk is the module clokc signal
    int simcyc;
    int tick;

    //lets import the instructions as vector:
    std::ifstream infile; 
    infile.open("instructions.txt");
    if(!infile.is_open()){
        std::cout << "error opening file" <<std::endl;
        return EXIT_FAILURE;
    }
    std::vector <long> v;
    long tmp;
    while(infile >> tmp){
        v.push_back(tmp);
    }
    infile.close();


    Verilated::commandArgs(argc , argv);
    //init top verilog instance
    Vcontrolunit* top = new Vcontrolunit; //instantitate the counter modules as Vcounter
    //init tracedump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp , 99);
    tfp->open ("controlunit.vcd");

    //intialise simulation inputs

    top->eq = 0;
    int i = 0;

    //run simulation for many clock cycles
    for (simcyc = 0 ; simcyc < MAX_SIM_CYC ; simcyc++){
        //dump varaibles into VCD file and toggle clock
        for(tick = 0 ; tick < 2 ; tick++) {
            tfp->dump (2*simcyc + tick); //unit in ps
            // top->clk = !top->clk;
            top->eval();
        }
        //testing for both values of eq:
        if(i <= 10) {
            top->instr = v[i];
            i++;
        }
        else {
            i = 0;
            top->eq = 1;
        }


        if(Verilated::gotFinish()) exit(0);
    }
    tfp->close();
    exit(0);
}

