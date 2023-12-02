// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdata_memory.h for the primary calling header

#include "verilated.h"

#include "Vdata_memory___024root.h"

VL_INLINE_OPT void Vdata_memory___024root___sequent__TOP__0(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___sequent__TOP__0\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__data_ram__v0;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__data_ram__v0;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__data_ram__v0;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__data_ram__v1;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__data_ram__v1;
    CData/*0:0*/ __Vdlyvset__data_memory__DOT__data_ram__v1;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__data_ram__v2;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__data_ram__v2;
    IData/*16:0*/ __Vdlyvdim0__data_memory__DOT__data_ram__v3;
    CData/*7:0*/ __Vdlyvval__data_memory__DOT__data_ram__v3;
    // Body
    __Vdlyvset__data_memory__DOT__data_ram__v0 = 0U;
    __Vdlyvset__data_memory__DOT__data_ram__v1 = 0U;
    if (vlSelf->we_i) {
        __Vdlyvval__data_memory__DOT__data_ram__v0 
            = (0xffU & vlSelf->wd_i);
        __Vdlyvset__data_memory__DOT__data_ram__v0 = 1U;
        __Vdlyvdim0__data_memory__DOT__data_ram__v0 
            = (0x1ffffU & vlSelf->data_memory__DOT__addr);
        if ((1U & (~ (IData)(vlSelf->byte_op_i)))) {
            __Vdlyvval__data_memory__DOT__data_ram__v1 
                = (0xffU & (vlSelf->wd_i >> 8U));
            __Vdlyvset__data_memory__DOT__data_ram__v1 = 1U;
            __Vdlyvdim0__data_memory__DOT__data_ram__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelf->data_memory__DOT__addr));
            __Vdlyvval__data_memory__DOT__data_ram__v2 
                = (0xffU & (vlSelf->wd_i >> 0x10U));
            __Vdlyvdim0__data_memory__DOT__data_ram__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelf->data_memory__DOT__addr));
            __Vdlyvval__data_memory__DOT__data_ram__v3 
                = (vlSelf->wd_i >> 0x18U);
            __Vdlyvdim0__data_memory__DOT__data_ram__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelf->data_memory__DOT__addr));
        }
    }
    if (__Vdlyvset__data_memory__DOT__data_ram__v0) {
        vlSelf->data_memory__DOT__data_ram[__Vdlyvdim0__data_memory__DOT__data_ram__v0] 
            = __Vdlyvval__data_memory__DOT__data_ram__v0;
    }
    if (__Vdlyvset__data_memory__DOT__data_ram__v1) {
        vlSelf->data_memory__DOT__data_ram[__Vdlyvdim0__data_memory__DOT__data_ram__v1] 
            = __Vdlyvval__data_memory__DOT__data_ram__v1;
        vlSelf->data_memory__DOT__data_ram[__Vdlyvdim0__data_memory__DOT__data_ram__v2] 
            = __Vdlyvval__data_memory__DOT__data_ram__v2;
        vlSelf->data_memory__DOT__data_ram[__Vdlyvdim0__data_memory__DOT__data_ram__v3] 
            = __Vdlyvval__data_memory__DOT__data_ram__v3;
    }
}

VL_INLINE_OPT void Vdata_memory___024root___combo__TOP__0(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___combo__TOP__0\n"); );
    // Body
    if (vlSelf->byte_op_i) {
        vlSelf->data_memory__DOT__addr = vlSelf->addr_i;
        vlSelf->rd_o = ((IData)(vlSelf->byte_op_i) ? 
                        vlSelf->data_memory__DOT__data_ram
                        [(0x1ffffU & vlSelf->data_memory__DOT__addr)]
                         : 0U);
    } else {
        vlSelf->data_memory__DOT__addr = (0xfffffffcU 
                                          & vlSelf->addr_i);
        vlSelf->rd_o = ((vlSelf->data_memory__DOT__data_ram
                         [(0x1ffffU & ((IData)(3U) 
                                       + vlSelf->data_memory__DOT__addr))] 
                         << 0x18U) | ((vlSelf->data_memory__DOT__data_ram
                                       [(0x1ffffU & 
                                         ((IData)(2U) 
                                          + vlSelf->data_memory__DOT__addr))] 
                                       << 0x10U) | 
                                      ((vlSelf->data_memory__DOT__data_ram
                                        [(0x1ffffU 
                                          & ((IData)(1U) 
                                             + vlSelf->data_memory__DOT__addr))] 
                                        << 8U) | vlSelf->data_memory__DOT__data_ram
                                       [(0x1ffffU & vlSelf->data_memory__DOT__addr)])));
    }
}

void Vdata_memory___024root___eval(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vdata_memory___024root___sequent__TOP__0(vlSelf);
    }
    Vdata_memory___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vdata_memory___024root___eval_debug_assertions(Vdata_memory___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdata_memory___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->we_i & 0xfeU))) {
        Verilated::overWidthError("we_i");}
    if (VL_UNLIKELY((vlSelf->byte_op_i & 0xfeU))) {
        Verilated::overWidthError("byte_op_i");}
}
#endif  // VL_DEBUG
