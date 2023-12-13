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
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_tag__v0;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__cache_tag__v0;
    IData/*25:0*/ __Vdlyvval__cache__DOT__cache_tag__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__valid__v0;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__valid__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v1;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__cache_data__v1;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v1;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v1;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_tag__v1;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__cache_tag__v1;
    IData/*25:0*/ __Vdlyvval__cache__DOT__cache_tag__v1;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__valid__v1;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__valid__v1;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_data__v2;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__cache_data__v2;
    IData/*31:0*/ __Vdlyvval__cache__DOT__cache_data__v2;
    CData/*0:0*/ __Vdlyvset__cache__DOT__cache_data__v2;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__cache_tag__v2;
    CData/*1:0*/ __Vdlyvdim1__cache__DOT__cache_tag__v2;
    IData/*25:0*/ __Vdlyvval__cache__DOT__cache_tag__v2;
    // Body
    __Vdlyvset__cache__DOT__cache_data__v2 = 0U;
    __Vdlyvset__cache__DOT__cache_data__v0 = 0U;
    __Vdlyvset__cache__DOT__cache_data__v1 = 0U;
    VL_WRITEF("%b %b %b %b - %b\nv:%b %x v:%b %x v:%b %x v:%b %x\n\n",
              2,vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                                 >> 2U))]
              [0U],2,vlSelf->cache__DOT__age[(0xfU 
                                              & (vlSelf->address_i 
                                                 >> 2U))]
              [1U],2,vlSelf->cache__DOT__age[(0xfU 
                                              & (vlSelf->address_i 
                                                 >> 2U))]
              [2U],2,vlSelf->cache__DOT__age[(0xfU 
                                              & (vlSelf->address_i 
                                                 >> 2U))]
              [3U],2,vlSelf->cache__DOT__LRU_pointer,
              1,vlSelf->cache__DOT__valid[(0xfU & (vlSelf->address_i 
                                                   >> 2U))]
              [0U],32,vlSelf->cache__DOT__cache_data
              [(0xfU & (vlSelf->address_i >> 2U))][0U],
              1,vlSelf->cache__DOT__valid[(0xfU & (vlSelf->address_i 
                                                   >> 2U))]
              [1U],32,vlSelf->cache__DOT__cache_data
              [(0xfU & (vlSelf->address_i >> 2U))][1U],
              1,vlSelf->cache__DOT__valid[(0xfU & (vlSelf->address_i 
                                                   >> 2U))]
              [2U],32,vlSelf->cache__DOT__cache_data
              [(0xfU & (vlSelf->address_i >> 2U))][2U],
              1,vlSelf->cache__DOT__valid[(0xfU & (vlSelf->address_i 
                                                   >> 2U))]
              [3U],32,vlSelf->cache__DOT__cache_data
              [(0xfU & (vlSelf->address_i >> 2U))][3U]);
    if (VL_UNLIKELY(((IData)(vlSelf->write_enable_i) 
                     & (~ vlSelf->cache__DOT__valid
                        [(0xfU & (vlSelf->address_i 
                                  >> 2U))][vlSelf->cache__DOT__LRU_pointer])))) {
        VL_WRITEF("hello shit1\n");
        __Vdlyvval__cache__DOT__cache_data__v0 = vlSelf->write_data_i;
        __Vdlyvset__cache__DOT__cache_data__v0 = 1U;
        __Vdlyvdim1__cache__DOT__cache_data__v0 = vlSelf->cache__DOT__LRU_pointer;
        __Vdlyvdim0__cache__DOT__cache_data__v0 = (0xfU 
                                                   & (vlSelf->address_i 
                                                      >> 2U));
        __Vdlyvval__cache__DOT__cache_tag__v0 = (vlSelf->address_i 
                                                 >> 6U);
        __Vdlyvdim1__cache__DOT__cache_tag__v0 = vlSelf->cache__DOT__LRU_pointer;
        __Vdlyvdim0__cache__DOT__cache_tag__v0 = (0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U));
        __Vdlyvdim1__cache__DOT__valid__v0 = vlSelf->cache__DOT__LRU_pointer;
        __Vdlyvdim0__cache__DOT__valid__v0 = (0xfU 
                                              & (vlSelf->address_i 
                                                 >> 2U));
    } else if (VL_UNLIKELY(((IData)(vlSelf->write_enable_i) 
                            & (~ (IData)(vlSelf->cache__DOT__hit))))) {
        VL_WRITEF("hello shit2\n");
        vlSelf->mem_write_enable_o = 1U;
        vlSelf->mem_write_data_o = vlSelf->write_data_i;
    } else if (VL_UNLIKELY(((IData)(vlSelf->write_enable_i) 
                            & (IData)(vlSelf->cache__DOT__hit)))) {
        VL_WRITEF("hello shit3\n");
        vlSelf->mem_write_enable_o = 1U;
        vlSelf->mem_write_data_o = vlSelf->write_data_i;
        __Vdlyvval__cache__DOT__cache_data__v1 = vlSelf->write_data_i;
        __Vdlyvset__cache__DOT__cache_data__v1 = 1U;
        __Vdlyvdim1__cache__DOT__cache_data__v1 = vlSelf->cache__DOT__LRU_pointer;
        __Vdlyvdim0__cache__DOT__cache_data__v1 = (0xfU 
                                                   & (vlSelf->address_i 
                                                      >> 2U));
        __Vdlyvval__cache__DOT__cache_tag__v1 = (vlSelf->address_i 
                                                 >> 6U);
        __Vdlyvdim1__cache__DOT__cache_tag__v1 = vlSelf->cache__DOT__LRU_pointer;
        __Vdlyvdim0__cache__DOT__cache_tag__v1 = (0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U));
        __Vdlyvdim1__cache__DOT__valid__v1 = vlSelf->cache__DOT__LRU_pointer;
        __Vdlyvdim0__cache__DOT__valid__v1 = (0xfU 
                                              & (vlSelf->address_i 
                                                 >> 2U));
    } else if (VL_UNLIKELY(vlSelf->cache__DOT__readmiss)) {
        VL_WRITEF("hello shit4\n");
        __Vdlyvval__cache__DOT__cache_data__v2 = vlSelf->write_data_i;
        __Vdlyvset__cache__DOT__cache_data__v2 = 1U;
        __Vdlyvdim1__cache__DOT__cache_data__v2 = vlSelf->cache__DOT__LRU_pointer;
        __Vdlyvdim0__cache__DOT__cache_data__v2 = (0xfU 
                                                   & (vlSelf->address_i 
                                                      >> 2U));
        __Vdlyvval__cache__DOT__cache_tag__v2 = (vlSelf->address_i 
                                                 >> 6U);
        __Vdlyvdim1__cache__DOT__cache_tag__v2 = vlSelf->cache__DOT__LRU_pointer;
        __Vdlyvdim0__cache__DOT__cache_tag__v2 = (0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U));
    }
    if (__Vdlyvset__cache__DOT__cache_data__v0) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v0][__Vdlyvdim1__cache__DOT__cache_data__v0] 
            = __Vdlyvval__cache__DOT__cache_data__v0;
        vlSelf->cache__DOT__cache_tag[__Vdlyvdim0__cache__DOT__cache_tag__v0][__Vdlyvdim1__cache__DOT__cache_tag__v0] 
            = __Vdlyvval__cache__DOT__cache_tag__v0;
        vlSelf->cache__DOT__valid[__Vdlyvdim0__cache__DOT__valid__v0][__Vdlyvdim1__cache__DOT__valid__v0] = 1U;
    }
    if (__Vdlyvset__cache__DOT__cache_data__v1) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v1][__Vdlyvdim1__cache__DOT__cache_data__v1] 
            = __Vdlyvval__cache__DOT__cache_data__v1;
        vlSelf->cache__DOT__cache_tag[__Vdlyvdim0__cache__DOT__cache_tag__v1][__Vdlyvdim1__cache__DOT__cache_tag__v1] 
            = __Vdlyvval__cache__DOT__cache_tag__v1;
        vlSelf->cache__DOT__valid[__Vdlyvdim0__cache__DOT__valid__v1][__Vdlyvdim1__cache__DOT__valid__v1] = 1U;
    }
    if (__Vdlyvset__cache__DOT__cache_data__v2) {
        vlSelf->cache__DOT__cache_data[__Vdlyvdim0__cache__DOT__cache_data__v2][__Vdlyvdim1__cache__DOT__cache_data__v2] 
            = __Vdlyvval__cache__DOT__cache_data__v2;
        vlSelf->cache__DOT__cache_tag[__Vdlyvdim0__cache__DOT__cache_tag__v2][__Vdlyvdim1__cache__DOT__cache_tag__v2] 
            = __Vdlyvval__cache__DOT__cache_tag__v2;
    }
    vlSelf->valid_o = vlSelf->cache__DOT__valid[0U]
        [0U];
}

