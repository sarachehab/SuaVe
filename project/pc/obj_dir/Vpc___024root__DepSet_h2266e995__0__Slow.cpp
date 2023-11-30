// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpc.h for the primary calling header

#include "verilated.h"

#include "Vpc___024root.h"

VL_ATTR_COLD void Vpc___024root___initial__TOP__0(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->pc__DOT__pc_next = 0xbfc00000U;
}

VL_ATTR_COLD void Vpc___024root___settle__TOP__0(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->pc_o = vlSelf->pc__DOT__pc_next;
}

VL_ATTR_COLD void Vpc___024root___eval_initial(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_initial\n"); );
    // Body
    Vpc___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vpc___024root___eval_settle(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___eval_settle\n"); );
    // Body
    Vpc___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vpc___024root___final(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___final\n"); );
}

VL_ATTR_COLD void Vpc___024root___ctor_var_reset(Vpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->pcsrc_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->imm_ext_i = VL_RAND_RESET_I(32);
    vlSelf->pc_o = VL_RAND_RESET_I(32);
    vlSelf->pc__DOT__pc_next = VL_RAND_RESET_I(32);
}
