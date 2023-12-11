// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "verilated.h"

#include "Vcache___024root.h"

VL_ATTR_COLD void Vcache___024root___initial__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___initial__TOP__0\n"); );
    // Init
    VlUnpacked<VlUnpacked<CData/*7:0*/, 4>, 16> cache__DOT__count;
    // Body
    vlSelf->cache__DOT__hit = 0U;
    vlSelf->cache__DOT__valid[0U][0U] = 0U;
    vlSelf->cache__DOT__valid[0U][1U] = 0U;
    vlSelf->cache__DOT__valid[0U][2U] = 0U;
    vlSelf->cache__DOT__valid[0U][3U] = 0U;
    vlSelf->cache__DOT__valid[1U][0U] = 0U;
    vlSelf->cache__DOT__valid[1U][1U] = 0U;
    vlSelf->cache__DOT__valid[1U][2U] = 0U;
    vlSelf->cache__DOT__valid[1U][3U] = 0U;
    vlSelf->cache__DOT__valid[2U][0U] = 0U;
    vlSelf->cache__DOT__valid[2U][1U] = 0U;
    vlSelf->cache__DOT__valid[2U][2U] = 0U;
    vlSelf->cache__DOT__valid[2U][3U] = 0U;
    vlSelf->cache__DOT__valid[3U][0U] = 0U;
    vlSelf->cache__DOT__valid[3U][1U] = 0U;
    vlSelf->cache__DOT__valid[3U][2U] = 0U;
    vlSelf->cache__DOT__valid[3U][3U] = 0U;
    vlSelf->cache__DOT__valid[4U][0U] = 0U;
    vlSelf->cache__DOT__valid[4U][1U] = 0U;
    vlSelf->cache__DOT__valid[4U][2U] = 0U;
    vlSelf->cache__DOT__valid[4U][3U] = 0U;
    vlSelf->cache__DOT__valid[5U][0U] = 0U;
    vlSelf->cache__DOT__valid[5U][1U] = 0U;
    vlSelf->cache__DOT__valid[5U][2U] = 0U;
    vlSelf->cache__DOT__valid[5U][3U] = 0U;
    vlSelf->cache__DOT__valid[6U][0U] = 0U;
    vlSelf->cache__DOT__valid[6U][1U] = 0U;
    vlSelf->cache__DOT__valid[6U][2U] = 0U;
    vlSelf->cache__DOT__valid[6U][3U] = 0U;
    vlSelf->cache__DOT__valid[7U][0U] = 0U;
    vlSelf->cache__DOT__valid[7U][1U] = 0U;
    vlSelf->cache__DOT__valid[7U][2U] = 0U;
    vlSelf->cache__DOT__valid[7U][3U] = 0U;
    vlSelf->cache__DOT__valid[8U][0U] = 0U;
    vlSelf->cache__DOT__valid[8U][1U] = 0U;
    vlSelf->cache__DOT__valid[8U][2U] = 0U;
    vlSelf->cache__DOT__valid[8U][3U] = 0U;
    vlSelf->cache__DOT__valid[9U][0U] = 0U;
    vlSelf->cache__DOT__valid[9U][1U] = 0U;
    vlSelf->cache__DOT__valid[9U][2U] = 0U;
    vlSelf->cache__DOT__valid[9U][3U] = 0U;
    vlSelf->cache__DOT__valid[0xaU][0U] = 0U;
    vlSelf->cache__DOT__valid[0xaU][1U] = 0U;
    vlSelf->cache__DOT__valid[0xaU][2U] = 0U;
    vlSelf->cache__DOT__valid[0xaU][3U] = 0U;
    vlSelf->cache__DOT__valid[0xbU][0U] = 0U;
    vlSelf->cache__DOT__valid[0xbU][1U] = 0U;
    vlSelf->cache__DOT__valid[0xbU][2U] = 0U;
    vlSelf->cache__DOT__valid[0xbU][3U] = 0U;
    vlSelf->cache__DOT__valid[0xcU][0U] = 0U;
    vlSelf->cache__DOT__valid[0xcU][1U] = 0U;
    vlSelf->cache__DOT__valid[0xcU][2U] = 0U;
    vlSelf->cache__DOT__valid[0xcU][3U] = 0U;
    vlSelf->cache__DOT__valid[0xdU][0U] = 0U;
    vlSelf->cache__DOT__valid[0xdU][1U] = 0U;
    vlSelf->cache__DOT__valid[0xdU][2U] = 0U;
    vlSelf->cache__DOT__valid[0xdU][3U] = 0U;
    vlSelf->cache__DOT__valid[0xeU][0U] = 0U;
    vlSelf->cache__DOT__valid[0xeU][1U] = 0U;
    vlSelf->cache__DOT__valid[0xeU][2U] = 0U;
    vlSelf->cache__DOT__valid[0xeU][3U] = 0U;
    vlSelf->cache__DOT__valid[0xfU][0U] = 0U;
    vlSelf->cache__DOT__valid[0xfU][1U] = 0U;
    vlSelf->cache__DOT__valid[0xfU][2U] = 0U;
    vlSelf->cache__DOT__valid[0xfU][3U] = 0U;
    vlSelf->cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
    vlSelf->cache__DOT__unnamedblk1__DOT__i = 0x10U;
    cache__DOT__count[0U][0U] = 0U;
    cache__DOT__count[0U][1U] = 0U;
    cache__DOT__count[0U][2U] = 0U;
    cache__DOT__count[0U][3U] = 0U;
    cache__DOT__count[1U][0U] = 0U;
    cache__DOT__count[1U][1U] = 0U;
    cache__DOT__count[1U][2U] = 0U;
    cache__DOT__count[1U][3U] = 0U;
    cache__DOT__count[2U][0U] = 0U;
    cache__DOT__count[2U][1U] = 0U;
    cache__DOT__count[2U][2U] = 0U;
    cache__DOT__count[2U][3U] = 0U;
    cache__DOT__count[3U][0U] = 0U;
    cache__DOT__count[3U][1U] = 0U;
    cache__DOT__count[3U][2U] = 0U;
    cache__DOT__count[3U][3U] = 0U;
    cache__DOT__count[4U][0U] = 0U;
    cache__DOT__count[4U][1U] = 0U;
    cache__DOT__count[4U][2U] = 0U;
    cache__DOT__count[4U][3U] = 0U;
    cache__DOT__count[5U][0U] = 0U;
    cache__DOT__count[5U][1U] = 0U;
    cache__DOT__count[5U][2U] = 0U;
    cache__DOT__count[5U][3U] = 0U;
    cache__DOT__count[6U][0U] = 0U;
    cache__DOT__count[6U][1U] = 0U;
    cache__DOT__count[6U][2U] = 0U;
    cache__DOT__count[6U][3U] = 0U;
    cache__DOT__count[7U][0U] = 0U;
    cache__DOT__count[7U][1U] = 0U;
    cache__DOT__count[7U][2U] = 0U;
    cache__DOT__count[7U][3U] = 0U;
    cache__DOT__count[8U][0U] = 0U;
    cache__DOT__count[8U][1U] = 0U;
    cache__DOT__count[8U][2U] = 0U;
    cache__DOT__count[8U][3U] = 0U;
    cache__DOT__count[9U][0U] = 0U;
    cache__DOT__count[9U][1U] = 0U;
    cache__DOT__count[9U][2U] = 0U;
    cache__DOT__count[9U][3U] = 0U;
    cache__DOT__count[0xaU][0U] = 0U;
    cache__DOT__count[0xaU][1U] = 0U;
    cache__DOT__count[0xaU][2U] = 0U;
    cache__DOT__count[0xaU][3U] = 0U;
    cache__DOT__count[0xbU][0U] = 0U;
    cache__DOT__count[0xbU][1U] = 0U;
    cache__DOT__count[0xbU][2U] = 0U;
    cache__DOT__count[0xbU][3U] = 0U;
    cache__DOT__count[0xcU][0U] = 0U;
    cache__DOT__count[0xcU][1U] = 0U;
    cache__DOT__count[0xcU][2U] = 0U;
    cache__DOT__count[0xcU][3U] = 0U;
    cache__DOT__count[0xdU][0U] = 0U;
    cache__DOT__count[0xdU][1U] = 0U;
    cache__DOT__count[0xdU][2U] = 0U;
    cache__DOT__count[0xdU][3U] = 0U;
    cache__DOT__count[0xeU][0U] = 0U;
    cache__DOT__count[0xeU][1U] = 0U;
    cache__DOT__count[0xeU][2U] = 0U;
    cache__DOT__count[0xeU][3U] = 0U;
    cache__DOT__count[0xfU][0U] = 0U;
    cache__DOT__count[0xfU][1U] = 0U;
    cache__DOT__count[0xfU][2U] = 0U;
    cache__DOT__count[0xfU][3U] = 0U;
    vlSelf->cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
    vlSelf->cache__DOT__unnamedblk3__DOT__i = 0x10U;
}

VL_ATTR_COLD void Vcache___024root___eval_initial(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    Vcache___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vcache___024root___combo__TOP__0(Vcache___024root* vlSelf);

VL_ATTR_COLD void Vcache___024root___eval_settle(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval_settle\n"); );
    // Body
    Vcache___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vcache___024root___final(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___final\n"); );
}

VL_ATTR_COLD void Vcache___024root___ctor_var_reset(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->address_i = VL_RAND_RESET_I(32);
    vlSelf->write_enable_i = VL_RAND_RESET_I(1);
    vlSelf->write_data_i = VL_RAND_RESET_I(32);
    vlSelf->read_data_o = VL_RAND_RESET_I(32);
    vlSelf->hit_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->cache__DOT__cache_data[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->cache__DOT__cache_tag[__Vi0][__Vi1] = VL_RAND_RESET_I(26);
        }
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->cache__DOT__valid[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->cache__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->cache__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->cache__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->cache__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
