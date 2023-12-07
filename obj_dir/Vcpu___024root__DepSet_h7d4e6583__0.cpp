// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024root.h"

void Vcpu___024root___eval_act(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v0;
    __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 = 0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
    __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
    __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 = 0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2;
    __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2 = 0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2;
    __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2 = 0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3;
    __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3;
    __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3 = 0;
    // Body
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 0U;
    if (VL_UNLIKELY(vlSelf->cpu__DOT__mem_write)) {
        VL_WRITEF("dataram[starting%x] is %x\nexpecting wd_i %x:\n",
                  32,vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr,
                  32,((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                       [(0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                       << 0x18U) | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                     [(0x1ffffU & ((IData)(2U) 
                                                   + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                     << 0x10U) | ((
                                                   vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                   << 8U) 
                                                  | vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                  [
                                                  (0x1ffffU 
                                                   & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)]))),
                  32,vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
        __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 
            = (vlSelf->cpu__DOT__datapath__DOT__reg_rd2 
               >> 0x18U);
        __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 
            = (0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr);
        if ((1U & (~ (IData)(vlSelf->cpu__DOT__byte_address)))) {
            __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 
                = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
            __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 = 1U;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 
                = (0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr));
            __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2 
                = (0xffU & (vlSelf->cpu__DOT__datapath__DOT__reg_rd2 
                            >> 8U));
            __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr));
            __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3 
                = (0xffU & (vlSelf->cpu__DOT__datapath__DOT__reg_rd2 
                            >> 0x10U));
            __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3 
                = (0x1ffffU & ((IData)(1U) + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr));
        }
    }
    __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v0 
        = vlSelf->trigger_i;
    if (((IData)(vlSelf->cpu__DOT__reg_write) & (0U 
                                                 != 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->__VdfgTmp_hee5fc8f3__0) 
                                                     >> 7U))))) {
        __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 
            = ((2U & (IData)(vlSelf->cpu__DOT__result_src))
                ? ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                    ? vlSelf->cpu__DOT__imm_ext : ((IData)(4U) 
                                                   + vlSelf->cpu__DOT__program_counter__DOT__pc_next))
                : ((1U & (IData)(vlSelf->cpu__DOT__result_src))
                    ? ((IData)(vlSelf->cpu__DOT__byte_address)
                        ? ((IData)(vlSelf->cpu__DOT__byte_address)
                            ? vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                           [(0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)]
                            : 0U) : ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                      [(0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)] 
                                      << 0x18U) | (
                                                   (vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                    [
                                                    (0x1ffffU 
                                                     & ((IData)(1U) 
                                                        + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                    << 0x10U) 
                                                   | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                       [
                                                       (0x1ffffU 
                                                        & ((IData)(2U) 
                                                           + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                       << 8U) 
                                                      | vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                      [
                                                      (0x1ffffU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))]))))
                    : vlSelf->cpu__DOT__alu_out));
        __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 1U;
        __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 
            = (0x1fU & ((IData)(vlSelf->__VdfgTmp_hee5fc8f3__0) 
                        >> 7U));
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    }
    if (__Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
        vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2;
        vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram[__Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3;
    }
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x1cU] 
        = __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v0;
    if (__Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[__Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1] 
            = __Vdlyvval__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1;
    }
    vlSelf->a0_o = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [0xaU];
}

extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h524972ea_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_ha62fcc6c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h356a26d2_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_hae527aed_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_he9de6950_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h5a39c6bc_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_h9e07eb29_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h78f2d6f9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h77a192f1_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vcpu__ConstPool__TABLE_hba1a01eb_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcpu__ConstPool__TABLE_h937a1e03_0;

