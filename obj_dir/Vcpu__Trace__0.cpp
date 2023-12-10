// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__pipeline_data_memory__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->cpu__DOT__pipeline_register_file__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+2,(vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next),32);
        bufp->chgIData(oldp+3,(((IData)(4U) + vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)),32);
        bufp->chgIData(oldp+4,(((vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                 [(0xffcU & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)] 
                                 << 0x18U) | ((vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                               [(0xfffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (0xffcU 
                                                     & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)))] 
                                               << 0x10U) 
                                              | ((vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                                  [
                                                  (0xfffU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0xffcU 
                                                       & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)))] 
                                                  << 8U) 
                                                 | vlSelf->cpu__DOT__pipeline_instruction_memory__DOT__rom
                                                 [(0xfffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0xffcU 
                                                       & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)))])))),32);
        bufp->chgIData(oldp+5,(vlSelf->cpu__DOT__pc_d),32);
        bufp->chgIData(oldp+6,(vlSelf->cpu__DOT__pc_plus4_d),32);
        bufp->chgIData(oldp+7,(vlSelf->cpu__DOT__instr_d),32);
        bufp->chgIData(oldp+8,(vlSelf->cpu__DOT__imm_ext_d),32);
        bufp->chgCData(oldp+9,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+10,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+11,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                          >> 7U))),5);
        bufp->chgCData(oldp+12,(vlSelf->cpu__DOT__alu_control_d),4);
        bufp->chgCData(oldp+13,(vlSelf->cpu__DOT__imm_src_d),3);
        bufp->chgCData(oldp+14,(vlSelf->cpu__DOT__result_src_d),2);
        bufp->chgBit(oldp+15,(vlSelf->cpu__DOT__jump_d));
        bufp->chgBit(oldp+16,(vlSelf->cpu__DOT__branch_d));
        bufp->chgBit(oldp+17,(vlSelf->cpu__DOT__jalr_d));
        bufp->chgBit(oldp+18,(vlSelf->cpu__DOT__mem_write_d));
        bufp->chgBit(oldp+19,(vlSelf->cpu__DOT__alu_src_d));
        bufp->chgBit(oldp+20,(vlSelf->cpu__DOT__reg_write_d));
        bufp->chgBit(oldp+21,(vlSelf->cpu__DOT__byte_op_d));
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__rd1_e),32);
        bufp->chgIData(oldp+23,(vlSelf->cpu__DOT__rd2_e),32);
        bufp->chgIData(oldp+24,(vlSelf->cpu__DOT__imm_ext_e),32);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__pc_e),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__pc_plus4_e),32);
        bufp->chgIData(oldp+27,(vlSelf->cpu__DOT__alu_result_e),32);
        bufp->chgIData(oldp+28,((vlSelf->cpu__DOT__pc_e 
                                 + vlSelf->cpu__DOT__imm_ext_e)),32);
        bufp->chgIData(oldp+29,(vlSelf->cpu__DOT__write_data_e),32);
        bufp->chgCData(oldp+30,(vlSelf->cpu__DOT__rs1_e),5);
        bufp->chgCData(oldp+31,(vlSelf->cpu__DOT__rs2_e),5);
        bufp->chgCData(oldp+32,(vlSelf->cpu__DOT__rd_e),5);
        bufp->chgCData(oldp+33,(vlSelf->cpu__DOT__alu_control_e),4);
        bufp->chgCData(oldp+34,(vlSelf->cpu__DOT__result_src_e),2);
        bufp->chgBit(oldp+35,(vlSelf->cpu__DOT__reg_write_e));
        bufp->chgBit(oldp+36,(vlSelf->cpu__DOT__mem_write_e));
        bufp->chgBit(oldp+37,(vlSelf->cpu__DOT__jump_e));
        bufp->chgBit(oldp+38,(vlSelf->cpu__DOT__branch_e));
        bufp->chgBit(oldp+39,(vlSelf->cpu__DOT__jalr_e));
        bufp->chgBit(oldp+40,(vlSelf->cpu__DOT__alu_src_e));
        bufp->chgBit(oldp+41,(vlSelf->cpu__DOT__byte_op_e));
        bufp->chgBit(oldp+42,((vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1 
                               == vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2)));
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__alu_result_m),32);
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__result_m),32);
        bufp->chgIData(oldp+45,(vlSelf->cpu__DOT__write_data_m),32);
        bufp->chgIData(oldp+46,(vlSelf->cpu__DOT__pc_plus4_m),32);
        bufp->chgIData(oldp+47,(vlSelf->cpu__DOT__imm_ext_m),32);
        bufp->chgCData(oldp+48,(vlSelf->cpu__DOT__rd_m),5);
        bufp->chgCData(oldp+49,(vlSelf->cpu__DOT__result_src_m),2);
        bufp->chgBit(oldp+50,(vlSelf->cpu__DOT__reg_write_m));
        bufp->chgBit(oldp+51,(vlSelf->cpu__DOT__mem_write_m));
        bufp->chgBit(oldp+52,(vlSelf->cpu__DOT__byte_op_m));
        bufp->chgIData(oldp+53,(vlSelf->cpu__DOT__alu_result_w),32);
        bufp->chgIData(oldp+54,(vlSelf->cpu__DOT__pc_plus4_w),32);
        bufp->chgIData(oldp+55,(vlSelf->cpu__DOT__read_data_w),32);
        bufp->chgIData(oldp+56,(vlSelf->cpu__DOT__imm_ext_w),32);
        bufp->chgIData(oldp+57,(vlSelf->cpu__DOT__result_w),32);
        bufp->chgCData(oldp+58,(vlSelf->cpu__DOT__rd_w),5);
        bufp->chgCData(oldp+59,(vlSelf->cpu__DOT__result_src_w),2);
        bufp->chgBit(oldp+60,(vlSelf->cpu__DOT__reg_write_w));
        bufp->chgCData(oldp+61,(vlSelf->cpu__DOT__forward1_e),2);
        bufp->chgCData(oldp+62,(vlSelf->cpu__DOT__forward2_e),2);
        bufp->chgBit(oldp+63,(vlSelf->cpu__DOT__stall_f));
        bufp->chgBit(oldp+64,(vlSelf->cpu__DOT__stall_d));
        bufp->chgBit(oldp+65,(vlSelf->cpu__DOT__flush_d));
        bufp->chgBit(oldp+66,(vlSelf->cpu__DOT__flush_e));
        bufp->chgBit(oldp+67,(vlSelf->cpu__DOT__jb_taken_e));
        bufp->chgCData(oldp+68,((0x7fU & vlSelf->cpu__DOT__instr_d)),7);
        bufp->chgCData(oldp+69,((7U & (vlSelf->cpu__DOT__instr_d 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+70,((1U & (vlSelf->cpu__DOT__instr_d 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+71,(vlSelf->cpu__DOT__pipeline_control_unit__DOT__alu_op),2);
        bufp->chgBit(oldp+72,((1U & (vlSelf->cpu__DOT__instr_d 
                                     >> 5U))));
        bufp->chgBit(oldp+73,((IData)((0x40000020U 
                                       == (0x40000020U 
                                           & vlSelf->cpu__DOT__instr_d)))));
        bufp->chgIData(oldp+74,(vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr),32);
        bufp->chgBit(oldp+75,((1U & (~ (IData)(vlSelf->cpu__DOT__stall_d)))));
        bufp->chgIData(oldp+76,(vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src1),32);
        bufp->chgIData(oldp+77,(vlSelf->cpu__DOT__pipeline_execute_stage__DOT__src2),32);
        bufp->chgIData(oldp+78,((vlSelf->cpu__DOT__instr_d 
                                 >> 7U)),25);
        bufp->chgBit(oldp+79,(vlSelf->cpu__DOT__pipeline_hazard_unit__DOT__lw_stall));
        bufp->chgIData(oldp+80,((0xfffffffcU & vlSelf->cpu__DOT__pipeline_program_counter__DOT__pc_next)),32);
        bufp->chgBit(oldp+81,((1U & (~ (IData)(vlSelf->cpu__DOT__stall_f)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+82,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[0]),32);
        bufp->chgIData(oldp+83,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[1]),32);
        bufp->chgIData(oldp+84,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[2]),32);
        bufp->chgIData(oldp+85,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[3]),32);
        bufp->chgIData(oldp+86,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[4]),32);
        bufp->chgIData(oldp+87,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[5]),32);
        bufp->chgIData(oldp+88,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[6]),32);
        bufp->chgIData(oldp+89,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[7]),32);
        bufp->chgIData(oldp+90,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[8]),32);
        bufp->chgIData(oldp+91,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[9]),32);
        bufp->chgIData(oldp+92,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[10]),32);
        bufp->chgIData(oldp+93,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[11]),32);
        bufp->chgIData(oldp+94,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[12]),32);
        bufp->chgIData(oldp+95,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[13]),32);
        bufp->chgIData(oldp+96,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[14]),32);
        bufp->chgIData(oldp+97,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[15]),32);
        bufp->chgIData(oldp+98,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[16]),32);
        bufp->chgIData(oldp+99,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[17]),32);
        bufp->chgIData(oldp+100,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[18]),32);
        bufp->chgIData(oldp+101,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[19]),32);
        bufp->chgIData(oldp+102,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[20]),32);
        bufp->chgIData(oldp+103,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[21]),32);
        bufp->chgIData(oldp+104,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[22]),32);
        bufp->chgIData(oldp+105,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[23]),32);
        bufp->chgIData(oldp+106,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[24]),32);
        bufp->chgIData(oldp+107,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[25]),32);
        bufp->chgIData(oldp+108,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[26]),32);
        bufp->chgIData(oldp+109,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[27]),32);
        bufp->chgIData(oldp+110,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[28]),32);
        bufp->chgIData(oldp+111,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[29]),32);
        bufp->chgIData(oldp+112,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[30]),32);
        bufp->chgIData(oldp+113,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+114,(vlSelf->clk));
    bufp->chgBit(oldp+115,(vlSelf->rst));
    bufp->chgBit(oldp+116,(vlSelf->trigger));
    bufp->chgIData(oldp+117,(vlSelf->a0),32);
    bufp->chgIData(oldp+118,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf
                             [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+119,(vlSelf->cpu__DOT__pipeline_register_file__DOT__rf
                             [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+120,(((IData)(vlSelf->cpu__DOT__byte_op_m)
                               ? ((IData)(vlSelf->cpu__DOT__byte_op_m)
                                   ? vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                  [(0x1ffffU & vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr)]
                                   : 0U) : ((vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                             [(0x1ffffU 
                                               & ((IData)(3U) 
                                                  + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr))] 
                                             << 0x18U) 
                                            | ((vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                                [(0x1ffffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr))] 
                                                << 0x10U) 
                                               | ((vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                                   [
                                                   (0x1ffffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr))] 
                                                   << 8U) 
                                                  | vlSelf->cpu__DOT__pipeline_data_memory__DOT__data_ram
                                                  [
                                                  (0x1ffffU 
                                                   & vlSelf->cpu__DOT__pipeline_data_memory__DOT__addr)]))))),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
