// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprogramcounter.h for the primary calling header

#ifndef VERILATED_VPROGRAMCOUNTER___024ROOT_H_
#define VERILATED_VPROGRAMCOUNTER___024ROOT_H_  // guard

#include "verilated.h"


class Vprogramcounter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vprogramcounter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(PCsrc,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(ImmOp,31,0);
    VL_OUT(PC,31,0);
    IData/*31:0*/ programcounter__DOT__program_counter;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vprogramcounter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vprogramcounter___024root(Vprogramcounter__Syms* symsp, const char* v__name);
    ~Vprogramcounter___024root();
    VL_UNCOPYABLE(Vprogramcounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
