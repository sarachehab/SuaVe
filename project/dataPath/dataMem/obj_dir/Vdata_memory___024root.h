// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdata_memory.h for the primary calling header

#ifndef VERILATED_VDATA_MEMORY___024ROOT_H_
#define VERILATED_VDATA_MEMORY___024ROOT_H_  // guard

#include "verilated.h"

class Vdata_memory__Syms;

class Vdata_memory___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(we_i,0,0);
    VL_IN8(byte_op_i,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(addr_i,31,0);
    VL_IN(wd_i,31,0);
    VL_OUT(rd_o,31,0);
    IData/*31:0*/ data_memory__DOT__addr;
    IData/*31:0*/ data_memory__DOT__unnamedblk1__DOT__i;
    VlUnpacked<CData/*7:0*/, 131072> data_memory__DOT__data_ram;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vdata_memory__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdata_memory___024root(Vdata_memory__Syms* symsp, const char* name);
    ~Vdata_memory___024root();
    VL_UNCOPYABLE(Vdata_memory___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
