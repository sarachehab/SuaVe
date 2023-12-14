// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "verilated.h"

#include "Vcache___024root.h"

VL_INLINE_OPT void Vcache___024root___sequent__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___sequent__TOP__0\n"); );
    // Body
    if ((((IData)(vlSelf->write_enable_i) | (~ (IData)(vlSelf->cache__DOT__line__DOT__hit))) 
         & (IData)(vlSelf->cache_enable_i))) {
        vlSelf->cache__DOT__line__DOT__counter = (3U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->cache__DOT__line__DOT__counter)));
    }
}

VL_INLINE_OPT void Vcache___024root___sequent__TOP__1(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___sequent__TOP__1\n"); );
    // Init
    IData/*16:0*/ __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v0;
    CData/*7:0*/ __Vdlyvval__cache__DOT__memory__DOT__data_ram__v0;
    CData/*0:0*/ __Vdlyvset__cache__DOT__memory__DOT__data_ram__v0;
    IData/*16:0*/ __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v1;
    CData/*7:0*/ __Vdlyvval__cache__DOT__memory__DOT__data_ram__v1;
    IData/*16:0*/ __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v2;
    CData/*7:0*/ __Vdlyvval__cache__DOT__memory__DOT__data_ram__v2;
    IData/*16:0*/ __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v3;
    CData/*7:0*/ __Vdlyvval__cache__DOT__memory__DOT__data_ram__v3;
    // Body
    __Vdlyvset__cache__DOT__memory__DOT__data_ram__v0 = 0U;
    if (vlSelf->cache__DOT__mem_write_enable) {
        __Vdlyvval__cache__DOT__memory__DOT__data_ram__v0 
            = (0xffU & vlSelf->cache__DOT__mem_write_data);
        __Vdlyvset__cache__DOT__memory__DOT__data_ram__v0 = 1U;
        __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v0 
            = (0x1fffcU & vlSelf->cache__DOT__mem_address);
        __Vdlyvval__cache__DOT__memory__DOT__data_ram__v1 
            = (0xffU & (vlSelf->cache__DOT__mem_write_data 
                        >> 8U));
        __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v1 
            = (0x1ffffU & ((IData)(1U) + (0x1fffcU 
                                          & vlSelf->cache__DOT__mem_address)));
        __Vdlyvval__cache__DOT__memory__DOT__data_ram__v2 
            = (0xffU & (vlSelf->cache__DOT__mem_write_data 
                        >> 0x10U));
        __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v2 
            = (0x1ffffU & ((IData)(2U) + (0x1fffcU 
                                          & vlSelf->cache__DOT__mem_address)));
        __Vdlyvval__cache__DOT__memory__DOT__data_ram__v3 
            = (vlSelf->cache__DOT__mem_write_data >> 0x18U);
        __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v3 
            = (0x1ffffU & ((IData)(3U) + (0x1fffcU 
                                          & vlSelf->cache__DOT__mem_address)));
    }
    if (__Vdlyvset__cache__DOT__memory__DOT__data_ram__v0) {
        vlSelf->cache__DOT__memory__DOT__data_ram[__Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v0] 
            = __Vdlyvval__cache__DOT__memory__DOT__data_ram__v0;
        vlSelf->cache__DOT__memory__DOT__data_ram[__Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v1] 
            = __Vdlyvval__cache__DOT__memory__DOT__data_ram__v1;
        vlSelf->cache__DOT__memory__DOT__data_ram[__Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v2] 
            = __Vdlyvval__cache__DOT__memory__DOT__data_ram__v2;
        vlSelf->cache__DOT__memory__DOT__data_ram[__Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v3] 
            = __Vdlyvval__cache__DOT__memory__DOT__data_ram__v3;
    }
}

VL_INLINE_OPT void Vcache___024root___combo__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->cache__DOT__mem_write_enable = vlSelf->write_enable_i;
    vlSelf->cache__DOT__mem_address = vlSelf->address_i;
    vlSelf->cache__DOT__mem_incoming_data = ((vlSelf->cache__DOT__memory__DOT__data_ram
                                              [(0x1ffffU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0x1fffcU 
                                                    & vlSelf->cache__DOT__mem_address)))] 
                                              << 0x18U) 
                                             | ((vlSelf->cache__DOT__memory__DOT__data_ram
                                                 [(0x1ffffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x1fffcU 
                                                       & vlSelf->cache__DOT__mem_address)))] 
                                                 << 0x10U) 
                                                | ((vlSelf->cache__DOT__memory__DOT__data_ram
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(1U) 
                                                        + 
                                                        (0x1fffcU 
                                                         & vlSelf->cache__DOT__mem_address)))] 
                                                    << 8U) 
                                                   | vlSelf->cache__DOT__memory__DOT__data_ram
                                                   [
                                                   (0x1fffcU 
                                                    & vlSelf->cache__DOT__mem_address)])));
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
            vlSelf->cache__DOT__mem_address = vlSelf->address_i;
            vlSelf->cache__DOT__mem_write_enable = 1U;
            if (vlSelf->cache__DOT__line__DOT__hit) {
                vlSelf->cache__DOT__line__DOT__cache_tag[vlSelf->cache__DOT__line__DOT__wayhit] 
                    = (vlSelf->address_i >> 2U);
                vlSelf->cache__DOT__line__DOT__cache_data[vlSelf->cache__DOT__line__DOT__wayhit] 
                    = vlSelf->write_data_i;
                vlSelf->cache__DOT__line__DOT__valid[vlSelf->cache__DOT__line__DOT__wayhit] = 1U;
                vlSelf->cache__DOT__mem_write_data 
                    = vlSelf->write_data_i;
            } else {
                vlSelf->cache__DOT__line__DOT__cache_tag[vlSelf->cache__DOT__line__DOT__counter] 
                    = (vlSelf->address_i >> 2U);
                vlSelf->cache__DOT__line__DOT__cache_data[vlSelf->cache__DOT__line__DOT__counter] 
                    = vlSelf->write_data_i;
                vlSelf->cache__DOT__line__DOT__valid[vlSelf->cache__DOT__line__DOT__counter] = 1U;
                vlSelf->cache__DOT__mem_write_data 
                    = vlSelf->write_data_i;
            }
        } else {
            vlSelf->cache__DOT__mem_write_enable = 0U;
            if (VL_LIKELY(vlSelf->cache__DOT__line__DOT__hit)) {
                vlSelf->read_data_o = vlSelf->cache__DOT__line__DOT__cache_data
                    [vlSelf->cache__DOT__line__DOT__wayhit];
            } else {
                VL_WRITEF("readmiss\n");
                vlSelf->cache__DOT__mem_address = vlSelf->address_i;
                vlSelf->cache__DOT__line__DOT__cache_tag[vlSelf->cache__DOT__line__DOT__counter] 
                    = (vlSelf->address_i >> 2U);
                vlSelf->cache__DOT__line__DOT__cache_data[vlSelf->cache__DOT__line__DOT__counter] 
                    = vlSelf->cache__DOT__mem_incoming_data;
                vlSelf->cache__DOT__line__DOT__valid[vlSelf->cache__DOT__line__DOT__counter] = 1U;
                vlSelf->read_data_o = vlSelf->cache__DOT__mem_incoming_data;
            }
        }
    }
}

