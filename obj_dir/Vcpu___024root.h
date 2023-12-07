// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class Vcpu__Syms;

class Vcpu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(trigger_i,0,0);
    CData/*0:0*/ cpu__DOT__JALR_instr;
    CData/*0:0*/ cpu__DOT__mem_write;
    CData/*0:0*/ cpu__DOT__alu_src;
    CData/*0:0*/ cpu__DOT__reg_write;
    CData/*0:0*/ cpu__DOT__byte_address;
    CData/*1:0*/ cpu__DOT__result_src;
    CData/*2:0*/ cpu__DOT__imm_src;
    CData/*3:0*/ cpu__DOT__alu_control;
    CData/*1:0*/ cpu__DOT__controlUnit_top__DOT__alu_op;
    CData/*0:0*/ cpu__DOT__controlUnit_top__DOT__branch;
    CData/*0:0*/ cpu__DOT__controlUnit_top__DOT__jmp;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_OUT(a0_o,31,0);
    IData/*31:0*/ cpu__DOT__instr;
    IData/*31:0*/ cpu__DOT__imm_ext;
    IData/*31:0*/ cpu__DOT__alu_out;
    IData/*31:0*/ cpu__DOT__datapath__DOT__reg_rd1;
    IData/*31:0*/ cpu__DOT__datapath__DOT__reg_rd2;
    IData/*31:0*/ cpu__DOT__datapath__DOT____Vcellinp__datapath_alu__src2_i;
    IData/*31:0*/ cpu__DOT__datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ cpu__DOT__datapath__DOT__datapath_data_memory__DOT__addr;
    IData/*31:0*/ cpu__DOT__datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ cpu__DOT__program_counter__DOT__pc_next;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__datapath__DOT__datapath_register_file__DOT__rf;
    VlUnpacked<CData/*7:0*/, 131072> cpu__DOT__datapath__DOT__datapath_data_memory__DOT__data_ram;
    VlUnpacked<CData/*7:0*/, 4096> cpu__DOT__instruction_memory__DOT__rom;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vcpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu___024root(Vcpu__Syms* symsp, const char* name);
    ~Vcpu___024root();
    VL_UNCOPYABLE(Vcpu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
