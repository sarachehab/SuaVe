// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdatapath.h"
#include "Vdatapath__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdatapath::Vdatapath(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdatapath__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , reg_addr1_i{vlSymsp->TOP.reg_addr1_i}
    , reg_addr2_i{vlSymsp->TOP.reg_addr2_i}
    , reg_addr3_i{vlSymsp->TOP.reg_addr3_i}
    , reg_we_i{vlSymsp->TOP.reg_we_i}
    , trigger_i{vlSymsp->TOP.trigger_i}
    , result_src_i{vlSymsp->TOP.result_src_i}
    , data_mem_we_i{vlSymsp->TOP.data_mem_we_i}
    , data_mem_byte_op_i{vlSymsp->TOP.data_mem_byte_op_i}
    , alu_control_i{vlSymsp->TOP.alu_control_i}
    , alu_src_i{vlSymsp->TOP.alu_src_i}
    , eq_o{vlSymsp->TOP.eq_o}
    , imm_ext_i{vlSymsp->TOP.imm_ext_i}
    , pc_next_i{vlSymsp->TOP.pc_next_i}
    , a0_o{vlSymsp->TOP.a0_o}
    , alu_out_o{vlSymsp->TOP.alu_out_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdatapath::Vdatapath(const char* _vcname__)
    : Vdatapath(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdatapath::~Vdatapath() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdatapath___024root___eval_initial(Vdatapath___024root* vlSelf);
void Vdatapath___024root___eval_settle(Vdatapath___024root* vlSelf);
void Vdatapath___024root___eval(Vdatapath___024root* vlSelf);
#ifdef VL_DEBUG
void Vdatapath___024root___eval_debug_assertions(Vdatapath___024root* vlSelf);
#endif  // VL_DEBUG
void Vdatapath___024root___final(Vdatapath___024root* vlSelf);

static void _eval_initial_loop(Vdatapath__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdatapath___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdatapath___024root___eval_settle(&(vlSymsp->TOP));
        Vdatapath___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdatapath::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdatapath::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdatapath___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdatapath___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vdatapath::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdatapath::final() {
    Vdatapath___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdatapath::hierName() const { return vlSymsp->name(); }
const char* Vdatapath::modelName() const { return "Vdatapath"; }
unsigned Vdatapath::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vdatapath::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdatapath___024root__trace_init_top(Vdatapath___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdatapath___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdatapath___024root*>(voidSelf);
    Vdatapath__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdatapath___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdatapath___024root__trace_register(Vdatapath___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdatapath::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdatapath___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
