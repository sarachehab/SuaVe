// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vextend_unit.h for the primary calling header

#ifndef VERILATED_VEXTEND_UNIT___024ROOT_H_
#define VERILATED_VEXTEND_UNIT___024ROOT_H_  // guard

#include "verilated.h"


class Vextend_unit__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vextend_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(imm_src_i,2,0);
    CData/*0:0*/ __VactContinue;
    VL_IN(instr_i,31,7);
    VL_OUT(imm_ext_o,31,0);
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vextend_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vextend_unit___024root(Vextend_unit__Syms* symsp, const char* v__name);
    ~Vextend_unit___024root();
    VL_UNCOPYABLE(Vextend_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
