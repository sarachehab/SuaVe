// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE___024ROOT_H_
#define VERILATED_VREGISTER_FILE___024ROOT_H_  // guard

#include "verilated.h"


class Vregister_file__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister_file___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(addr3_we_i,0,0);
    VL_IN8(addr1_i,4,0);
    VL_IN8(addr2_i,4,0);
    VL_IN8(addr3_i,4,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk_i__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(addr3_wd_i,31,0);
    VL_OUT(rd1_o,31,0);
    VL_OUT(rd2_o,31,0);
    IData/*31:0*/ reg_file__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> reg_file__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vregister_file__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister_file___024root(Vregister_file__Syms* symsp, const char* v__name);
    ~Vregister_file___024root();
    VL_UNCOPYABLE(Vregister_file___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
