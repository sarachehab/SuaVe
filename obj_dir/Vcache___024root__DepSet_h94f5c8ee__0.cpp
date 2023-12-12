// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcache.h for the primary calling header

#include "verilated.h"

#include "Vcache___024root.h"

VL_INLINE_OPT void Vcache___024root___combo__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->mem_address_o = vlSelf->address_i;
}

VL_INLINE_OPT void Vcache___024root___sequent__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v0;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__cache_data__v0;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v0;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v1;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__cache_data__v1;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v1;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v1;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_tag__v0;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__cache_tag__v0;
    IData/*25:0*/ __Vdlyvval__cache__DOT__cache_tag__v0;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_tag__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_tag__v1;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__cache_tag__v1;
    IData/*25:0*/ __Vdlyvval__cache__DOT__cache_tag__v1;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_tag__v1;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__valid__v0;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__valid__v0;
    CData/*0:0*/ __Vdlyvset__cache__DOT__valid__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__valid__v1;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__valid__v1;
    CData/*0:0*/ __Vdlyvset__cache__DOT__valid__v1;
    // Body
    __Vdlyvset__cache__DOT__cache_data__v0 = 0U;
    __Vdlyvset__cache__DOT__cache_data__v1 = 0U;
    __Vdlyvset__cache__DOT__valid__v0 = 0U;
    __Vdlyvset__cache__DOT__valid__v1 = 0U;
    __Vdlyvset__cache__DOT__cache_tag__v0 = 0U;
    __Vdlyvset__cache__DOT__cache_tag__v1 = 0U;
    if (((IData)(vlSelf->write_enable_i) & (~ (IData)(vlSelf->cache__DOT__hit)))) {
        vlSelf->mem_write_enable_o = 1U;
        vlSelf->mem_write_data_o = vlSelf->write_data_i;
    } else if (((IData)(vlSelf->write_enable_i) & (IData)(vlSelf->cache__DOT__hit))) {
        vlSelf->mem_write_enable_o = 1U;
        vlSelf->mem_write_data_o = vlSelf->write_data_i;
    }
    if ((1U & (~ ((IData)(vlSelf->write_enable_i) & 
                  (~ (IData)(vlSelf->cache__DOT__hit)))))) {
        if (((IData)(vlSelf->write_enable_i) & (IData)(vlSelf->cache__DOT__hit))) {
            __Vdlyvval__cache__DOT__cache_data__v0 
                = vlSelf->write_data_i;
            __Vdlyvset__cache__DOT__cache_data__v0 = 1U;
            __Vdlyvdim1__cache__DOT__cache_data__v0 
                = vlSelf->cache__DOT__LRU_pointer;
            __Vdlyvdim0__cache__DOT__cache_data__v0 
                = (0xfU & (vlSelf->address_i >> 2U));
            __Vdlyvset__cache__DOT__valid__v0 = 1U;
            __Vdlyvdim1__cache__DOT__valid__v0 = vlSelf->cache__DOT__LRU_pointer;
            __Vdlyvdim0__cache__DOT__valid__v0 = (0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U));
            __Vdlyvval__cache__DOT__cache_tag__v0 = 
                (vlSelf->address_i >> 6U);
            __Vdlyvset__cache__DOT__cache_tag__v0 = 1U;
            __Vdlyvdim1__cache__DOT__cache_tag__v0 
                = vlSelf->cache__DOT__LRU_pointer;
            __Vdlyvdim0__cache__DOT__cache_tag__v0 
                = (0xfU & (vlSelf->address_i >> 2U));
        } else if (vlSelf->cache__DOT__readmiss) {
            __Vdlyvval__cache__DOT__cache_data__v1 
                = vlSelf->mem_incoming_data_i;
            __Vdlyvset__cache__DOT__cache_data__v1 = 1U;
            __Vdlyvdim1__cache__DOT__cache_data__v1 
                = vlSelf->cache__DOT__LRU_pointer;
            __Vdlyvdim0__cache__DOT__cache_data__v1 
                = (0xfU & (vlSelf->address_i >> 2U));
            __Vdlyvset__cache__DOT__valid__v1 = 1U;
            __Vdlyvdim1__cache__DOT__valid__v1 = vlSelf->cache__DOT__LRU_pointer;
            __Vdlyvdim0__cache__DOT__valid__v1 = (0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U));
            __Vdlyvval__cache__DOT__cache_tag__v1 = 
                (vlSelf->address_i >> 6U);
            __Vdlyvset__cache__DOT__cache_tag__v1 = 1U;
            __Vdlyvdim1__cache__DOT__cache_tag__v1 
                = vlSelf->cache__DOT__LRU_pointer;
            __Vdlyvdim0__cache__DOT__cache_tag__v1 
                = (0xfU & (vlSelf->address_i >> 2U));
        }
    }
    if (__Vdlyvset__cache__DOT__cache_data__v0) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v0][__Vdlyvdim1__cache__DOT__cache_data__v0] 
            = __Vdlyvval__cache__DOT__cache_data__v0;
    }
    if (__Vdlyvset__cache__DOT__cache_data__v1) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v1][__Vdlyvdim1__cache__DOT__cache_data__v1] 
            = __Vdlyvval__cache__DOT__cache_data__v1;
    }
    if (__Vdlyvset__cache__DOT__valid__v0) {
        vlSelf->cache__DOT__valid[__Vdlyvdim0__cache__DOT__valid__v0][__Vdlyvdim1__cache__DOT__valid__v0] = 1U;
    }
    if (__Vdlyvset__cache__DOT__valid__v1) {
        vlSelf->cache__DOT__valid[__Vdlyvdim0__cache__DOT__valid__v1][__Vdlyvdim1__cache__DOT__valid__v1] = 1U;
    }
    if (__Vdlyvset__cache__DOT__cache_tag__v0) {
        vlSelf->cache__DOT__cache_tag[__Vdlyvdim0__cache__DOT__cache_tag__v0][__Vdlyvdim1__cache__DOT__cache_tag__v0] 
            = __Vdlyvval__cache__DOT__cache_tag__v0;
    }
    if (__Vdlyvset__cache__DOT__cache_tag__v1) {
        vlSelf->cache__DOT__cache_tag[__Vdlyvdim0__cache__DOT__cache_tag__v1][__Vdlyvdim1__cache__DOT__cache_tag__v1] 
            = __Vdlyvval__cache__DOT__cache_tag__v1;
    }
}

