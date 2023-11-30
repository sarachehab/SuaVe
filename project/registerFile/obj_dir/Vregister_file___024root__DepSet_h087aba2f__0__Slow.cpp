// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregister_file.h for the primary calling header

#include "verilated.h"

#include "Vregister_file___024root.h"

VL_ATTR_COLD void Vregister_file___024root___initial__TOP__0(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->register_file__DOT__rf[0U] = 0U;
    vlSelf->register_file__DOT__rf[1U] = 0U;
    vlSelf->register_file__DOT__rf[2U] = 0U;
    vlSelf->register_file__DOT__rf[3U] = 0U;
    vlSelf->register_file__DOT__rf[4U] = 0U;
    vlSelf->register_file__DOT__rf[5U] = 0U;
    vlSelf->register_file__DOT__rf[6U] = 0U;
    vlSelf->register_file__DOT__rf[7U] = 0U;
    vlSelf->register_file__DOT__rf[8U] = 0U;
    vlSelf->register_file__DOT__rf[9U] = 0U;
    vlSelf->register_file__DOT__rf[0xaU] = 0U;
    vlSelf->register_file__DOT__rf[0xbU] = 0U;
    vlSelf->register_file__DOT__rf[0xcU] = 0U;
    vlSelf->register_file__DOT__rf[0xdU] = 0U;
    vlSelf->register_file__DOT__rf[0xeU] = 0U;
    vlSelf->register_file__DOT__rf[0xfU] = 0U;
    vlSelf->register_file__DOT__rf[0x10U] = 0U;
    vlSelf->register_file__DOT__rf[0x11U] = 0U;
    vlSelf->register_file__DOT__rf[0x12U] = 0U;
    vlSelf->register_file__DOT__rf[0x13U] = 0U;
    vlSelf->register_file__DOT__rf[0x14U] = 0U;
    vlSelf->register_file__DOT__rf[0x15U] = 0U;
    vlSelf->register_file__DOT__rf[0x16U] = 0U;
    vlSelf->register_file__DOT__rf[0x17U] = 0U;
    vlSelf->register_file__DOT__rf[0x18U] = 0U;
    vlSelf->register_file__DOT__rf[0x19U] = 0U;
    vlSelf->register_file__DOT__rf[0x1aU] = 0U;
    vlSelf->register_file__DOT__rf[0x1bU] = 0U;
    vlSelf->register_file__DOT__rf[0x1cU] = 0U;
    vlSelf->register_file__DOT__rf[0x1dU] = 0U;
    vlSelf->register_file__DOT__rf[0x1eU] = 0U;
    vlSelf->register_file__DOT__rf[0x1fU] = 0U;
    vlSelf->register_file__DOT__unnamedblk1__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vregister_file___024root___eval_initial(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_initial\n"); );
    // Body
    Vregister_file___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

void Vregister_file___024root___combo__TOP__0(Vregister_file___024root* vlSelf);

VL_ATTR_COLD void Vregister_file___024root___eval_settle(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___eval_settle\n"); );
    // Body
    Vregister_file___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vregister_file___024root___final(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___final\n"); );
}

VL_ATTR_COLD void Vregister_file___024root___ctor_var_reset(Vregister_file___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregister_file___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->addr3_we_i = VL_RAND_RESET_I(1);
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->addr1_i = VL_RAND_RESET_I(5);
    vlSelf->addr2_i = VL_RAND_RESET_I(5);
    vlSelf->addr3_i = VL_RAND_RESET_I(5);
    vlSelf->addr3_wd_i = VL_RAND_RESET_I(32);
    vlSelf->rd1_o = VL_RAND_RESET_I(32);
    vlSelf->rd2_o = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->register_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->register_file__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
