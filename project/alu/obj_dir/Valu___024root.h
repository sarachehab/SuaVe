// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"


class Valu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(ALUControl,2,0);
    VL_OUT8(EQ,0,0);
    CData/*0:0*/ __VactContinue;
    VL_IN(SrcA,31,0);
    VL_IN(SrcB,31,0);
    VL_OUT(ALUResult,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* v__name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
