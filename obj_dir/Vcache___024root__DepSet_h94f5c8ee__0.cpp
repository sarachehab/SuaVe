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
    CData/*1:0*/ __Vdly__cache__DOT__line__DOT__counter;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v0;
    IData/*31:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v0;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v0;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_tag__v0;
    IData/*29:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_tag__v0;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__valid__v0;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v1;
    CData/*4:0*/ __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v1;
    CData/*7:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v1;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v1;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v2;
    CData/*4:0*/ __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v2;
    CData/*7:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v2;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v2;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v3;
    CData/*4:0*/ __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v3;
    CData/*7:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v3;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v3;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v4;
    CData/*4:0*/ __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v4;
    CData/*7:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v4;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v4;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v5;
    IData/*31:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v5;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v5;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__valid__v1;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__valid__v1;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v6;
    CData/*4:0*/ __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v6;
    CData/*7:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v6;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v6;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v7;
    CData/*4:0*/ __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v7;
    CData/*7:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v7;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v7;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v8;
    CData/*4:0*/ __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v8;
    CData/*7:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v8;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v8;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v9;
    CData/*4:0*/ __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v9;
    CData/*7:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v9;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v9;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v10;
    IData/*31:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_data__v10;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_data__v10;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__cache_tag__v1;
    IData/*29:0*/ __Vdlyvval__cache__DOT__line__DOT__cache_tag__v1;
    CData/*0:0*/ __Vdlyvset__cache__DOT__line__DOT__cache_tag__v1;
    CData/*1:0*/ __Vdlyvdim0__cache__DOT__line__DOT__valid__v2;
    IData/*16:0*/ __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v0;
    CData/*7:0*/ __Vdlyvval__cache__DOT__memory__DOT__data_ram__v0;
    CData/*0:0*/ __Vdlyvset__cache__DOT__memory__DOT__data_ram__v0;
    IData/*16:0*/ __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v1;
    CData/*7:0*/ __Vdlyvval__cache__DOT__memory__DOT__data_ram__v1;
    CData/*0:0*/ __Vdlyvset__cache__DOT__memory__DOT__data_ram__v1;
    IData/*16:0*/ __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v2;
    CData/*7:0*/ __Vdlyvval__cache__DOT__memory__DOT__data_ram__v2;
    IData/*16:0*/ __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v3;
    CData/*7:0*/ __Vdlyvval__cache__DOT__memory__DOT__data_ram__v3;
    IData/*16:0*/ __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v4;
    CData/*7:0*/ __Vdlyvval__cache__DOT__memory__DOT__data_ram__v4;
    // Body
    __Vdlyvset__cache__DOT__memory__DOT__data_ram__v0 = 0U;
    __Vdlyvset__cache__DOT__memory__DOT__data_ram__v1 = 0U;
    __Vdly__cache__DOT__line__DOT__counter = vlSelf->cache__DOT__line__DOT__counter;
    __Vdlyvset__cache__DOT__line__DOT__valid__v1 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_tag__v1 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v1 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v2 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v3 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v4 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v5 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v6 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v7 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v8 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v9 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v10 = 0U;
    __Vdlyvset__cache__DOT__line__DOT__cache_data__v0 = 0U;
    if (vlSelf->write_enable_i) {
        if (vlSelf->cache__DOT__mem_byte_op) {
            __Vdlyvval__cache__DOT__memory__DOT__data_ram__v0 
                = (0xffU & vlSelf->cache__DOT__mem_write_data);
            __Vdlyvset__cache__DOT__memory__DOT__data_ram__v0 = 1U;
            __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v0 
                = (0x1ffffU & vlSelf->cache__DOT__memory__DOT__addr);
        } else if ((1U & (~ (IData)(vlSelf->cache__DOT__mem_byte_op)))) {
            __Vdlyvval__cache__DOT__memory__DOT__data_ram__v1 
                = (0xffU & vlSelf->cache__DOT__mem_write_data);
            __Vdlyvset__cache__DOT__memory__DOT__data_ram__v1 = 1U;
            __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v1 
                = (0x1ffffU & vlSelf->cache__DOT__memory__DOT__addr);
            __Vdlyvval__cache__DOT__memory__DOT__data_ram__v2 
                = (0xffU & (vlSelf->cache__DOT__mem_write_data 
                            >> 8U));
            __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v2 
                = (0x1ffffU & ((IData)(1U) + vlSelf->cache__DOT__memory__DOT__addr));
            __Vdlyvval__cache__DOT__memory__DOT__data_ram__v3 
                = (0xffU & (vlSelf->cache__DOT__mem_write_data 
                            >> 0x10U));
            __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v3 
                = (0x1ffffU & ((IData)(2U) + vlSelf->cache__DOT__memory__DOT__addr));
            __Vdlyvval__cache__DOT__memory__DOT__data_ram__v4 
                = (vlSelf->cache__DOT__mem_write_data 
                   >> 0x18U);
            __Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v4 
                = (0x1ffffU & ((IData)(3U) + vlSelf->cache__DOT__memory__DOT__addr));
        }
    }
    if (vlSelf->cache_enable_i) {
        if ((1U & ((IData)(vlSelf->write_enable_i) 
                   | (~ (IData)(vlSelf->cache__DOT__line__DOT__hit))))) {
            __Vdly__cache__DOT__line__DOT__counter 
                = (3U & ((IData)(1U) + (IData)(vlSelf->cache__DOT__line__DOT__counter)));
        }
        if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->write_enable_i)) 
                               & (~ (IData)(vlSelf->cache__DOT__line__DOT__hit)))))) {
            VL_WRITEF("neil\n");
            __Vdlyvval__cache__DOT__line__DOT__cache_data__v0 
                = vlSelf->cache__DOT__mem_incoming_data;
            __Vdlyvset__cache__DOT__line__DOT__cache_data__v0 = 1U;
            __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v0 
                = vlSelf->cache__DOT__line__DOT__counter;
            __Vdlyvval__cache__DOT__line__DOT__cache_tag__v0 
                = (vlSelf->address_i >> 2U);
            __Vdlyvdim0__cache__DOT__line__DOT__cache_tag__v0 
                = vlSelf->cache__DOT__line__DOT__counter;
            __Vdlyvdim0__cache__DOT__line__DOT__valid__v0 
                = vlSelf->cache__DOT__line__DOT__counter;
        } else if (((IData)(vlSelf->write_enable_i) 
                    & (IData)(vlSelf->cache__DOT__line__DOT__hit))) {
            if (vlSelf->byte_op_i) {
                if ((2U & vlSelf->address_i)) {
                    if ((1U & vlSelf->address_i)) {
                        __Vdlyvval__cache__DOT__line__DOT__cache_data__v1 
                            = (0xffU & vlSelf->write_data_i);
                        __Vdlyvset__cache__DOT__line__DOT__cache_data__v1 = 1U;
                        __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v1 = 0x18U;
                        __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v1 
                            = vlSelf->cache__DOT__line__DOT__wayhit;
                    } else {
                        __Vdlyvval__cache__DOT__line__DOT__cache_data__v2 
                            = (0xffU & vlSelf->write_data_i);
                        __Vdlyvset__cache__DOT__line__DOT__cache_data__v2 = 1U;
                        __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v2 = 0x10U;
                        __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v2 
                            = vlSelf->cache__DOT__line__DOT__wayhit;
                    }
                } else if ((1U & vlSelf->address_i)) {
                    __Vdlyvval__cache__DOT__line__DOT__cache_data__v3 
                        = (0xffU & vlSelf->write_data_i);
                    __Vdlyvset__cache__DOT__line__DOT__cache_data__v3 = 1U;
                    __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v3 = 8U;
                    __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v3 
                        = vlSelf->cache__DOT__line__DOT__wayhit;
                } else {
                    __Vdlyvval__cache__DOT__line__DOT__cache_data__v4 
                        = (0xffU & vlSelf->write_data_i);
                    __Vdlyvset__cache__DOT__line__DOT__cache_data__v4 = 1U;
                    __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v4 = 0U;
                    __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v4 
                        = vlSelf->cache__DOT__line__DOT__wayhit;
                }
            } else {
                __Vdlyvval__cache__DOT__line__DOT__cache_data__v5 
                    = vlSelf->write_data_i;
                __Vdlyvset__cache__DOT__line__DOT__cache_data__v5 = 1U;
                __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v5 
                    = vlSelf->cache__DOT__line__DOT__wayhit;
            }
            __Vdlyvset__cache__DOT__line__DOT__valid__v1 = 1U;
            __Vdlyvdim0__cache__DOT__line__DOT__valid__v1 
                = vlSelf->cache__DOT__line__DOT__wayhit;
        } else if (((IData)(vlSelf->write_enable_i) 
                    & (~ (IData)(vlSelf->cache__DOT__line__DOT__hit)))) {
            if (VL_LIKELY(vlSelf->byte_op_i)) {
                if ((2U & vlSelf->address_i)) {
                    if ((1U & vlSelf->address_i)) {
                        __Vdlyvval__cache__DOT__line__DOT__cache_data__v6 
                            = (0xffU & vlSelf->write_data_i);
                        __Vdlyvset__cache__DOT__line__DOT__cache_data__v6 = 1U;
                        __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v6 = 0x18U;
                        __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v6 
                            = vlSelf->cache__DOT__line__DOT__counter;
                    } else {
                        __Vdlyvval__cache__DOT__line__DOT__cache_data__v7 
                            = (0xffU & vlSelf->write_data_i);
                        __Vdlyvset__cache__DOT__line__DOT__cache_data__v7 = 1U;
                        __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v7 = 0x10U;
                        __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v7 
                            = vlSelf->cache__DOT__line__DOT__counter;
                    }
                } else if ((1U & vlSelf->address_i)) {
                    __Vdlyvval__cache__DOT__line__DOT__cache_data__v8 
                        = (0xffU & vlSelf->write_data_i);
                    __Vdlyvset__cache__DOT__line__DOT__cache_data__v8 = 1U;
                    __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v8 = 8U;
                    __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v8 
                        = vlSelf->cache__DOT__line__DOT__counter;
                } else {
                    __Vdlyvval__cache__DOT__line__DOT__cache_data__v9 
                        = (0xffU & vlSelf->write_data_i);
                    __Vdlyvset__cache__DOT__line__DOT__cache_data__v9 = 1U;
                    __Vdlyvlsb__cache__DOT__line__DOT__cache_data__v9 = 0U;
                    __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v9 
                        = vlSelf->cache__DOT__line__DOT__counter;
                }
            } else {
                VL_WRITEF("sara\n");
                __Vdlyvval__cache__DOT__line__DOT__cache_data__v10 
                    = vlSelf->write_data_i;
                __Vdlyvset__cache__DOT__line__DOT__cache_data__v10 = 1U;
                __Vdlyvdim0__cache__DOT__line__DOT__cache_data__v10 
                    = vlSelf->cache__DOT__line__DOT__counter;
            }
            __Vdlyvval__cache__DOT__line__DOT__cache_tag__v1 
                = (vlSelf->address_i >> 2U);
            __Vdlyvset__cache__DOT__line__DOT__cache_tag__v1 = 1U;
            __Vdlyvdim0__cache__DOT__line__DOT__cache_tag__v1 
                = vlSelf->cache__DOT__line__DOT__counter;
            __Vdlyvdim0__cache__DOT__line__DOT__valid__v2 
                = vlSelf->cache__DOT__line__DOT__counter;
        }
    }
    if (__Vdlyvset__cache__DOT__memory__DOT__data_ram__v0) {
        vlSelf->cache__DOT__memory__DOT__data_ram[__Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v0] 
            = __Vdlyvval__cache__DOT__memory__DOT__data_ram__v0;
    }
    if (__Vdlyvset__cache__DOT__memory__DOT__data_ram__v1) {
        vlSelf->cache__DOT__memory__DOT__data_ram[__Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v1] 
            = __Vdlyvval__cache__DOT__memory__DOT__data_ram__v1;
        vlSelf->cache__DOT__memory__DOT__data_ram[__Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v2] 
            = __Vdlyvval__cache__DOT__memory__DOT__data_ram__v2;
        vlSelf->cache__DOT__memory__DOT__data_ram[__Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v3] 
            = __Vdlyvval__cache__DOT__memory__DOT__data_ram__v3;
        vlSelf->cache__DOT__memory__DOT__data_ram[__Vdlyvdim0__cache__DOT__memory__DOT__data_ram__v4] 
            = __Vdlyvval__cache__DOT__memory__DOT__data_ram__v4;
    }
    vlSelf->cache__DOT__line__DOT__counter = __Vdly__cache__DOT__line__DOT__counter;
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v0) {
        vlSelf->cache__DOT__line__DOT__valid[__Vdlyvdim0__cache__DOT__line__DOT__valid__v0] = 1U;
        vlSelf->cache__DOT__line__DOT__cache_tag[__Vdlyvdim0__cache__DOT__line__DOT__cache_tag__v0] 
            = __Vdlyvval__cache__DOT__line__DOT__cache_tag__v0;
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v0] 
            = __Vdlyvval__cache__DOT__line__DOT__cache_data__v0;
    }
    if (__Vdlyvset__cache__DOT__line__DOT__valid__v1) {
        vlSelf->cache__DOT__line__DOT__valid[__Vdlyvdim0__cache__DOT__line__DOT__valid__v1] = 1U;
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_tag__v1) {
        vlSelf->cache__DOT__line__DOT__valid[__Vdlyvdim0__cache__DOT__line__DOT__valid__v2] = 1U;
        vlSelf->cache__DOT__line__DOT__cache_tag[__Vdlyvdim0__cache__DOT__line__DOT__cache_tag__v1] 
            = __Vdlyvval__cache__DOT__line__DOT__cache_tag__v1;
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v1) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v1))) 
                & vlSelf->cache__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cache__DOT__line__DOT__cache_data__v1) 
                                   << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v1))));
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v2) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v2))) 
                & vlSelf->cache__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cache__DOT__line__DOT__cache_data__v2) 
                                   << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v2))));
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v3) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v3))) 
                & vlSelf->cache__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cache__DOT__line__DOT__cache_data__v3) 
                                   << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v3))));
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v4) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v4] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v4))) 
                & vlSelf->cache__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cache__DOT__line__DOT__cache_data__v4) 
                                   << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v4))));
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v5) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v5] 
            = __Vdlyvval__cache__DOT__line__DOT__cache_data__v5;
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v6) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v6] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v6))) 
                & vlSelf->cache__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cache__DOT__line__DOT__cache_data__v6) 
                                   << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v6))));
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v7) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v7] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v7))) 
                & vlSelf->cache__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v7]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cache__DOT__line__DOT__cache_data__v7) 
                                   << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v7))));
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v8) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v8] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v8))) 
                & vlSelf->cache__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v8]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cache__DOT__line__DOT__cache_data__v8) 
                                   << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v8))));
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v9) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v9] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v9))) 
                & vlSelf->cache__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v9]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cache__DOT__line__DOT__cache_data__v9) 
                                   << (IData)(__Vdlyvlsb__cache__DOT__line__DOT__cache_data__v9))));
    }
    if (__Vdlyvset__cache__DOT__line__DOT__cache_data__v10) {
        vlSelf->cache__DOT__line__DOT__cache_data[__Vdlyvdim0__cache__DOT__line__DOT__cache_data__v10] 
            = __Vdlyvval__cache__DOT__line__DOT__cache_data__v10;
    }
}

VL_INLINE_OPT void Vcache___024root___combo__TOP__0(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___combo__TOP__0\n"); );
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

void Vcache___024root___eval(Vcache___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vcache___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vcache___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    __req |= ((vlSelf->cache__DOT__mem_incoming_data ^ vlSelf->__Vchglast__TOP__cache__DOT__mem_incoming_data));
    VL_DEBUG_IF( if(__req && ((vlSelf->cache__DOT__mem_incoming_data ^ vlSelf->__Vchglast__TOP__cache__DOT__mem_incoming_data))) VL_DBG_MSGF("        CHANGE: cache.sv:8: cache.mem_incoming_data\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cache__DOT__mem_incoming_data 
        = vlSelf->cache__DOT__mem_incoming_data;
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
    if (VL_UNLIKELY((vlSelf->byte_op_i & 0xfeU))) {
        Verilated::overWidthError("byte_op_i");}
}
#endif  // VL_DEBUG
