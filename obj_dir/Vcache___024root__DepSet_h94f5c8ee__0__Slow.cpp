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
    VlWide<3>/*95:0*/ __Vtemp_h27e1a69c__0;
    // Body
    __Vtemp_h27e1a69c__0[0U] = 0x2e6d656dU;
    __Vtemp_h27e1a69c__0[1U] = 0x6f697379U;
    __Vtemp_h27e1a69c__0[2U] = 0x6eU;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h27e1a69c__0)
                 ,  &(vlSelf->cache__DOT__memory__DOT__data_ram)
                 , 0U, ~0ULL);
    vlSelf->cache__DOT__memory__DOT__unnamedblk1__DOT__i = 0U;
    vlSelf->cache__DOT__mem_byte_op = 0U;
    vlSelf->cache__DOT__line__DOT__hit = 0U;
    vlSelf->cache__DOT__line__DOT__valid[0U] = 0U;
    vlSelf->cache__DOT__line__DOT__cache_data[0U] = 0U;
    vlSelf->cache__DOT__line__DOT__cache_tag[0U] = 0U;
    vlSelf->cache__DOT__line__DOT__valid[1U] = 0U;
    vlSelf->cache__DOT__line__DOT__cache_data[1U] = 0U;
    vlSelf->cache__DOT__line__DOT__cache_tag[1U] = 0U;
    vlSelf->cache__DOT__line__DOT__valid[2U] = 0U;
    vlSelf->cache__DOT__line__DOT__cache_data[2U] = 0U;
    vlSelf->cache__DOT__line__DOT__cache_tag[2U] = 0U;
    vlSelf->cache__DOT__line__DOT__valid[3U] = 0U;
    vlSelf->cache__DOT__line__DOT__cache_data[3U] = 0U;
    vlSelf->cache__DOT__line__DOT__cache_tag[3U] = 0U;
    vlSelf->cache__DOT__line__DOT__unnamedblk1__DOT__i = 4U;
}

