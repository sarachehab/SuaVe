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
    VlWide<3>/*95:0*/ __Vtemp_h2553e7c1__0;
    VlWide<4>/*127:0*/ __Vtemp_h0b51801e__0;
    // Body
    __Vtemp_h2553e7c1__0[0U] = 0x2e6d656dU;
    __Vtemp_h2553e7c1__0[1U] = 0x7369616eU;
    __Vtemp_h2553e7c1__0[2U] = 0x67617573U;
    VL_READMEM_N(true, 8, 131072, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h2553e7c1__0)
                 ,  &(vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram)
                 , 0x10000U, ~0ULL);
    vlSelf->cpu__DOT__pipeline_data_memory__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x10000U > vlSelf->cpu__DOT__pipeline_data_memory__DOT__unnamedblk1__DOT__i)) {
        vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram[(0x1ffffU 
                                                               & vlSelf->cpu__DOT__pipeline_data_memory__DOT__unnamedblk1__DOT__i)] = 0U;
        vlSelf->cpu__DOT__pipeline_data_memory__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->cpu__DOT__pipeline_data_memory__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram[0x100U] = 3U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[1U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[2U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[3U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[4U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[5U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[6U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[7U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[8U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[9U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0xaU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0xbU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0xcU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0xdU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0xeU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0xfU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x10U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x11U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x12U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x13U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x14U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x15U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x16U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x17U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x18U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x19U] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x1aU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x1bU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x1cU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x1dU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x1eU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0x1fU] = 0U;
    vlSelf->cpu__DOT__pipeline_register_file__DOT__unnamedblk1__DOT__i = 0x20U;
    VL_WRITEF("Loading rom.\n");
    __Vtemp_h0b51801e__0[0U] = 0x2e686578U;
    __Vtemp_h0b51801e__0[1U] = 0x74657374U;
    __Vtemp_h0b51801e__0[2U] = 0x6970655fU;
    __Vtemp_h0b51801e__0[3U] = 0x70U;
    VL_READMEM_N(true, 8, 4096, 3217031168, VL_CVT_PACK_STR_NW(4, __Vtemp_h0b51801e__0)
                 ,  &(vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom)
                 , 3217031168, ~0ULL);
    VL_WRITEF("Program written to ROM successfully\n");
    vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next = 0xbfc00000U;
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
    vlSelf->cpu__DOT__result_w = ((2U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                   ? ((1U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                       ? vlSelf->cpu__DOT__imm_ext_w
                                       : vlSelf->cpu__DOT__pc_plus4_w)
                                   : ((1U & (IData)(vlSelf->cpu__DOT__result_src_w))
                                       ? vlSelf->cpu__DOT__read_data_w
                                       : vlSelf->cpu__DOT__alu_result_w));
    vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr 
        = ((IData)(vlSelf->cpu__DOT__byte_op_m) ? vlSelf->cpu__DOT__alu_result_m
            : (0xfffffffcU & vlSelf->cpu__DOT__alu_result_m));
    vlSelf->cpu__DOT__result_m = ((1U & (IData)(vlSelf->cpu__DOT__result_src_m))
                                   ? vlSelf->cpu__DOT__imm_ext_m
                                   : vlSelf->cpu__DOT__alu_result_m);
    vlSelf->cpu__DOT__forward1_e = (((((IData)(vlSelf->cpu__DOT__rs1_e) 
                                       == (IData)(vlSelf->cpu__DOT__rd_m)) 
                                      & (IData)(vlSelf->cpu__DOT__reg_write_m)) 
                                     & (0U != (IData)(vlSelf->cpu__DOT__rs1_e)))
                                     ? 1U : (((((IData)(vlSelf->cpu__DOT__rs1_e) 
                                                == (IData)(vlSelf->cpu__DOT__rd_w)) 
                                               & (IData)(vlSelf->cpu__DOT__reg_write_w)) 
                                              & (0U 
                                                 != (IData)(vlSelf->cpu__DOT__rs1_e)))
                                              ? 2U : 0U));
    vlSelf->cpu__DOT__forward2_e = (((((IData)(vlSelf->cpu__DOT__rs2_e) 
                                       == (IData)(vlSelf->cpu__DOT__rd_m)) 
                                      & (IData)(vlSelf->cpu__DOT__reg_write_m)) 
                                     & (0U != (IData)(vlSelf->cpu__DOT__rs2_e)))
                                     ? 1U : (((((IData)(vlSelf->cpu__DOT__rs2_e) 
                                                == (IData)(vlSelf->cpu__DOT__rd_w)) 
                                               & (IData)(vlSelf->cpu__DOT__reg_write_w)) 
                                              & (0U 
                                                 != (IData)(vlSelf->cpu__DOT__rs2_e)))
                                              ? 2U : 0U));
    __Vtableidx1 = (0x7fU & vlSelf->cpu__DOT__instr_d);
    vlSelf->cpu__DOT__reg_write_d = Vcpu__ConstPool__TABLE_ha986a0c0_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__imm_src_d = Vcpu__ConstPool__TABLE_ha5941d2e_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__alu_src_d = Vcpu__ConstPool__TABLE_h529afe2e_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__mem_write_d = Vcpu__ConstPool__TABLE_h29afd16c_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__result_src_d = Vcpu__ConstPool__TABLE_ha1b5330d_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__branch_d = Vcpu__ConstPool__TABLE_h974edfa5_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__pipeline_control_unit__DOT__alu_op 
        = Vcpu__ConstPool__TABLE_h25645c8f_0[__Vtableidx1];
    vlSelf->cpu__DOT__jump_d = Vcpu__ConstPool__TABLE_hf32ca493_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__jalr_d = Vcpu__ConstPool__TABLE_h105add6f_0
        [__Vtableidx1];
    vlSelf->a0 = vlSelf->cpu__DOT__pipeline_register_file__DOT__rf
        [0xaU];
    vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
        = ((0U == (IData)(vlSelf->cpu__DOT__forward1_e))
            ? vlSelf->cpu__DOT__rd1_e : ((1U == (IData)(vlSelf->cpu__DOT__forward1_e))
                                          ? vlSelf->cpu__DOT__result_m
                                          : ((2U == (IData)(vlSelf->cpu__DOT__forward1_e))
                                              ? vlSelf->cpu__DOT__result_w
                                              : 0U)));
    vlSelf->cpu__DOT__write_data_e = ((0U == (IData)(vlSelf->cpu__DOT__forward2_e))
                                       ? vlSelf->cpu__DOT__rd2_e
                                       : ((1U == (IData)(vlSelf->cpu__DOT__forward2_e))
                                           ? vlSelf->cpu__DOT__result_m
                                           : ((2U == (IData)(vlSelf->cpu__DOT__forward2_e))
                                               ? vlSelf->cpu__DOT__result_w
                                               : 0U)));
    vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2 
        = ((IData)(vlSelf->cpu__DOT__alu_src_e) ? vlSelf->cpu__DOT__imm_ext_e
            : vlSelf->cpu__DOT__write_data_e);
    vlSelf->cpu__DOT__imm_ext_d = ((4U & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                    ? ((2U & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                                 ? 0U
                                                 : 
                                                (0xfffff000U 
                                                 & vlSelf->cpu__DOT__instr_d)))
                                    : ((2U & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                        ? ((1U & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                            ? (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0x14U) 
                                               | ((0xff000U 
                                                   & vlSelf->cpu__DOT__instr_d) 
                                                  | ((0x800U 
                                                      & (vlSelf->cpu__DOT__instr_d 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->cpu__DOT__instr_d 
                                                           >> 0x14U)))))
                                            : (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelf->cpu__DOT__instr_d 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->cpu__DOT__instr_d 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->cpu__DOT__instr_d 
                                                           >> 7U))))))
                                        : ((1U & (IData)(vlSelf->cpu__DOT__imm_src_d))
                                            ? (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0xfe0U 
                                                   & (vlSelf->cpu__DOT__instr_d 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->cpu__DOT__instr_d 
                                                        >> 7U))))
                                            : (((- (IData)(
                                                           (vlSelf->cpu__DOT__instr_d 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->cpu__DOT__instr_d 
                                                  >> 0x14U)))));
    __Vtableidx2 = (((IData)((0x40000020U == (0x40000020U 
                                              & vlSelf->cpu__DOT__instr_d))) 
                     << 5U) | ((0x1cU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0xaU)) 
                               | (IData)(vlSelf->cpu__DOT__pipeline_control_unit__DOT__alu_op)));
    vlSelf->cpu__DOT__alu_control_d = Vcpu__ConstPool__TABLE_h2c28dff1_0
        [__Vtableidx2];
    vlSelf->cpu__DOT__byte_op_d = Vcpu__ConstPool__TABLE_hfa800c22_0
        [__Vtableidx2];
    vlSelf->cpu__DOT__alu_result_e = ((8U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                       ? ((4U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                           ? ((2U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))
                                                   : 0U))
                                           : ((2U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                               ? 0U
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   - vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))))
                                       : ((4U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                           ? ((2U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                               ? ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   & vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2)
                                                   : 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   | vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))
                                                   : 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   ^ vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2)))
                                           : ((2U & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                               ? ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 
                                                  ((QData)((IData)(vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1)) 
                                                   < (QData)((IData)(vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2)))
                                                   : 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   < vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_control_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2))
                                                   : 
                                                  (vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                                   + vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2)))));
    vlSelf->cpu__DOT__jb_taken_e = (((vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                                      != vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2) 
                                     & (IData)(vlSelf->cpu__DOT__branch_e)) 
                                    | (IData)(vlSelf->cpu__DOT__jump_e));
    vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall 
        = ((1U == (IData)(vlSelf->cpu__DOT__result_src_e)) 
           & (((0x1fU & (vlSelf->cpu__DOT__instr_d 
                         >> 0xfU)) == (IData)(vlSelf->cpu__DOT__rd_e)) 
              | ((0x1fU & (vlSelf->cpu__DOT__instr_d 
                           >> 0x14U)) == (IData)(vlSelf->cpu__DOT__rd_e))));
    vlSelf->cpu__DOT__stall_f = vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall;
    vlSelf->cpu__DOT__stall_d = vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall;
    vlSelf->cpu__DOT__flush_d = ((IData)(vlSelf->cpu__DOT__jalr_e) 
                                 | (IData)(vlSelf->cpu__DOT__jb_taken_e));
    vlSelf->cpu__DOT__flush_e = ((IData)(vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall) 
                                 | (IData)(vlSelf->cpu__DOT__flush_d));
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
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
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_d = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_plus4_d = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__instr_d = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__imm_ext_d = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_control_d = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__imm_src_d = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__result_src_d = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__jump_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__branch_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__jalr_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mem_write_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_src_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__reg_write_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__byte_op_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__rd1_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rd2_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__imm_ext_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_plus4_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__alu_result_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__write_data_e = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rs1_e = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__rs2_e = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__rd_e = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__alu_control_e = VL_RAND_RESET_I(4);
    vlSelf->cpu__DOT__result_src_e = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__reg_write_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mem_write_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__jump_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__branch_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__jalr_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_src_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__byte_op_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_result_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__result_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__write_data_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_plus4_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__imm_ext_m = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rd_m = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__result_src_m = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__reg_write_m = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__mem_write_m = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__byte_op_m = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__alu_result_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pc_plus4_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__read_data_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__imm_ext_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__result_w = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__rd_w = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__result_src_w = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__reg_write_w = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__forward1_e = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__forward2_e = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__stall_f = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__stall_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__flush_d = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__flush_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__jb_taken_e = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__pipeline_control_unit__DOT__alu_op = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__pipeline_register_file__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__pipeline_data_memory__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
