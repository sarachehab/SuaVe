// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "verilated.h"

#include "Vcache___024root.h"

VL_INLINE_OPT void Vcache___024root___sequent__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v0;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v0;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v1;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v1;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v1;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v2;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v2;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v2;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v3;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v3;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v3;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v4;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v4;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v4;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_tag__v0;
    IData/*25:0*/ __Vdlyvval__cache__DOT__cache_tag__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__valid__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v5;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v5;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v5;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_tag__v1;
    IData/*25:0*/ __Vdlyvval__cache__DOT__cache_tag__v1;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__valid__v1;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v6;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v6;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v6;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_tag__v2;
    IData/*25:0*/ __Vdlyvval__cache__DOT__cache_tag__v2;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__valid__v2;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v7;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v7;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v7;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_tag__v3;
    IData/*25:0*/ __Vdlyvval__cache__DOT__cache_tag__v3;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__valid__v3;
    // Body
    __Vdlyvset__cache__DOT__cache_data__v0 = 0U;
    __Vdlyvset__cache__DOT__cache_data__v1 = 0U;
    __Vdlyvset__cache__DOT__cache_data__v2 = 0U;
    __Vdlyvset__cache__DOT__cache_data__v3 = 0U;
    __Vdlyvset__cache__DOT__cache_data__v4 = 0U;
    __Vdlyvset__cache__DOT__cache_data__v5 = 0U;
    __Vdlyvset__cache__DOT__cache_data__v6 = 0U;
    __Vdlyvset__cache__DOT__cache_data__v7 = 0U;
    if (((IData)(vlSelf->write_enable_i) & (IData)(vlSelf->cache__DOT__hit))) {
        if (((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
             [(0xfU & (vlSelf->address_i >> 2U))][0U])) {
            __Vdlyvval__cache__DOT__cache_data__v0 
                = vlSelf->write_data_i;
            __Vdlyvset__cache__DOT__cache_data__v0 = 1U;
            __Vdlyvdim0__cache__DOT__cache_data__v0 
                = (0xfU & (vlSelf->address_i >> 2U));
        } else if (((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                    [(0xfU & (vlSelf->address_i >> 2U))]
                    [1U])) {
            __Vdlyvval__cache__DOT__cache_data__v1 
                = vlSelf->write_data_i;
            __Vdlyvset__cache__DOT__cache_data__v1 = 1U;
            __Vdlyvdim0__cache__DOT__cache_data__v1 
                = (0xfU & (vlSelf->address_i >> 2U));
        } else if (((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                    [(0xfU & (vlSelf->address_i >> 2U))]
                    [2U])) {
            __Vdlyvval__cache__DOT__cache_data__v2 
                = vlSelf->write_data_i;
            __Vdlyvset__cache__DOT__cache_data__v2 = 1U;
            __Vdlyvdim0__cache__DOT__cache_data__v2 
                = (0xfU & (vlSelf->address_i >> 2U));
        } else if (((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                    [(0xfU & (vlSelf->address_i >> 2U))]
                    [3U])) {
            __Vdlyvval__cache__DOT__cache_data__v3 
                = vlSelf->write_data_i;
            __Vdlyvset__cache__DOT__cache_data__v3 = 1U;
            __Vdlyvdim0__cache__DOT__cache_data__v3 
                = (0xfU & (vlSelf->address_i >> 2U));
        }
    } else if (vlSelf->write_enable_i) {
        if (vlSelf->cache__DOT__valid[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [0U]) {
            if (vlSelf->cache__DOT__valid[(0xfU & (vlSelf->address_i 
                                                   >> 2U))]
                [1U]) {
                if (vlSelf->cache__DOT__valid[(0xfU 
                                               & (vlSelf->address_i 
                                                  >> 2U))]
                    [2U]) {
                    if ((1U & (~ vlSelf->cache__DOT__valid
                               [(0xfU & (vlSelf->address_i 
                                         >> 2U))][3U]))) {
                        __Vdlyvval__cache__DOT__cache_data__v4 
                            = vlSelf->write_data_i;
                        __Vdlyvset__cache__DOT__cache_data__v4 = 1U;
                        __Vdlyvdim0__cache__DOT__cache_data__v4 
                            = (0xfU & (vlSelf->address_i 
                                       >> 2U));
                        __Vdlyvval__cache__DOT__cache_tag__v0 
                            = (vlSelf->address_i >> 6U);
                        __Vdlyvdim0__cache__DOT__cache_tag__v0 
                            = (0xfU & (vlSelf->address_i 
                                       >> 2U));
                        __Vdlyvdim0__cache__DOT__valid__v0 
                            = (0xfU & (vlSelf->address_i 
                                       >> 2U));
                    }
                } else {
                    __Vdlyvval__cache__DOT__cache_data__v5 
                        = vlSelf->write_data_i;
                    __Vdlyvset__cache__DOT__cache_data__v5 = 1U;
                    __Vdlyvdim0__cache__DOT__cache_data__v5 
                        = (0xfU & (vlSelf->address_i 
                                   >> 2U));
                    __Vdlyvval__cache__DOT__cache_tag__v1 
                        = (vlSelf->address_i >> 6U);
                    __Vdlyvdim0__cache__DOT__cache_tag__v1 
                        = (0xfU & (vlSelf->address_i 
                                   >> 2U));
                    __Vdlyvdim0__cache__DOT__valid__v1 
                        = (0xfU & (vlSelf->address_i 
                                   >> 2U));
                }
            } else {
                __Vdlyvval__cache__DOT__cache_data__v6 
                    = vlSelf->write_data_i;
                __Vdlyvset__cache__DOT__cache_data__v6 = 1U;
                __Vdlyvdim0__cache__DOT__cache_data__v6 
                    = (0xfU & (vlSelf->address_i >> 2U));
                __Vdlyvval__cache__DOT__cache_tag__v2 
                    = (vlSelf->address_i >> 6U);
                __Vdlyvdim0__cache__DOT__cache_tag__v2 
                    = (0xfU & (vlSelf->address_i >> 2U));
                __Vdlyvdim0__cache__DOT__valid__v2 
                    = (0xfU & (vlSelf->address_i >> 2U));
            }
        } else {
            __Vdlyvval__cache__DOT__cache_data__v7 
                = vlSelf->write_data_i;
            __Vdlyvset__cache__DOT__cache_data__v7 = 1U;
            __Vdlyvdim0__cache__DOT__cache_data__v7 
                = (0xfU & (vlSelf->address_i >> 2U));
            __Vdlyvval__cache__DOT__cache_tag__v3 = 
                (vlSelf->address_i >> 6U);
            __Vdlyvdim0__cache__DOT__cache_tag__v3 
                = (0xfU & (vlSelf->address_i >> 2U));
            __Vdlyvdim0__cache__DOT__valid__v3 = (0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U));
        }
    }
    if (__Vdlyvset__cache__DOT__cache_data__v0) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v0][0U] 
            = __Vdlyvval__cache__DOT__cache_data__v0;
    }
    if (__Vdlyvset__cache__DOT__cache_data__v1) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v1][1U] 
            = __Vdlyvval__cache__DOT__cache_data__v1;
    }
    if (__Vdlyvset__cache__DOT__cache_data__v2) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v2][2U] 
            = __Vdlyvval__cache__DOT__cache_data__v2;
    }
    if (__Vdlyvset__cache__DOT__cache_data__v3) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v3][3U] 
            = __Vdlyvval__cache__DOT__cache_data__v3;
    }
    if (__Vdlyvset__cache__DOT__cache_data__v4) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v4][3U] 
            = __Vdlyvval__cache__DOT__cache_data__v4;
        vlSelf->cache__DOT__valid[__Vdlyvdim0__cache__DOT__valid__v0][3U] = 1U;
        vlSelf->cache__DOT__cache_tag[__Vdlyvdim0__cache__DOT__cache_tag__v0][3U] 
            = __Vdlyvval__cache__DOT__cache_tag__v0;
    }
    if (__Vdlyvset__cache__DOT__cache_data__v5) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v5][2U] 
            = __Vdlyvval__cache__DOT__cache_data__v5;
        vlSelf->cache__DOT__valid[__Vdlyvdim0__cache__DOT__valid__v1][2U] = 1U;
        vlSelf->cache__DOT__cache_tag[__Vdlyvdim0__cache__DOT__cache_tag__v1][2U] 
            = __Vdlyvval__cache__DOT__cache_tag__v1;
    }
    if (__Vdlyvset__cache__DOT__cache_data__v6) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v6][1U] 
            = __Vdlyvval__cache__DOT__cache_data__v6;
        vlSelf->cache__DOT__valid[__Vdlyvdim0__cache__DOT__valid__v2][1U] = 1U;
        vlSelf->cache__DOT__cache_tag[__Vdlyvdim0__cache__DOT__cache_tag__v2][1U] 
            = __Vdlyvval__cache__DOT__cache_tag__v2;
    }
    if (__Vdlyvset__cache__DOT__cache_data__v7) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v7][0U] 
            = __Vdlyvval__cache__DOT__cache_data__v7;
        vlSelf->cache__DOT__valid[__Vdlyvdim0__cache__DOT__valid__v3][0U] = 1U;
        vlSelf->cache__DOT__cache_tag[__Vdlyvdim0__cache__DOT__cache_tag__v3][0U] 
            = __Vdlyvval__cache__DOT__cache_tag__v3;
    }
}

