// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu__Syms.h"
#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___eval_static(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcpu___024root___eval_initial__TOP(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
}

VL_ATTR_COLD void Vcpu___024root___eval_initial__TOP(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[1U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[2U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[3U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[4U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[5U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[6U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[7U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[8U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[9U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0xaU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0xbU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0xcU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0xdU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0xeU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0xfU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x10U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x11U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x12U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x13U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x14U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x15U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x16U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x17U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x18U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x19U] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x1aU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x1bU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x1cU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x1dU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x1eU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[0x1fU] = 0U;
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i = 0x20U;
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x7369616eU;
    __Vtemp_1[2U] = 0x67617573U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram)
                 , 0x10000U, ~0ULL);
    vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x10000U > vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i)) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram[(0x1ffffU 
                                                                              & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i);
    }
    VL_WRITEF("Loading rom.\n");
    VL_READMEM_N(true, 8, 4096, 3217031168, std::string{"pdf.hex"}
                 ,  &(vlSelf->cpu__DOT__instruction_memory__DOT__rom)
                 , 3217031168, ~0ULL);
    VL_WRITEF("Program written to ROM successfully\n");
    vlSelf->cpu__DOT__program_counter__DOT__pc_next = 0xbfc00000U;
}

VL_ATTR_COLD void Vcpu___024root___eval_final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___eval_triggers__stl(Vcpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___eval_stl(Vcpu___024root* vlSelf);

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vcpu___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vcpu___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("cpu.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vcpu___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__stl(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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

VL_ATTR_COLD void Vcpu___024root___stl_sequent__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __VdfgTmp_h0f7a8abf__0;
    __VdfgTmp_h0f7a8abf__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->a0_o = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [0xaU];
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

VL_ATTR_COLD void Vcpu___024root___eval_stl(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcpu___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__act(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu___024root___dump_triggers__nba(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->trigger_i = VL_RAND_RESET_I(1);
    vlSelf->a0_o = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__JALR_instr = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__byte_address = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__imm_ext = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__result_src = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__imm_src = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT____Vcellinp__extend_unit__instr_i = VL_RAND_RESET_I(25);
    vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__controlUnit_top__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controlUnit_top__DOT__jmp = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__datapath__DOT__reg_rd1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__datapath__DOT__reg_rd2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 131072; ++__Vi0) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->cpu__DOT__instruction_memory__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__program_counter__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->__VdfgTmp_hc6c9cc1a__0 = 0;
    vlSelf->__VdfgTmp_h2e56604c__0 = 0;
    vlSelf->__VdfgTmp_h0f734668__0 = 0;
    vlSelf->__VdfgTmp_h0cdf22a8__0 = 0;
    vlSelf->__VdfgTmp_hee5fc8f3__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