VL_INLINE_OPT void Vcache___024root___sequent__TOP__1(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v0;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v0;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v1;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v1;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v1;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v2;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v2;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v2;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v3;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v3;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v3;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v4;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v4;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v5;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v5;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v5;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v6;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v6;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v6;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v7;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v7;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v7;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v8;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v8;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v9;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v9;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v9;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v10;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v10;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v10;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v11;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v11;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v11;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v12;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v12;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v13;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v13;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v13;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v14;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v14;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v14;
    CData/*3:0*/ __Vdlyvdim0__cache__DOT__age__v15;
    CData/*1:0*/ __Vdlyvval__cache__DOT__age__v15;
    CData/*0:0*/ __Vdlyvset__cache__DOT__age__v15;
    // Body
    vlSelf->cache__DOT__unnamedblk3__DOT__i = 4U;
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
            if ((((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                  [(0xfU & (vlSelf->address_i >> 2U))]
                  [2U]) & vlSelf->cache__DOT__valid
                 [(0xfU & (vlSelf->address_i >> 2U))]
                 [2U])) {
                vlSelf->cache__DOT__unnamedblk6__DOT__i = 4U;
            }
            if ((1U & (~ (((vlSelf->address_i >> 6U) 
                           == vlSelf->cache__DOT__cache_tag
                           [(0xfU & (vlSelf->address_i 
                                     >> 2U))][2U]) 
                          & vlSelf->cache__DOT__valid
                          [(0xfU & (vlSelf->address_i 
                                    >> 2U))][2U])))) {
                if ((((vlSelf->address_i >> 6U) == 
                      vlSelf->cache__DOT__cache_tag
                      [(0xfU & (vlSelf->address_i >> 2U))]
                      [3U]) & vlSelf->cache__DOT__valid
                     [(0xfU & (vlSelf->address_i >> 2U))]
                     [3U])) {
                    vlSelf->cache__DOT__unnamedblk7__DOT__i = 4U;
                }
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
        if ((((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
              [(0xfU & (vlSelf->address_i >> 2U))][1U]) 
             & vlSelf->cache__DOT__valid[(0xfU & (vlSelf->address_i 
                                                  >> 2U))]
             [1U])) {
            vlSelf->cache__DOT__unnamedblk5__DOT__i = 4U;
        }
    }
    __Vdlyvset__cache__DOT__age__v0 = 0U;
    __Vdlyvset__cache__DOT__age__v1 = 0U;
    __Vdlyvset__cache__DOT__age__v2 = 0U;
    __Vdlyvset__cache__DOT__age__v3 = 0U;
    __Vdlyvset__cache__DOT__age__v4 = 0U;
    __Vdlyvset__cache__DOT__age__v5 = 0U;
    __Vdlyvset__cache__DOT__age__v6 = 0U;
    __Vdlyvset__cache__DOT__age__v7 = 0U;
    __Vdlyvset__cache__DOT__age__v8 = 0U;
    __Vdlyvset__cache__DOT__age__v9 = 0U;
    __Vdlyvset__cache__DOT__age__v10 = 0U;
    __Vdlyvset__cache__DOT__age__v11 = 0U;
    __Vdlyvset__cache__DOT__age__v12 = 0U;
    __Vdlyvset__cache__DOT__age__v13 = 0U;
    __Vdlyvset__cache__DOT__age__v14 = 0U;
    __Vdlyvset__cache__DOT__age__v15 = 0U;
    if ((((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
          [(0xfU & (vlSelf->address_i >> 2U))][0U]) 
         & vlSelf->cache__DOT__valid[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
         [0U])) {
        vlSelf->cache__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][0U];
        __Vdlyvset__cache__DOT__age__v0 = 1U;
        __Vdlyvdim0__cache__DOT__age__v0 = (0xfU & 
                                            (vlSelf->address_i 
                                             >> 2U));
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [1U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [0U])) {
            __Vdlyvval__cache__DOT__age__v1 = (3U & 
                                               (vlSelf->cache__DOT__age
                                                [(0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U))]
                                                [1U] 
                                                - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v1 = 1U;
            __Vdlyvdim0__cache__DOT__age__v1 = (0xfU 
                                                & (vlSelf->address_i 
                                                   >> 2U));
        }
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [2U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [0U])) {
            __Vdlyvval__cache__DOT__age__v2 = (3U & 
                                               (vlSelf->cache__DOT__age
                                                [(0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U))]
                                                [2U] 
                                                - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v2 = 1U;
            __Vdlyvdim0__cache__DOT__age__v2 = (0xfU 
                                                & (vlSelf->address_i 
                                                   >> 2U));
        }
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [3U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [0U])) {
            __Vdlyvval__cache__DOT__age__v3 = (3U & 
                                               (vlSelf->cache__DOT__age
                                                [(0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U))]
                                                [3U] 
                                                - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v3 = 1U;
            __Vdlyvdim0__cache__DOT__age__v3 = (0xfU 
                                                & (vlSelf->address_i 
                                                   >> 2U));
        }
    } else if ((((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                 [(0xfU & (vlSelf->address_i >> 2U))]
                 [1U]) & vlSelf->cache__DOT__valid[
                (0xfU & (vlSelf->address_i >> 2U))]
                [1U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][1U];
        __Vdlyvset__cache__DOT__age__v4 = 1U;
        __Vdlyvdim0__cache__DOT__age__v4 = (0xfU & 
                                            (vlSelf->address_i 
                                             >> 2U));
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [0U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [1U])) {
            __Vdlyvval__cache__DOT__age__v5 = (3U & 
                                               (vlSelf->cache__DOT__age
                                                [(0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U))]
                                                [0U] 
                                                - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v5 = 1U;
            __Vdlyvdim0__cache__DOT__age__v5 = (0xfU 
                                                & (vlSelf->address_i 
                                                   >> 2U));
        }
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [2U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [1U])) {
            __Vdlyvval__cache__DOT__age__v6 = (3U & 
                                               (vlSelf->cache__DOT__age
                                                [(0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U))]
                                                [2U] 
                                                - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v6 = 1U;
            __Vdlyvdim0__cache__DOT__age__v6 = (0xfU 
                                                & (vlSelf->address_i 
                                                   >> 2U));
        }
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [3U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [1U])) {
            __Vdlyvval__cache__DOT__age__v7 = (3U & 
                                               (vlSelf->cache__DOT__age
                                                [(0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U))]
                                                [3U] 
                                                - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v7 = 1U;
            __Vdlyvdim0__cache__DOT__age__v7 = (0xfU 
                                                & (vlSelf->address_i 
                                                   >> 2U));
        }
    } else if ((((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                 [(0xfU & (vlSelf->address_i >> 2U))]
                 [2U]) & vlSelf->cache__DOT__valid[
                (0xfU & (vlSelf->address_i >> 2U))]
                [2U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][2U];
        __Vdlyvset__cache__DOT__age__v8 = 1U;
        __Vdlyvdim0__cache__DOT__age__v8 = (0xfU & 
                                            (vlSelf->address_i 
                                             >> 2U));
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [0U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [2U])) {
            __Vdlyvval__cache__DOT__age__v9 = (3U & 
                                               (vlSelf->cache__DOT__age
                                                [(0xfU 
                                                  & (vlSelf->address_i 
                                                     >> 2U))]
                                                [0U] 
                                                - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v9 = 1U;
            __Vdlyvdim0__cache__DOT__age__v9 = (0xfU 
                                                & (vlSelf->address_i 
                                                   >> 2U));
        }
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [1U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [2U])) {
            __Vdlyvval__cache__DOT__age__v10 = (3U 
                                                & (vlSelf->cache__DOT__age
                                                   [
                                                   (0xfU 
                                                    & (vlSelf->address_i 
                                                       >> 2U))]
                                                   [1U] 
                                                   - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v10 = 1U;
            __Vdlyvdim0__cache__DOT__age__v10 = (0xfU 
                                                 & (vlSelf->address_i 
                                                    >> 2U));
        }
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [3U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [2U])) {
            __Vdlyvval__cache__DOT__age__v11 = (3U 
                                                & (vlSelf->cache__DOT__age
                                                   [
                                                   (0xfU 
                                                    & (vlSelf->address_i 
                                                       >> 2U))]
                                                   [3U] 
                                                   - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v11 = 1U;
            __Vdlyvdim0__cache__DOT__age__v11 = (0xfU 
                                                 & (vlSelf->address_i 
                                                    >> 2U));
        }
    } else if ((((vlSelf->address_i >> 6U) == vlSelf->cache__DOT__cache_tag
                 [(0xfU & (vlSelf->address_i >> 2U))]
                 [3U]) & vlSelf->cache__DOT__valid[
                (0xfU & (vlSelf->address_i >> 2U))]
                [3U])) {
        vlSelf->read_data_o = vlSelf->cache__DOT__cache_data
            [(0xfU & (vlSelf->address_i >> 2U))][3U];
        __Vdlyvset__cache__DOT__age__v12 = 1U;
        __Vdlyvdim0__cache__DOT__age__v12 = (0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U));
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [0U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [3U])) {
            __Vdlyvval__cache__DOT__age__v13 = (3U 
                                                & (vlSelf->cache__DOT__age
                                                   [
                                                   (0xfU 
                                                    & (vlSelf->address_i 
                                                       >> 2U))]
                                                   [0U] 
                                                   - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v13 = 1U;
            __Vdlyvdim0__cache__DOT__age__v13 = (0xfU 
                                                 & (vlSelf->address_i 
                                                    >> 2U));
        }
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [1U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [3U])) {
            __Vdlyvval__cache__DOT__age__v14 = (3U 
                                                & (vlSelf->cache__DOT__age
                                                   [
                                                   (0xfU 
                                                    & (vlSelf->address_i 
                                                       >> 2U))]
                                                   [1U] 
                                                   - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v14 = 1U;
            __Vdlyvdim0__cache__DOT__age__v14 = (0xfU 
                                                 & (vlSelf->address_i 
                                                    >> 2U));
        }
        if ((vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                              >> 2U))]
             [2U] > vlSelf->cache__DOT__age[(0xfU & 
                                             (vlSelf->address_i 
                                              >> 2U))]
             [3U])) {
            __Vdlyvval__cache__DOT__age__v15 = (3U 
                                                & (vlSelf->cache__DOT__age
                                                   [
                                                   (0xfU 
                                                    & (vlSelf->address_i 
                                                       >> 2U))]
                                                   [2U] 
                                                   - (IData)(1U)));
            __Vdlyvset__cache__DOT__age__v15 = 1U;
            __Vdlyvdim0__cache__DOT__age__v15 = (0xfU 
                                                 & (vlSelf->address_i 
                                                    >> 2U));
        }
    } else {
        vlSelf->read_data_o = vlSelf->mem_incoming_data_i;
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
    if ((0U == vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                                >> 2U))]
         [0U])) {
        vlSelf->cache__DOT__LRU_pointer = 0U;
    }
    if ((0U == vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                                >> 2U))]
         [1U])) {
        vlSelf->cache__DOT__LRU_pointer = 1U;
    }
    if ((0U == vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                                >> 2U))]
         [2U])) {
        vlSelf->cache__DOT__LRU_pointer = 2U;
    }
    if ((0U == vlSelf->cache__DOT__age[(0xfU & (vlSelf->address_i 
                                                >> 2U))]
         [3U])) {
        vlSelf->cache__DOT__LRU_pointer = 3U;
    }
    if (__Vdlyvset__cache__DOT__age__v0) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v0][0U] = 3U;
    }
    if (__Vdlyvset__cache__DOT__age__v1) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v1][1U] 
            = __Vdlyvval__cache__DOT__age__v1;
    }
    if (__Vdlyvset__cache__DOT__age__v2) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v2][2U] 
            = __Vdlyvval__cache__DOT__age__v2;
    }
    if (__Vdlyvset__cache__DOT__age__v3) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v3][3U] 
            = __Vdlyvval__cache__DOT__age__v3;
    }
    if (__Vdlyvset__cache__DOT__age__v4) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v4][1U] = 3U;
    }
    if (__Vdlyvset__cache__DOT__age__v5) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v5][0U] 
            = __Vdlyvval__cache__DOT__age__v5;
    }
    if (__Vdlyvset__cache__DOT__age__v6) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v6][2U] 
            = __Vdlyvval__cache__DOT__age__v6;
    }
    if (__Vdlyvset__cache__DOT__age__v7) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v7][3U] 
            = __Vdlyvval__cache__DOT__age__v7;
    }
    if (__Vdlyvset__cache__DOT__age__v8) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v8][2U] = 3U;
    }
    if (__Vdlyvset__cache__DOT__age__v9) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v9][0U] 
            = __Vdlyvval__cache__DOT__age__v9;
    }
    if (__Vdlyvset__cache__DOT__age__v10) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v10][1U] 
            = __Vdlyvval__cache__DOT__age__v10;
    }
    if (__Vdlyvset__cache__DOT__age__v11) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v11][3U] 
            = __Vdlyvval__cache__DOT__age__v11;
    }
    if (__Vdlyvset__cache__DOT__age__v12) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v12][3U] = 3U;
    }
    if (__Vdlyvset__cache__DOT__age__v13) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v13][0U] 
            = __Vdlyvval__cache__DOT__age__v13;
    }
    if (__Vdlyvset__cache__DOT__age__v14) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v14][1U] 
            = __Vdlyvval__cache__DOT__age__v14;
    }
    if (__Vdlyvset__cache__DOT__age__v15) {
        vlSelf->cache__DOT__age[__Vdlyvdim0__cache__DOT__age__v15][2U] 
            = __Vdlyvval__cache__DOT__age__v15;
    }
    vlSelf->hit_o = vlSelf->cache__DOT__hit;
    vlSelf->age_0 = vlSelf->cache__DOT__age[0U][0U];
}

void Vcache___024root___eval(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval\n"); );
    // Body
    Vcache___024root___combo__TOP__0(vlSelf);
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vcache___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vcache___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
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
