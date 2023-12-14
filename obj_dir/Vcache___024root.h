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
    VL_IN8(cache_enable_i,0,0);
    CData/*0:0*/ cache__DOT__mem_write_enable;
    CData/*1:0*/ cache__DOT__line__DOT__counter;
    CData/*0:0*/ cache__DOT__line__DOT__hit;
    CData/*1:0*/ cache__DOT__line__DOT__wayhit;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(address_i,31,0);
    VL_IN(write_data_i,31,0);
    VL_OUT(read_data_o,31,0);
    IData/*31:0*/ cache__DOT__mem_incoming_data;
    IData/*31:0*/ cache__DOT__mem_address;
    IData/*31:0*/ cache__DOT__mem_write_data;
    IData/*31:0*/ cache__DOT__line__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ cache__DOT__line__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ cache__DOT__memory__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __Vchglast__TOP__cache__DOT__mem_address;
    VlUnpacked<IData/*31:0*/, 4> cache__DOT__line__DOT__cache_data;
    VlUnpacked<IData/*29:0*/, 4> cache__DOT__line__DOT__cache_tag;
    VlUnpacked<CData/*0:0*/, 4> cache__DOT__line__DOT__valid;
    VlUnpacked<CData/*7:0*/, 131072> cache__DOT__memory__DOT__data_ram;
    VlUnpacked<IData/*29:0*/, 4> __Vchglast__TOP__cache__DOT__line__DOT__cache_tag;
    VlUnpacked<CData/*0:0*/, 4> __Vchglast__TOP__cache__DOT__line__DOT__valid;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

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
