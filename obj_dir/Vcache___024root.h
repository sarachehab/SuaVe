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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(write_enable_i,0,0);
        VL_OUT8(hit_o,0,0);
        VL_OUT8(mem_write_enable_o,0,0);
        CData/*0:0*/ cache__DOT__hit;
        CData/*0:0*/ cache__DOT__readmiss;
        CData/*1:0*/ cache__DOT__LRU_pointer;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__0__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__0__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__0__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__1__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__1__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__1__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__2__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__2__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__2__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__3__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__3__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__3__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__4__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__4__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__4__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__5__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__5__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__5__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__6__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__6__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__6__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__7__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__7__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__7__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__8__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__8__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__8__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__9__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__9__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__9__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__10__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__10__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__10__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__11__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__11__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__11__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__12__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__12__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__12__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__13__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__13__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__13__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__14__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__14__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__14__result;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__15__Vfuncout;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__15__a;
        CData/*1:0*/ __Vfunc_cache__DOT__LRU_calc__15__result;
        CData/*1:0*/ __Vfunc_cache__DOT__get_min__16__result;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        CData/*1:0*/ __Vchglast__TOP__cache__DOT__LRU_pointer;
        VL_IN(address_i,31,0);
        VL_IN(write_data_i,31,0);
        VL_OUT(read_data_o,31,0);
        VL_IN(mem_incoming_data_i,31,0);
        VL_OUT(mem_address_o,31,0);
        VL_OUT(mem_write_data_o,31,0);
    };
    struct {
        IData/*31:0*/ cache__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        VlUnpacked<VlUnpacked<IData/*31:0*/, 4>, 16> cache__DOT__cache_data;
        VlUnpacked<VlUnpacked<IData/*25:0*/, 4>, 16> cache__DOT__cache_tag;
        VlUnpacked<VlUnpacked<CData/*0:0*/, 4>, 16> cache__DOT__valid;
        VlUnpacked<VlUnpacked<CData/*1:0*/, 4>, 16> cache__DOT__age;
        VlUnpacked<CData/*1:0*/, 4> __Vfunc_cache__DOT__get_min__16__ages;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

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
