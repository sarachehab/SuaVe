// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vinstruction_memory.h for the primary calling header

#ifndef VERILATED_VINSTRUCTION_MEMORY___024ROOT_H_
#define VERILATED_VINSTRUCTION_MEMORY___024ROOT_H_  // guard

#include "verilated.h"


class Vinstruction_memory__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vinstruction_memory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    VL_IN(addr_i,31,0);
    VL_OUT(instr_o,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 4096> instruction_memory__DOT__rom;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vinstruction_memory__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vinstruction_memory___024root(Vinstruction_memory__Syms* symsp, const char* v__name);
    ~Vinstruction_memory___024root();
    VL_UNCOPYABLE(Vinstruction_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
