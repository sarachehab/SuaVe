// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcache.h for the primary calling header

#ifndef VERILATED_VCACHE___024ROOT_H_
#define VERILATED_VCACHE___024ROOT_H_  // guard

#include "verilated.h"

class Vcache__Syms;

class Vcache___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(write_enable_i,0,0);
    VL_OUT8(hit_o,0,0);
    CData/*0:0*/ cache__DOT__hit;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(address_i,31,0);
    VL_IN(write_data_i,31,0);
    VL_OUT(read_data_o,31,0);
    IData/*31:0*/ cache__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ cache__DOT__unnamedblk3__DOT__i;
    IData/*31:0*/ cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
    VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 16> cache__DOT__cache_data;
    VlUnpacked<VlUnpacked<IData/*25:0*/, 4>, 16> cache__DOT__cache_tag;
    VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 16> cache__DOT__valid;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcache__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcache___024root(Vcache__Syms* symsp, const char* name);
    ~Vcache___024root();
    VL_UNCOPYABLE(Vcache___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
