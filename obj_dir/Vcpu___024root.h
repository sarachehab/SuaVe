// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"


class Vcpu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(trigger,0,0);
        CData/*3:0*/ cpu__DOT__alu_control_d;
        CData/*2:0*/ cpu__DOT__imm_src_d;
        CData/*1:0*/ cpu__DOT__result_src_d;
        CData/*0:0*/ cpu__DOT__jump_d;
        CData/*0:0*/ cpu__DOT__branch_d;
        CData/*0:0*/ cpu__DOT__jalr_d;
        CData/*0:0*/ cpu__DOT__mem_write_d;
        CData/*0:0*/ cpu__DOT__alu_src_d;
        CData/*0:0*/ cpu__DOT__reg_write_d;
        CData/*0:0*/ cpu__DOT__byte_op_d;
        CData/*4:0*/ cpu__DOT__rs1_e;
        CData/*4:0*/ cpu__DOT__rs2_e;
        CData/*4:0*/ cpu__DOT__rd_e;
        CData/*3:0*/ cpu__DOT__alu_control_e;
        CData/*1:0*/ cpu__DOT__result_src_e;
        CData/*0:0*/ cpu__DOT__reg_write_e;
        CData/*0:0*/ cpu__DOT__mem_write_e;
        CData/*0:0*/ cpu__DOT__jump_e;
        CData/*0:0*/ cpu__DOT__branch_e;
        CData/*0:0*/ cpu__DOT__jalr_e;
        CData/*0:0*/ cpu__DOT__alu_src_e;
        CData/*0:0*/ cpu__DOT__byte_op_e;
        CData/*4:0*/ cpu__DOT__rd_m;
        CData/*1:0*/ cpu__DOT__result_src_m;
        CData/*0:0*/ cpu__DOT__reg_write_m;
        CData/*0:0*/ cpu__DOT__mem_write_m;
        CData/*0:0*/ cpu__DOT__byte_op_m;
        CData/*4:0*/ cpu__DOT__rd_w;
        CData/*1:0*/ cpu__DOT__result_src_w;
        CData/*0:0*/ cpu__DOT__reg_write_w;
        CData/*1:0*/ cpu__DOT__forward1_e;
        CData/*1:0*/ cpu__DOT__forward2_e;
        CData/*0:0*/ cpu__DOT__stall_f;
        CData/*0:0*/ cpu__DOT__stall_d;
        CData/*0:0*/ cpu__DOT__flush_d;
        CData/*0:0*/ cpu__DOT__flush_e;
        CData/*0:0*/ cpu__DOT__jb_taken_e;
        CData/*1:0*/ cpu__DOT__pipeline_control_unit__DOT__alu_op;
        CData/*0:0*/ cpu__DOT__pipeline_hazard_unit__DOT__lw_stall;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(a0,31,0);
        IData/*31:0*/ cpu__DOT__pc_d;
        IData/*31:0*/ cpu__DOT__pc_plus4_d;
        IData/*31:0*/ cpu__DOT__instr_d;
        IData/*31:0*/ cpu__DOT__imm_ext_d;
        IData/*31:0*/ cpu__DOT__rd1_e;
        IData/*31:0*/ cpu__DOT__rd2_e;
        IData/*31:0*/ cpu__DOT__imm_ext_e;
        IData/*31:0*/ cpu__DOT__pc_e;
        IData/*31:0*/ cpu__DOT__pc_plus4_e;
        IData/*31:0*/ cpu__DOT__alu_result_e;
        IData/*31:0*/ cpu__DOT__write_data_e;
        IData/*31:0*/ cpu__DOT__alu_result_m;
        IData/*31:0*/ cpu__DOT__result_m;
        IData/*31:0*/ cpu__DOT__write_data_m;
        IData/*31:0*/ cpu__DOT__pc_plus4_m;
        IData/*31:0*/ cpu__DOT__imm_ext_m;
        IData/*31:0*/ cpu__DOT__alu_result_w;
        IData/*31:0*/ cpu__DOT__pc_plus4_w;
        IData/*31:0*/ cpu__DOT__read_data_w;
    };
    struct {
        IData/*31:0*/ cpu__DOT__imm_ext_w;
        IData/*31:0*/ cpu__DOT__result_w;
        IData/*31:0*/ cpu__DOT__pipeline_program_counter__DOT__pc_next;
        IData/*31:0*/ cpu__DOT__pipeline_register_file__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ cpu__DOT__pipeline_execute_stage__DOT__src1;
        IData/*31:0*/ cpu__DOT__pipeline_execute_stage__DOT__src2;
        IData/*31:0*/ cpu__DOT__pipeline_data_memory__DOT__addr;
        IData/*31:0*/ cpu__DOT__pipeline_data_memory__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 4096> cpu__DOT__pipeline_instruction_memory__DOT__rom;
        VlUnpacked<IData/*31:0*/, 32> cpu__DOT__pipeline_register_file__DOT__rf;
        VlUnpacked<CData/*7:0*/, 131072> cpu__DOT__pipeline_data_memory__DOT__data_ram;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* v__name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
