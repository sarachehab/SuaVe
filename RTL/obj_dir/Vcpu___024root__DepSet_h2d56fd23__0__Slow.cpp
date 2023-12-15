// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___initial__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_heb07c71f__0;
    VlWide<4>/*127:0*/ __Vtemp_h22c8b573__0;
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
    VL_WRITEF("Loading rom.\n");
    __Vtemp_heb07c71f__0[0U] = 0x2e686578U;
    __Vtemp_heb07c71f__0[1U] = 0x696f6e73U;
    __Vtemp_heb07c71f__0[2U] = 0x72756374U;
    __Vtemp_heb07c71f__0[3U] = 0x696e7374U;
    VL_READMEM_N(true, 8, 4096, 3217031168, VL_CVT_PACK_STR_NW(4, __Vtemp_heb07c71f__0)
                 ,  &(vlSelf->cpu__DOT__instruction_memory__DOT__rom)
                 , 3217031168, ~0ULL);
    VL_WRITEF("Program written to ROM successfully\n");
    __Vtemp_h22c8b573__0[0U] = 0x2e6d656dU;
    __Vtemp_h22c8b573__0[1U] = 0x6d6f7279U;
    __Vtemp_h22c8b573__0[2U] = 0x615f6d65U;
    __Vtemp_h22c8b573__0[3U] = 0x646174U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h22c8b573__0)
                 ,  &(vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram)
                 , 0x10000U, ~0ULL);
    vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x10000U > vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i)) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram[(0x1ffffU 
                                                                              & vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->cpu__DOT__program_counter__DOT__pc_next = 0xbfc00000U;
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

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*5:0*/ __Vtableidx2;
    // Body
    vlSelf->a0_o = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [0xaU];
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
    vlSelf->cpu__DOT__datapath__DOT__reg_rd1 = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0xfU))];
    vlSelf->cpu__DOT__datapath__DOT__reg_rd2 = vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0x14U))];
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

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

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
    vlSelf->cpu__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__imm_ext = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__result_src = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__imm_src = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__alu_control = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__controlUnit_top__DOT__alu_op = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__controlUnit_top__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__controlUnit_top__DOT__jmp = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__datapath__DOT__reg_rd1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__datapath__DOT__reg_rd2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->cpu__DOT__instruction_memory__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__program_counter__DOT__pc_next = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