VL_INLINE_OPT void Vcache___024root___combo__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___combo__TOP__0\n"); );
    // Body
    if (((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
         [(0xfU & (vlSelf->address_i >> 2U))][0U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][0U];
        vlSelf->cache__DOT__hit = vlSelf->cache__DOT__valid
            [(0xfU & (vlSelf->address_i >> 2U))][0U];
    } else if (((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                [(0xfU & (vlSelf->address_i >> 2U))]
                [1U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][1U];
        vlSelf->cache__DOT__hit = vlSelf->cache__DOT__valid
            [(0xfU & (vlSelf->address_i >> 2U))][1U];
    } else if (((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                [(0xfU & (vlSelf->address_i >> 2U))]
                [2U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][2U];
        vlSelf->cache__DOT__hit = vlSelf->cache__DOT__valid
            [(0xfU & (vlSelf->address_i >> 2U))][2U];
    } else if (((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                [(0xfU & (vlSelf->address_i >> 2U))]
                [3U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][3U];
        vlSelf->cache__DOT__hit = (1U & vlSelf->cache__DOT__valid
                                   [(0xfU & (vlSelf->address_i 
                                             >> 2U))]
                                   [3U]);
    } else {
        vlSelf->read_data_o = 0U;
        vlSelf->cache__DOT__hit = 0U;
    }
    vlSelf->hit_o = vlSelf->cache__DOT__hit;
}

void Vcache___024root___eval(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vcache___024root___sequent__TOP__0(vlSelf);
    }
    Vcache___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
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
}
#endif  // VL_DEBUG
