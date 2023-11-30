// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmain_decoder.h for the primary calling header

#ifndef VERILATED_VMAIN_DECODER___024ROOT_H_
#define VERILATED_VMAIN_DECODER___024ROOT_H_  // guard

#include "verilated.h"


class Vmain_decoder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmain_decoder___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(op_i,6,0);
    VL_OUT8(branch_o,0,0);
    VL_OUT8(jump_o,0,0);
    VL_OUT8(result_src_o,1,0);
    VL_OUT8(mem_write_o,0,0);
    VL_OUT8(alu_src_o,0,0);
    VL_OUT8(imm_src_o,1,0);
    VL_OUT8(reg_write_o,0,0);
    VL_OUT8(alu_op_o,1,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmain_decoder__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmain_decoder___024root(Vmain_decoder__Syms* symsp, const char* v__name);
    ~Vmain_decoder___024root();
    VL_UNCOPYABLE(Vmain_decoder___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
