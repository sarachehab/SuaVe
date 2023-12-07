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
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3;
    // Body
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 = 0U;
    __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 0U;
    if (vlSelf->cpu__DOT__mem_write) {
        __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 
            = (0xffU & vlSelf->cpu__DOT__datapath__DOT__reg_rd2);
        __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v0 
            = (0x1ffffU & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr);
        if ((1U & (~ (IData)(vlSelf->cpu__DOT__byte_address)))) {
            __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 
                = (0xffU & (vlSelf->cpu__DOT__datapath__DOT__reg_rd2 
                            >> 8U));
            __Vdlyvset__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 = 1U;
            __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v1 
                = (0x1ffffU & ((IData)(1U) + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr));
            __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2 
                = (0xffU & (vlSelf->cpu__DOT__datapath__DOT__reg_rd2 
                            >> 0x10U));
            __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v2 
                = (0x1ffffU & ((IData)(2U) + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr));
            __Vdlyvval__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3 
                = (vlSelf->cpu__DOT__datapath__DOT__reg_rd2 
                   >> 0x18U);
            __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram__v3 
                = (0x1ffffU & ((IData)(3U) + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr));
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
            = ((0U == (IData)(vlSelf->cpu__DOT__result_src))
                ? vlSelf->cpu__DOT__alu_out : ((1U 
                                                == (IData)(vlSelf->cpu__DOT__result_src))
                                                ? ((IData)(vlSelf->cpu__DOT__byte_address)
                                                    ? 
                                                   ((IData)(vlSelf->cpu__DOT__byte_address)
                                                     ? 
                                                    vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                    [
                                                    (0x1ffffU 
                                                     & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)]
                                                     : 0U)
                                                    : 
                                                   ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                     [
                                                     (0x1ffffU 
                                                      & ((IData)(3U) 
                                                         + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                     << 0x18U) 
                                                    | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                        [
                                                        (0x1ffffU 
                                                         & ((IData)(2U) 
                                                            + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                        << 0x10U) 
                                                       | ((vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                           [
                                                           (0x1ffffU 
                                                            & ((IData)(1U) 
                                                               + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr))] 
                                                           << 8U) 
                                                          | vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram
                                                          [
                                                          (0x1ffffU 
                                                           & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr)]))))
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->cpu__DOT__result_src))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->cpu__DOT__program_counter__DOT__pc_next)
                                                    : 0U)));
        __Vdlyvset__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 = 1U;
        __Vdlyvdim0__cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf__v1 
            = (0x1fU & (vlSelf->cpu__DOT__instr >> 7U));
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

extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_ha986a0c0_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_ha5941d2e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h529afe2e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h29afd16c_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_ha1b5330d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h974edfa5_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_h25645c8f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_hf32ca493_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h105add6f_0;
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
                  == vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i) 
                 & (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__branch)) 
                | (IData)(vlSelf->cpu__DOT__controlUnit_top__DOT__jmp))
                ? (vlSelf->cpu__DOT__program_counter__DOT__pc_next 
                   + vlSelf->cpu__DOT__imm_ext) : ((IData)(4U) 
                                                   + vlSelf->cpu__DOT__program_counter__DOT__pc_next));
    }
    vlSelf->cpu__DOT__program_counter__DOT__pc_next 
        = __Vdly__cpu__DOT__program_counter__DOT__pc_next;
    vlSelf->cpu__DOT__instr = ((vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                [(0xfffU & ((IData)(3U) 
                                            + (0xffcU 
                                               & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))] 
                                << 0x18U) | ((vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xffcU 
                                                    & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                                 [(0xfffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (0xffcU 
                                                       & vlSelf->cpu__DOT__program_counter__DOT__pc_next)))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__instruction_memory__DOT__rom
                                                [(0xffcU 
                                                  & vlSelf->cpu__DOT__program_counter__DOT__pc_next)])));
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
    vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr 
        = ((IData)(vlSelf->cpu__DOT__byte_address) ? vlSelf->cpu__DOT__alu_out
            : (0xfffffffcU & vlSelf->cpu__DOT__alu_out));
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
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
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