void Vcache___024root___eval(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vcache___024root___sequent__TOP__0(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vcache___024root___sequent__TOP__1(vlSelf);
    }
    Vcache___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

QData Vcache___024root___change_request_1(Vcache___024root* vlSelf);

VL_INLINE_OPT QData Vcache___024root___change_request(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___change_request\n"); );
    // Body
    return (Vcache___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcache___024root___change_request_1(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->cache__DOT__mem_address ^ vlSelf->__Vchglast__TOP__cache__DOT__mem_address)
         | (vlSelf->cache__DOT__line__DOT__cache_tag
            [0U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag
            [0U])
         | (vlSelf->cache__DOT__line__DOT__cache_tag
            [1U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag
            [1U])
         | (vlSelf->cache__DOT__line__DOT__cache_tag
            [2U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag
            [2U])
         | (vlSelf->cache__DOT__line__DOT__cache_tag
            [3U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag
            [3U])
         | (vlSelf->cache__DOT__line__DOT__valid[0U] ^ 
            vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid
            [0U])
         | (vlSelf->cache__DOT__line__DOT__valid[1U] ^ 
            vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid
            [1U])
         | (vlSelf->cache__DOT__line__DOT__valid[2U] ^ 
            vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid
            [2U])
         | (vlSelf->cache__DOT__line__DOT__valid[3U] ^ 
            vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid
            [3U]));
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__mem_address ^ vlSelf->__Vchglast__TOP__cache__DOT__mem_address))) VL_DBG_MSGF("        CHANGE: cache.sv:9: cache.mem_address\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__line__DOT__cache_tag
                               [0U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag
                               [0U]))) VL_DBG_MSGF("        CHANGE: cacheline.sv:18\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__line__DOT__cache_tag
                               [1U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag
                               [1U]))) VL_DBG_MSGF("        CHANGE: cacheline.sv:18\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__line__DOT__cache_tag
                               [2U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag
                               [2U]))) VL_DBG_MSGF("        CHANGE: cacheline.sv:18\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__line__DOT__cache_tag
                               [3U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag
                               [3U]))) VL_DBG_MSGF("        CHANGE: cacheline.sv:18\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__line__DOT__valid
                               [0U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid
                               [0U]))) VL_DBG_MSGF("        CHANGE: cacheline.sv:19\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__line__DOT__valid
                               [1U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid
                               [1U]))) VL_DBG_MSGF("        CHANGE: cacheline.sv:19\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__line__DOT__valid
                               [2U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid
                               [2U]))) VL_DBG_MSGF("        CHANGE: cacheline.sv:19\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__line__DOT__valid
                               [3U] ^ vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid
                               [3U]))) VL_DBG_MSGF("        CHANGE: cacheline.sv:19\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cache__DOT__mem_address 
        = vlSelf->cache__DOT__mem_address;
    vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag[0U] 
        = vlSelf->cache__DOT__line__DOT__cache_tag[0U];
    vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag[1U] 
        = vlSelf->cache__DOT__line__DOT__cache_tag[1U];
    vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag[2U] 
        = vlSelf->cache__DOT__line__DOT__cache_tag[2U];
    vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__cache_tag[3U] 
        = vlSelf->cache__DOT__line__DOT__cache_tag[3U];
    vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid[0U] 
        = vlSelf->cache__DOT__line__DOT__valid[0U];
    vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid[1U] 
        = vlSelf->cache__DOT__line__DOT__valid[1U];
    vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid[2U] 
        = vlSelf->cache__DOT__line__DOT__valid[2U];
    vlSelf->__Vchglast__TOP__cache__DOT__line__DOT__valid[3U] 
        = vlSelf->cache__DOT__line__DOT__valid[3U];
    return __req;
}

#ifdef VL_DEBUG
void Vcache___024root___eval_debug_assertions(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->write_enable_i & 0xfeU))) {
        Verilated::overWidthError("write_enable_i");}
    if (VL_UNLIKELY((vlSelf->cache_enable_i & 0xfeU))) {
        Verilated::overWidthError("cache_enable_i");}
}
#endif  // VL_DEBUG
