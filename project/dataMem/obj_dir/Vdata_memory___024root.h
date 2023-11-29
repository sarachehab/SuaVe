// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_memory.h for the primary calling header

#ifndef VERILATED_VDATA_MEMORY___024ROOT_H_
#define VERILATED_VDATA_MEMORY___024ROOT_H_  // guard

#include "verilated.h"


class Vdata_memory__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdata_memory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(we_i,0,0);
    VL_IN8(byte_op_i,0,0);
    CData/*0:0*/ data_memory__DOT__addr;
    CData/*7:0*/ data_memory__DOT____VdfgTmp_h8d771d4d__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(addr_i,31,0);
    VL_IN(wd_i,31,0);
    VL_OUT(rd_o,31,0);
    IData/*31:0*/ data_memory__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 131072> data_memory__DOT__data_ram;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdata_memory__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_memory___024root(Vdata_memory__Syms* symsp, const char* v__name);
    ~Vdata_memory___024root();
    VL_UNCOPYABLE(Vdata_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
