// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v0;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    CData/*1:0*/ __Vdly__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0;
    IData/*29:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v0;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9;
    CData/*4:0*/ __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1;
    IData/*29:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1;
    CData/*1:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4;
    // Body
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1 = 0U;
    __Vdly__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter 
        = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0 = 0U;
    if (vlSelf->cpu__DOT__mem_write) {
        if (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op) {
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0 
                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data);
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0 = 1U;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0 
                = (0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr);
        } else if ((1U & (~ (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op)))) {
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1 
                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data);
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1 = 1U;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1 
                = (0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr);
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2 
                = (0xffU & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data 
                            >> 8U));
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2 
                = (0x1ffffU & ((IData)(1U) + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr));
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3 
                = (0xffU & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data 
                            >> 0x10U));
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3 
                = (0x1ffffU & ((IData)(2U) + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr));
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4 
                = (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data 
                   >> 0x18U);
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4 
                = (0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr));
        }
    }
    __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v0 
        = vlSelf->trigger_i;
    if (((IData)(vlSelf->cpu__DOT__reg_write) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelf->cpu__DOT__instr 
                                                     >> 7U))))) {
        __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 
            = ((2U & (IData)(vlSelf->cpu__DOT__result_src))
                ? ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                    ? vlSelf->cpu__DOT__imm_ext : ((IData)(4U) 
                                                   + vlSelf->cpu__DOT__program_counter__DOT__pc_next))
                : ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                    ? vlSelf->cpu__DOT__datapath__DOT__data_mem_rd
                    : vlSelf->cpu__DOT__alu_out));
        __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 1U;
        __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 
            = (0x1fU & (vlSelf->cpu__DOT__instr >> 7U));
    }
    if (vlSelf->cpu__DOT__cach_enable) {
        if ((1U & ((IData)(vlSelf->cpu__DOT__mem_write) 
                   | (~ (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit))))) {
            __Vdly__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter 
                = (3U & ((IData)(1U) + (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter)));
        }
        if ((1U & ((~ (IData)(vlSelf->cpu__DOT__mem_write)) 
                   & (~ (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit))))) {
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data;
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0 = 1U;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0 
                = (vlSelf->cpu__DOT__alu_out >> 2U);
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v0 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
        } else if (((IData)(vlSelf->cpu__DOT__mem_write) 
                    & (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit))) {
            if (vlSelf->cpu__DOT__byte_address) {
                if ((2U & vlSelf->cpu__DOT__alu_out)) {
                    if ((1U & vlSelf->cpu__DOT__alu_out)) {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1 = 0x18U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1 
                            = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__wayhit;
                    } else {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2 = 0x10U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2 
                            = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__wayhit;
                    }
                } else if ((1U & vlSelf->cpu__DOT__alu_out)) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3 
                        = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3 = 1U;
                    __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3 = 8U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3 
                        = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__wayhit;
                } else {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4 
                        = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4 = 1U;
                    __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4 = 0U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4 
                        = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__wayhit;
                }
            } else {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5 
                    = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5 
                    = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__wayhit;
            }
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1 = 1U;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__wayhit;
        } else if (((IData)(vlSelf->cpu__DOT__mem_write) 
                    & (~ (IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit)))) {
            if (vlSelf->cpu__DOT__byte_address) {
                if ((2U & vlSelf->cpu__DOT__alu_out)) {
                    if ((1U & vlSelf->cpu__DOT__alu_out)) {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6 = 0x18U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6 
                            = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
                    } else {
                        __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7 
                            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                        __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7 = 1U;
                        __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7 = 0x10U;
                        __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7 
                            = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
                    }
                } else if ((1U & vlSelf->cpu__DOT__alu_out)) {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8 
                        = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8 = 1U;
                    __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8 = 8U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8 
                        = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
                } else {
                    __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9 
                        = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
                    __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9 = 1U;
                    __Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9 = 0U;
                    __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9 
                        = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
                }
            } else {
                __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10 
                    = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
                __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10 = 1U;
                __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10 
                    = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
            }
            __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1 
                = (vlSelf->cpu__DOT__alu_out >> 2U);
            __Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1 = 1U;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2 
                = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
        }
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v0;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v1;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v2;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v3;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram__v4;
    }
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x13U] 
        = __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v0;
    if (__Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[__Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    }
    vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter 
        = __Vdly__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__counter;
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v0] = 1U;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v0;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v0;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v1] = 1U;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid__v2] = 1U;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag__v1;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v1))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v2))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v3))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v4))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v5;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v6))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v7))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v8))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9))) 
                & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                [__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9) 
                                   << (IData)(__Vdlyvlsb__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v9))));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data[__Vdlyvdim0__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data__v10;
    }
    vlSelf->a0_o = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [0xaU];
}

extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_ha986a0c0_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_ha5941d2e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h529afe2e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h29afd16c_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_ha1b5330d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h974edfa5_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_h25645c8f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_hf32ca493_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h105add6f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_hd9ece95d_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vcpu__ConstPool__TABLE_h2c28dff1_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcpu__ConstPool__TABLE_hfa800c22_0;

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    IData/*31:0*/ __Vdly__cpu__DOT__program_counter__DOT__pc_next;
    // Body
    __Vdly__cpu__DOT__program_counter__DOT__pc_next 
        = vlSelf->cpu__DOT__program_counter__DOT__pc_next;
    if (vlSelf->rst_i) {
        __Vdly__cpu__DOT__program_counter__DOT__pc_next = 0xbfc00000U;
    } else if (vlSelf->cpu__DOT__JALR_instr) {
        if (vlSelf->cpu__DOT__JALR_instr) {
            __Vdly__cpu__DOT__program_counter__DOT__pc_next 
                = vlSelf->cpu__DOT__alu_out;
        }
    } else {
        __Vdly__cpu__DOT__program_counter__DOT__pc_next 
            = ((((vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                  != vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i) 
                 & (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__branch)) 
                | (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp))
                ? (vlSelf->cpu__DOT__program_counter__DOT__pc_next 
                   + vlSelf->cpu__DOT__imm_ext) : ((IData)(4U) 
                                                   + vlSelf->cpu__DOT__program_counter__DOT__pc_next));
    }
    vlSelf->cpu__DOT__program_counter__DOT__pc_next 
        = __Vdly__cpu__DOT__program_counter__DOT__pc_next;
    vlSelf->cpu__DOT__instr = ((vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                [(0xffcU & vlSelf->cpu__DOT__program_counter__DOT__pc_next)] 
                                << 0x18U) | ((vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0xffcU 
                                                    & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                                 [(0xfffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffcU 
                                                       & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                                [(0xfffU 
                                                  & ((IData)(3U) 
                                                     + 
                                                     (0xffcU 
                                                      & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))])));
    __Vtableidx1 = (0x7fU & vlSelf->cpu__DOT__instr);
    vlSelf->cpu__DOT__reg_write = Vcpu__ConstPool__TABLE_ha986a0c0_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__imm_src = Vcpu__ConstPool__TABLE_ha5941d2e_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__alu_src = Vcpu__ConstPool__TABLE_h529afe2e_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__mem_write = Vcpu__ConstPool__TABLE_h29afd16c_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__result_src = Vcpu__ConstPool__TABLE_ha1b5330d_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__controlUnit_top__DOT__branch 
        = Vcpu__ConstPool__TABLE_h974edfa5_0[__Vtableidx1];
    vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op 
        = Vcpu__ConstPool__TABLE_h25645c8f_0[__Vtableidx1];
    vlSelf->cpu__DOT__controlUnit_top__DOT__jmp = Vcpu__ConstPool__TABLE_hf32ca493_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__JALR_instr = Vcpu__ConstPool__TABLE_h105add6f_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__cach_enable = Vcpu__ConstPool__TABLE_hd9ece95d_0
        [__Vtableidx1];
    __Vtableidx2 = (((IData)((0x40000020U == (0x40000020U 
                                              & vlSelf->cpu__DOT__instr))) 
                     << 5U) | ((0x1cU & (vlSelf->cpu__DOT__instr 
                                         >> 0xaU)) 
                               | (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op)));
    vlSelf->cpu__DOT__alu_control = Vcpu__ConstPool__TABLE_h2c28dff1_0
        [__Vtableidx2];
    vlSelf->cpu__DOT__byte_address = Vcpu__ConstPool__TABLE_hfa800c22_0
        [__Vtableidx2];
    vlSelf->cpu__DOT__imm_ext = ((4U & (IData)(vlSelf->cpu__DOT__imm_src))
                                  ? ((2U & (IData)(vlSelf->cpu__DOT__imm_src))
                                      ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__imm_src))
                                               ? 0U
                                               : (0xfffff000U 
                                                  & vlSelf->cpu__DOT__instr)))
                                  : ((2U & (IData)(vlSelf->cpu__DOT__imm_src))
                                      ? ((1U & (IData)(vlSelf->cpu__DOT__imm_src))
                                          ? (((- (IData)(
                                                         (vlSelf->cpu__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & vlSelf->cpu__DOT__instr) 
                                                | ((0x800U 
                                                    & (vlSelf->cpu__DOT__instr 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->cpu__DOT__instr 
                                                         >> 0x14U)))))
                                          : (((- (IData)(
                                                         (vlSelf->cpu__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->cpu__DOT__instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->cpu__DOT__instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->cpu__DOT__instr 
                                                         >> 7U))))))
                                      : ((1U & (IData)(vlSelf->cpu__DOT__imm_src))
                                          ? (((- (IData)(
                                                         (vlSelf->cpu__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->cpu__DOT__instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->cpu__DOT__instr 
                                                      >> 7U))))
                                          : (((- (IData)(
                                                         (vlSelf->cpu__DOT__instr 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->cpu__DOT__instr 
                                                >> 0x14U)))));
}

VL_INLINE_OPT void Vcpu___024root___multiclk__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___multiclk__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__datapath__DOT__reg_rd1 = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0xfU))];
    vlSelf->cpu__DOT__datapath__DOT__reg_rd2 = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0x14U))];
    vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i 
        = ((IData)(vlSelf->cpu__DOT__alu_src) ? vlSelf->cpu__DOT__imm_ext
            : vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
    vlSelf->cpu__DOT__alu_out = ((8U & (IData)(vlSelf->cpu__DOT__alu_control))
                                  ? ((4U & (IData)(vlSelf->cpu__DOT__alu_control))
                                      ? ((2U & (IData)(vlSelf->cpu__DOT__alu_control))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control))
                                                   ? 
                                                  (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                                   : 0U))
                                      : ((2U & (IData)(vlSelf->cpu__DOT__alu_control))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                   - vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))))
                                  : ((4U & (IData)(vlSelf->cpu__DOT__alu_control))
                                      ? ((2U & (IData)(vlSelf->cpu__DOT__alu_control))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__alu_control))
                                              ? (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 & vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)
                                              : (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 | vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__alu_control))
                                              ? (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                              : (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 ^ vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)))
                                      : ((2U & (IData)(vlSelf->cpu__DOT__alu_control))
                                          ? ((1U & (IData)(vlSelf->cpu__DOT__alu_control))
                                              ? ((QData)((IData)(vlSelf->cpu__DOT__datapath__DOT__reg_rd1)) 
                                                 < (QData)((IData)(vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)))
                                              : (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 < vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                          : ((1U & (IData)(vlSelf->cpu__DOT__alu_control))
                                              ? (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i))
                                              : (vlSelf->cpu__DOT__datapath__DOT__reg_rd1 
                                                 + vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i)))));
}

