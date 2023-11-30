// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc.h for the primary calling header

#include "verilated.h"

#include "Vpc___024root.h"

VL_INLINE_OPT void Vpc___024root___sequent__TOP__0(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->pc__DOT__pc_next = ((IData)(vlSelf->rst_i)
                                 ? 0xbfc00000U : ((IData)(vlSelf->pcsrc_i)
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->pc_o)
                                                   : 
                                                  (vlSelf->pc_o 
                                                   + vlSelf->imm_ext_i)));
    vlSelf->pc_o = vlSelf->pc__DOT__pc_next;
}

void Vpc___024root___eval(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vpc___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vpc___024root___eval_debug_assertions(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->pcsrc_i & 0xfeU))) {
        Verilated::overWidthError("pcsrc_i");}
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
}
#endif  // VL_DEBUG
