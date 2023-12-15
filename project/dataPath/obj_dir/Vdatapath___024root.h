// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdatapath.h for the primary calling header

#ifndef VERILATED_VDATAPATH___024ROOT_H_
#define VERILATED_VDATAPATH___024ROOT_H_  // guard

#include "verilated.h"

class Vdatapath__Syms;

class Vdatapath___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(reg_addr1_i,4,0);
    VL_IN8(reg_addr2_i,4,0);
    VL_IN8(reg_addr3_i,4,0);
    VL_IN8(reg_we_i,0,0);
    VL_IN8(trigger_i,0,0);
    VL_IN8(result_src_i,1,0);
    VL_IN8(data_mem_we_i,0,0);
    VL_IN8(data_mem_byte_op_i,0,0);
    VL_IN8(alu_control_i,3,0);
    VL_IN8(alu_src_i,0,0);
    VL_OUT8(eq_o,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_IN(imm_ext_i,31,0);
    VL_IN(pc_next_i,31,0);
    VL_OUT(a0_o,31,0);
    VL_OUT(alu_out_o,31,0);
    IData/*31:0*/ datapath__DOT__reg_rd1;
    IData/*31:0*/ datapath__DOT__reg_rd2;
    IData/*31:0*/ datapath__DOT____Vcellinp__datapath_alu__src2_i;
    IData/*31:0*/ datapath__DOT__datapath_register_file__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ datapath__DOT__datapath_data_memory__DOT__addr;
    IData/*31:0*/ datapath__DOT__datapath_data_memory__DOT__unnamedblk1__DOT__i;
    VlUnpacked<IData/*31:0*/, 32> datapath__DOT__datapath_register_file__DOT__rf;
    VlUnpacked<CData/*7:0*/, 131072> datapath__DOT__datapath_data_memory__DOT__data_ram;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vdatapath__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdatapath___024root(Vdatapath__Syms* symsp, const char* name);
    ~Vdatapath___024root();
    VL_UNCOPYABLE(Vdatapath___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