VL_INLINE_OPT void Vcache___024root___combo__TOP__1(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___combo__TOP__1\n"); );
    // Init
    CData/*1:0*/ __Vfunc_cache__DOT__get_min__16__Vfuncout;
    // Body
    if ((1U & (~ (((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                   [(0xfU & (vlSelf->address_i >> 2U))]
                   [0U]) & vlSelf->cache__DOT__valid
                  [(0xfU & (vlSelf->address_i >> 2U))]
                  [0U])))) {
        if ((1U & (~ (((vlSelf->address_i >> 6U) == 
                       vlSelf->cache__DOT__cache_tag
                       [(0xfU & (vlSelf->address_i 
                                 >> 2U))][1U]) & vlSelf->cache__DOT__valid
                      [(0xfU & (vlSelf->address_i >> 2U))]
                      [1U])))) {
            if ((1U & (~ (((vlSelf->address_i >> 6U) 
                           == vlSelf->cache__DOT__cache_tag
                           [(0xfU & (vlSelf->address_i 
                                     >> 2U))][2U]) 
                          & vlSelf->cache__DOT__valid
                          [(0xfU & (vlSelf->address_i 
                                    >> 2U))][2U])))) {
                if ((1U & (~ (((vlSelf->address_i >> 6U) 
                               == vlSelf->cache__DOT__cache_tag
                               [(0xfU & (vlSelf->address_i 
                                         >> 2U))][3U]) 
                              & vlSelf->cache__DOT__valid
                              [(0xfU & (vlSelf->address_i 
                                        >> 2U))][3U])))) {
                    vlSelf->cache__DOT__readmiss = 1U;
                }
            }
        }
    }
    if ((((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
          [(0xfU & (vlSelf->address_i >> 2U))][0U]) 
         & vlSelf->cache__DOT__valid[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
         [0U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][0U];
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][0U] = 3U;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__0__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [1U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__0__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__0__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__0__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__0__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__0__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][1U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__0__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__1__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [2U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__1__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__1__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__1__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__1__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__1__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][2U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__1__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__2__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [3U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__2__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__2__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__2__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__2__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__2__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][3U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__2__Vfuncout;
    } else if ((((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                 [(0xfU & (vlSelf->address_i >> 2U))]
                 [1U]) & vlSelf->cache__DOT__valid[
                (0xfU & (vlSelf->address_i >> 2U))]
                [1U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][1U];
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][1U] = 3U;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__3__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [0U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__3__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__3__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__3__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__3__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__3__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][0U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__3__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__4__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [2U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__4__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__4__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__4__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__4__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__4__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][2U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__4__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__5__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [3U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__5__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__5__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__5__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__5__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__5__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][3U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__5__Vfuncout;
    } else if ((((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                 [(0xfU & (vlSelf->address_i >> 2U))]
                 [2U]) & vlSelf->cache__DOT__valid[
                (0xfU & (vlSelf->address_i >> 2U))]
                [2U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][2U];
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][2U] = 3U;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__6__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [0U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__6__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__6__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__6__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__6__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__6__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][0U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__6__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__7__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [1U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__7__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__7__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__7__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__7__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__7__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][1U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__7__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__8__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [3U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__8__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__8__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__8__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__8__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__8__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][3U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__8__Vfuncout;
    } else if ((((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                 [(0xfU & (vlSelf->address_i >> 2U))]
                 [3U]) & vlSelf->cache__DOT__valid[
                (0xfU & (vlSelf->address_i >> 2U))]
                [3U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][3U];
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][3U] = 3U;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__9__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [0U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__9__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__9__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__9__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__9__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__9__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][0U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__9__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__10__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [1U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__10__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__10__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__10__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__10__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__10__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][1U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__10__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__11__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [2U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__11__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__11__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__11__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__11__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__11__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][2U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__11__Vfuncout;
    } else {
        vlSelf->read_data_o = vlSelf->mem_incoming_data_i;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__12__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [0U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__12__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__12__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__12__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__12__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__12__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][0U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__12__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__13__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [1U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__13__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__13__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__13__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__13__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__13__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][1U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__13__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__14__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [2U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__14__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__14__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__14__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__14__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__14__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][2U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__14__Vfuncout;
        vlSelf->__Vfunc_cache__DOT__LRU_calc__15__a 
            = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                               >> 2U))]
            [3U];
        vlSelf->__Vfunc_cache__DOT__LRU_calc__15__result 
            = ((0U == (IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__15__a))
                ? 0U : (3U & ((IData)(vlSelf->__Vfunc_cache__DOT__LRU_calc__15__a) 
                              - (IData)(1U))));
        vlSelf->__Vfunc_cache__DOT__LRU_calc__15__Vfuncout 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__15__result;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][3U] 
            = vlSelf->__Vfunc_cache__DOT__LRU_calc__15__Vfuncout;
        vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                         >> 2U))][vlSelf->cache__DOT__LRU_pointer] = 3U;
    }
    vlSelf->cache__DOT__hit = ((((vlSelf->address_i 
                                  >> 6U) == vlSelf->cache__DOT__cache_tag
                                 [(0xfU & (vlSelf->address_i 
                                           >> 2U))]
                                 [0U]) & vlSelf->cache__DOT__valid
                                [(0xfU & (vlSelf->address_i 
                                          >> 2U))][0U]) 
                               | ((((vlSelf->address_i 
                                     >> 6U) == vlSelf->cache__DOT__cache_tag
                                    [(0xfU & (vlSelf->address_i 
                                              >> 2U))]
                                    [1U]) & vlSelf->cache__DOT__valid
                                   [(0xfU & (vlSelf->address_i 
                                             >> 2U))]
                                   [1U]) | ((((vlSelf->address_i 
                                               >> 6U) 
                                              == vlSelf->cache__DOT__cache_tag
                                              [(0xfU 
                                                & (vlSelf->address_i 
                                                   >> 2U))]
                                              [2U]) 
                                             & vlSelf->cache__DOT__valid
                                             [(0xfU 
                                               & (vlSelf->address_i 
                                                  >> 2U))]
                                             [2U]) 
                                            | (((vlSelf->address_i 
                                                 >> 6U) 
                                                == 
                                                vlSelf->cache__DOT__cache_tag
                                                [(0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U))]
                                                [3U]) 
                                               & vlSelf->cache__DOT__valid
                                               [(0xfU 
                                                 & (vlSelf->address_i 
                                                    >> 2U))]
                                               [3U]))));
    vlSelf->__Vfunc_cache__DOT__get_min__16__ages[3U] 
        = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                           >> 2U))]
        [3U];
    vlSelf->__Vfunc_cache__DOT__get_min__16__ages[2U] 
        = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                           >> 2U))]
        [2U];
    vlSelf->__Vfunc_cache__DOT__get_min__16__ages[1U] 
        = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                           >> 2U))]
        [1U];
    vlSelf->__Vfunc_cache__DOT__get_min__16__ages[0U] 
        = vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                           >> 2U))]
        [0U];
    if ((0U == vlSelf->__Vfunc_cache__DOT__get_min__16__ages
         [0U])) {
        vlSelf->__Vfunc_cache__DOT__get_min__16__result = 0U;
    }
    if ((0U == vlSelf->__Vfunc_cache__DOT__get_min__16__ages
         [1U])) {
        vlSelf->__Vfunc_cache__DOT__get_min__16__result = 1U;
    }
    if ((0U == vlSelf->__Vfunc_cache__DOT__get_min__16__ages
         [2U])) {
        vlSelf->__Vfunc_cache__DOT__get_min__16__result = 2U;
    }
    if ((0U == vlSelf->__Vfunc_cache__DOT__get_min__16__ages
         [3U])) {
        vlSelf->__Vfunc_cache__DOT__get_min__16__result = 3U;
    }
    __Vfunc_cache__DOT__get_min__16__Vfuncout = vlSelf->__Vfunc_cache__DOT__get_min__16__result;
    vlSelf->cache__DOT__LRU_pointer = __Vfunc_cache__DOT__get_min__16__Vfuncout;
    vlSelf->hit_o = vlSelf->cache__DOT__hit;
}

void Vcache___024root___eval(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval\n"); );
    // Body
    Vcache___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vcache___024root___sequent__TOP__0(vlSelf);
    }
    Vcache___024root___combo__TOP__1(vlSelf);
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
    __req |= ((vlSelf->cache__DOT__LRU_pointer ^ vlSelf->__Vchglast__TOP__cache__DOT__LRU_pointer));
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__LRU_pointer ^ vlSelf->__Vchglast__TOP__cache__DOT__LRU_pointer))) VL_DBG_MSGF("        CHANGE: cache.sv:29: cache.LRU_pointer\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cache__DOT__LRU_pointer 
        = vlSelf->cache__DOT__LRU_pointer;
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
}
#endif  // VL_DEBUG