VL_ATTR_COLD void Vcache___024root___settle__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___settle__TOP__0\n"); );
    // Body
    if (vlSelf->cache_enable_i) {
        vlSelf->cache__DOT__line__DOT__unnamedblk2__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 4U, vlSelf->cache__DOT__line__DOT__unnamedblk2__DOT__i)) {
                if ((vlSelf->cache__DOT__line__DOT__cache_tag
                     [(3U & vlSelf->cache__DOT__line__DOT__unnamedblk2__DOT__i)] 
                     == (vlSelf->address_i >> 2U))) {
                    vlSelf->cache__DOT__line__DOT__hit 
                        = vlSelf->cache__DOT__line__DOT__valid
                        [(3U & vlSelf->cache__DOT__line__DOT__unnamedblk2__DOT__i)];
                    vlSelf->cache__DOT__line__DOT__wayhit 
                        = (3U & vlSelf->cache__DOT__line__DOT__unnamedblk2__DOT__i);
                    goto __Vlabel1;
                } else {
                    vlSelf->cache__DOT__line__DOT__hit = 0U;
                }
                vlSelf->cache__DOT__line__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->cache__DOT__line__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel1: ;
        }
        if (vlSelf->write_enable_i) {
            vlSelf->cache__DOT__mem_byte_op = vlSelf->byte_op_i;
            vlSelf->cache__DOT__mem_write_data = vlSelf->write_data_i;
        } else {
            vlSelf->cache__DOT__mem_byte_op = 0U;
            vlSelf->read_data_o = ((IData)(vlSelf->cache__DOT__line__DOT__hit)
                                    ? ((IData)(vlSelf->byte_op_i)
                                        ? ((2U & vlSelf->address_i)
                                            ? ((1U 
                                                & vlSelf->address_i)
                                                ? (vlSelf->cache__DOT__mem_incoming_data 
                                                   >> 0x18U)
                                                : (0xffU 
                                                   & (vlSelf->cache__DOT__mem_incoming_data 
                                                      >> 0x10U)))
                                            : ((1U 
                                                & vlSelf->address_i)
                                                ? (0xffU 
                                                   & (vlSelf->cache__DOT__mem_incoming_data 
                                                      >> 8U))
                                                : (0xffU 
                                                   & vlSelf->cache__DOT__mem_incoming_data)))
                                        : vlSelf->cache__DOT__line__DOT__cache_data
                                       [vlSelf->cache__DOT__line__DOT__wayhit])
                                    : ((IData)(vlSelf->byte_op_i)
                                        ? ((2U & vlSelf->address_i)
                                            ? ((1U 
                                                & vlSelf->address_i)
                                                ? (vlSelf->cache__DOT__mem_incoming_data 
                                                   >> 0x18U)
                                                : (0xffU 
                                                   & (vlSelf->cache__DOT__mem_incoming_data 
                                                      >> 0x10U)))
                                            : ((1U 
                                                & vlSelf->address_i)
                                                ? (0xffU 
                                                   & (vlSelf->cache__DOT__mem_incoming_data 
                                                      >> 8U))
                                                : (0xffU 
                                                   & vlSelf->cache__DOT__mem_incoming_data)))
                                        : vlSelf->cache__DOT__mem_incoming_data));
        }
    }
    if (vlSelf->cache__DOT__mem_byte_op) {
        vlSelf->cache__DOT__memory__DOT__addr = vlSelf->address_i;
        vlSelf->cache__DOT__mem_incoming_data = ((IData)(vlSelf->cache__DOT__mem_byte_op)
                                                  ? 
                                                 vlSelf->cache__DOT__memory__DOT__data_ram
                                                 [(0x1ffffU 
                                                   & vlSelf->cache__DOT__memory__DOT__addr)]
                                                  : 0U);
    } else {
        vlSelf->cache__DOT__memory__DOT__addr = (0xfffffffcU 
                                                 & vlSelf->address_i);
        vlSelf->cache__DOT__mem_incoming_data = ((vlSelf->cache__DOT__memory__DOT__data_ram
                                                  [
                                                  (0x1ffffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->cache__DOT__memory__DOT__addr))] 
                                                  << 0x18U) 
                                                 | ((vlSelf->cache__DOT__memory__DOT__data_ram
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(2U) 
                                                         + vlSelf->cache__DOT__memory__DOT__addr))] 
                                                     << 0x10U) 
                                                    | ((vlSelf->cache__DOT__memory__DOT__data_ram
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(1U) 
                                                            + vlSelf->cache__DOT__memory__DOT__addr))] 
                                                        << 8U) 
                                                       | vlSelf->cache__DOT__memory__DOT__data_ram
                                                       [
                                                       (0x1ffffU 
                                                        & vlSelf->cache__DOT__memory__DOT__addr)])));
    }
}

VL_ATTR_COLD void Vcache___024root___eval_initial(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval_initial\n"); );
    // Body
    Vcache___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vcache___024root___eval_settle(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval_settle\n"); );
    // Body
    Vcache___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->write_enable_i = VL_RAND_RESET_I(1);
    vlSelf->cache_enable_i = VL_RAND_RESET_I(1);
    vlSelf->byte_op_i = VL_RAND_RESET_I(1);
    vlSelf->address_i = VL_RAND_RESET_I(32);
    vlSelf->write_data_i = VL_RAND_RESET_I(32);
    vlSelf->read_data_o = VL_RAND_RESET_I(32);
    vlSelf->cache__DOT__mem_incoming_data = VL_RAND_RESET_I(32);
    vlSelf->cache__DOT__mem_write_data = VL_RAND_RESET_I(32);
    vlSelf->cache__DOT__mem_byte_op = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->cache__DOT__line__DOT__cache_tag[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->cache__DOT__line__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->cache__DOT__line__DOT__counter = VL_RAND_RESET_I(2);
    vlSelf->cache__DOT__line__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->cache__DOT__line__DOT__wayhit = VL_RAND_RESET_I(2);
    vlSelf->cache__DOT__line__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cache__DOT__line__DOT__unnamedblk2__DOT__i = 0;
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->cache__DOT__memory__DOT__data_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cache__DOT__memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->cache__DOT__memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vchglast__TOP__cache__DOT__mem_incoming_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