VL_INLINE_OPT void Vcpu___024root___combo__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___combo__TOP__0\n"); );
    // Body
    if (vlSelf->cpu__DOT__cach_enable) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk2__DOT__i = 0U;
        {
            while (VL_GTS_III(32, 4U, vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk2__DOT__i)) {
                if ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_tag
                     [(3U & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk2__DOT__i)] 
                     == (vlSelf->cpu__DOT__alu_out 
                         >> 2U))) {
                    vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit 
                        = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__valid
                        [(3U & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk2__DOT__i)];
                    vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__wayhit 
                        = (3U & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk2__DOT__i);
                    goto __Vlabel1;
                } else {
                    vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit = 0U;
                }
                vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk2__DOT__i 
                    = ((IData)(1U) + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__unnamedblk2__DOT__i);
            }
            __Vlabel1: ;
        }
        if (vlSelf->cpu__DOT__mem_write) {
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op 
                = vlSelf->cpu__DOT__byte_address;
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_write_data 
                = vlSelf->cpu__DOT__datapath__DOT__reg_rd2;
        } else {
            vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op = 0U;
            vlSelf->cpu__DOT__datapath__DOT__data_mem_rd 
                = ((IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__hit)
                    ? ((IData)(vlSelf->cpu__DOT__byte_address)
                        ? ((2U & vlSelf->cpu__DOT__alu_out)
                            ? ((1U & vlSelf->cpu__DOT__alu_out)
                                ? (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                   >> 0x18U) : (0xffU 
                                                & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                                   >> 0x10U)))
                            : ((1U & vlSelf->cpu__DOT__alu_out)
                                ? (0xffU & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                            >> 8U))
                                : (0xffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data)))
                        : vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__cache_data
                       [vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__line__DOT__wayhit])
                    : ((IData)(vlSelf->cpu__DOT__byte_address)
                        ? ((2U & vlSelf->cpu__DOT__alu_out)
                            ? ((1U & vlSelf->cpu__DOT__alu_out)
                                ? (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                   >> 0x18U) : (0xffU 
                                                & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                                   >> 0x10U)))
                            : ((1U & vlSelf->cpu__DOT__alu_out)
                                ? (0xffU & (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
                                            >> 8U))
                                : (0xffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data)))
                        : vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data));
        }
    }
    if (vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op) {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr 
            = vlSelf->cpu__DOT__alu_out;
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
            = ((IData)(vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_byte_op)
                ? vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram
               [(0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr)]
                : 0U);
    } else {
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr 
            = (0xfffffffcU & vlSelf->cpu__DOT__alu_out);
        vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
            = ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram
                [(0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr))] 
                << 0x18U) | ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram
                              [(0x1ffffU & ((IData)(2U) 
                                            + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr))] 
                              << 0x10U) | ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram
                                            [(0x1ffffU 
                                              & ((IData)(1U) 
                                                 + vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr))] 
                                            << 8U) 
                                           | vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__data_ram
                                           [(0x1ffffU 
                                             & vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__memory__DOT__addr)])));
    }
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk_i)) & (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vcpu___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vcpu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (((IData)(vlSelf->clk_i) ^ (IData)(vlSelf->__Vclklast__TOP__clk_i))) {
        Vcpu___024root___multiclk__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vcpu___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf);

VL_INLINE_OPT QData Vcpu___024root___change_request(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request\n"); );
    // Body
    return (Vcpu___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcpu___024root___change_request_1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data ^ vlSelf->__Vchglast__TOP__cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data));
    VL_DEBUG_IF( if(__req && ((vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data ^ vlSelf->__Vchglast__TOP__cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data))) VL_DBG_MSGF("        CHANGE: datapath/cachev2.sv:8: cpu.datapath.cached_datamemory.mem_incoming_data\n"); );
    // Final
    vlSelf->__Vchglast__TOP__cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data 
        = vlSelf->cpu__DOT__datapath__DOT__cached_datamemory__DOT__mem_incoming_data;
    return __req;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
    if (VL_UNLIKELY((vlSelf->trigger_i & 0xfeU))) {
        Verilated::overWidthError("trigger_i");}
}
#endif  // VL_DEBUG
