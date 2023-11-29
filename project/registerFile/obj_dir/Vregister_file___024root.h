// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister_file.h for the primary calling header

#ifndef VERILATED_VREGISTER_FILE___024ROOT_H_
#define VERILATED_VREGISTER_FILE___024ROOT_H_  // guard

#include "verilated.h"

class Vregister_file__Syms;

class Vregister_file___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(addr3_we_i,0,0);
    VL_IN8(addr1_i,4,0);
    VL_IN8(addr2_i,4,0);
    VL_IN8(addr3_i,4,0);
    CData/*4:0*/ register_file__DOT__addr3_i_q;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(addr3_wd_i,31,0);
    VL_OUT(rd1_o,31,0);
    VL_OUT(rd2_o,31,0);
    IData/*31:0*/ register_file__DOT__addr3_data_q;
    IData/*31:0*/ register_file__DOT__unnamedblk1__DOT__i;
    VlUnpacked<IData/*31:0*/, 32> register_file__DOT__rf;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vregister_file__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister_file___024root(Vregister_file__Syms* symsp, const char* name);
    ~Vregister_file___024root();
    VL_UNCOPYABLE(Vregister_file___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