VL_INLINE_OPT void Vcpu___024root___nba_sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_h0f7a8abf__0;
    __VdfgTmp_h0f7a8abf__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__cpu__DOT__program_counter__DOT__pc_next;
    __Vdly__cpu__DOT__program_counter__DOT__pc_next = 0;
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
    __VdfgTmp_h0f7a8abf__0 = vlSelf->cpu__DOT__instruction_memory__DOT__rom
        [(0xfffU & ((IData)(1U) + (0xffcU & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))];
    vlSelf->__VdfgTmp_hc6c9cc1a__0 = vlSelf->cpu__DOT__instruction_memory__DOT__rom
        [(0xffcU & vlSelf->cpu__DOT__program_counter__DOT__pc_next)];
    vlSelf->__VdfgTmp_h0cdf22a8__0 = vlSelf->cpu__DOT__instruction_memory__DOT__rom
        [(0xfffU & ((IData)(2U) + (0xffcU & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))];
    vlSelf->__VdfgTmp_h0f734668__0 = vlSelf->cpu__DOT__instruction_memory__DOT__rom
        [(0xfffU & ((IData)(3U) + (0xffcU & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))];
    vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
        = (((IData)(vlSelf->__VdfgTmp_hc6c9cc1a__0) 
            << 0x11U) | (((IData)(__VdfgTmp_h0f7a8abf__0) 
                          << 9U) | (((IData)(vlSelf->__VdfgTmp_h0cdf22a8__0) 
                                     << 1U) | (1U & 
                                               ((IData)(vlSelf->__VdfgTmp_h0f734668__0) 
                                                >> 7U)))));
    vlSelf->__VdfgTmp_hee5fc8f3__0 = (((IData)(vlSelf->__VdfgTmp_h0cdf22a8__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_h0f734668__0));
    __Vtableidx1 = (0x7fU & (IData)(vlSelf->__VdfgTmp_h0f734668__0));
    vlSelf->cpu__DOT__reg_write = Vcpu__ConstPool__TABLE_h524972ea_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__imm_src = Vcpu__ConstPool__TABLE_ha62fcc6c_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__alu_src = Vcpu__ConstPool__TABLE_h356a26d2_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__mem_write = Vcpu__ConstPool__TABLE_hae527aed_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__result_src = Vcpu__ConstPool__TABLE_he9de6950_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__controlUnit_top__DOT__branch 
        = Vcpu__ConstPool__TABLE_h5a39c6bc_0[__Vtableidx1];
    vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op 
        = Vcpu__ConstPool__TABLE_h9e07eb29_0[__Vtableidx1];
    vlSelf->cpu__DOT__controlUnit_top__DOT__jmp = Vcpu__ConstPool__TABLE_h78f2d6f9_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__JALR_instr = Vcpu__ConstPool__TABLE_h77a192f1_0
        [__Vtableidx1];
    vlSelf->__VdfgTmp_h2e56604c__0 = (((IData)(__VdfgTmp_h0f7a8abf__0) 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_hee5fc8f3__0));
    vlSelf->cpu__DOT__imm_ext = ((4U & (IData)(vlSelf->cpu__DOT__imm_src))
                                  ? ((2U & (IData)(vlSelf->cpu__DOT__imm_src))
                                      ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__imm_src))
                                               ? 0U
                                               : (0xfffff000U 
                                                  & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                     << 7U))))
                                  : ((2U & (IData)(vlSelf->cpu__DOT__imm_src))
                                      ? ((1U & (IData)(vlSelf->cpu__DOT__imm_src))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                             >> 0x18U)))) 
                                              << 0x14U) 
                                             | ((0xff000U 
                                                 & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                    << 7U)) 
                                                | ((0x800U 
                                                    & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                       >> 2U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                         >> 0xdU)))))
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                             >> 0x18U)))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                    << 0xbU)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                       >> 0xdU)) 
                                                   | (0x1eU 
                                                      & vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i)))))
                                      : ((1U & (IData)(vlSelf->cpu__DOT__imm_src))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                             >> 0x18U)))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                    >> 0xdU)) 
                                                | (0x1fU 
                                                   & vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i)))
                                          : (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                             >> 0x18U)))) 
                                              << 0xcU) 
                                             | (0xfffU 
                                                & (vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i 
                                                   >> 0xdU))))));
    __Vtableidx2 = ((0x20U & (((IData)(vlSelf->__VdfgTmp_hc6c9cc1a__0) 
                               >> 1U) & (IData)(vlSelf->__VdfgTmp_h0f734668__0))) 
                    | ((0x1cU & ((IData)(vlSelf->__VdfgTmp_h0cdf22a8__0) 
                                 >> 2U)) | (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op)));
    vlSelf->cpu__DOT__alu_control = Vcpu__ConstPool__TABLE_hba1a01eb_0
        [__Vtableidx2];
    vlSelf->cpu__DOT__byte_address = Vcpu__ConstPool__TABLE_h937a1e03_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vcpu___024root___nba_comb__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->cpu__DOT__datapath__DOT__reg_rd1 = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [(0x1fU & (vlSelf->__VdfgTmp_h2e56604c__0 >> 0xfU))];
    vlSelf->cpu__DOT__datapath__DOT__reg_rd2 = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [((0x10U & ((IData)(vlSelf->__VdfgTmp_hc6c9cc1a__0) 
                    << 4U)) | (0xfU & (vlSelf->__VdfgTmp_h2e56604c__0 
                                       >> 0x14U)))];
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
    vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr 
        = ((IData)(vlSelf->cpu__DOT__byte_address) ? vlSelf->cpu__DOT__alu_out
            : (0xfffffffcU & vlSelf->cpu__DOT__alu_out));
}

void Vcpu___024root___eval_nba(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcpu___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vcpu___024root___eval_triggers__act(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcpu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("cpu.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vcpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("cpu.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcpu___024root___eval_nba(vlSelf);
        }
    }
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
