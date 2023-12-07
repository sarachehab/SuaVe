// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file.h for the primary calling header

#include "verilated.h"

#include "Vregister_file___024root.h"

VL_INLINE_OPT void Vregister_file___024root___sequent__TOP__0(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__register_file__DOT__rf__v0;
    IData/*31:0*/ __Vdlyvval__register_file__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__register_file__DOT__rf__v0;
    // Body
    __Vdlyvset__register_file__DOT__rf__v0 = 0U;
    if (((IData)(vlSelf->addr3_we_i) & (0U != (IData)(vlSelf->addr3_i)))) {
        __Vdlyvval__register_file__DOT__rf__v0 = vlSelf->addr3_wd_i;
        __Vdlyvset__register_file__DOT__rf__v0 = 1U;
        __Vdlyvdim0__register_file__DOT__rf__v0 = vlSelf->addr3_i;
    }
    if (__Vdlyvset__register_file__DOT__rf__v0) {
        vlSelf->register_file__DOT__rf[__Vdlyvdim0__register_file__DOT__rf__v0] 
            = __Vdlyvval__register_file__DOT__rf__v0;
    }
}

VL_INLINE_OPT void Vregister_file___024root___combo__TOP__0(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->rd1_o = vlSelf->register_file__DOT__rf[vlSelf->addr1_i];
    vlSelf->rd2_o = vlSelf->register_file__DOT__rf[vlSelf->addr2_i];
}

void Vregister_file___024root___eval(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vregister_file___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vregister_file___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vregister_file___024root___eval_debug_assertions(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->addr3_we_i & 0xfeU))) {
        Verilated::overWidthError("addr3_we_i");}
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->addr1_i & 0xe0U))) {
        Verilated::overWidthError("addr1_i");}
    if (VL_UNLIKELY((vlSelf->addr2_i & 0xe0U))) {
        Verilated::overWidthError("addr2_i");}
    if (VL_UNLIKELY((vlSelf->addr3_i & 0xe0U))) {
        Verilated::overWidthError("addr3_i");}
}
#endif  // VL_DEBUG
