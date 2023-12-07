// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vregister_file.h"
#include "Vregister_file__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vregister_file::Vregister_file(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vregister_file__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , addr3_we_i{vlSymsp->TOP.addr3_we_i}
    , addr1_i{vlSymsp->TOP.addr1_i}
    , addr2_i{vlSymsp->TOP.addr2_i}
    , addr3_i{vlSymsp->TOP.addr3_i}
    , addr3_wd_i{vlSymsp->TOP.addr3_wd_i}
    , rd1_o{vlSymsp->TOP.rd1_o}
    , rd2_o{vlSymsp->TOP.rd2_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vregister_file::Vregister_file(const char* _vcname__)
    : Vregister_file(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vregister_file::~Vregister_file() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vregister_file___024root___eval_initial(Vregister_file___024root* vlSelf);
void Vregister_file___024root___eval_settle(Vregister_file___024root* vlSelf);
void Vregister_file___024root___eval(Vregister_file___024root* vlSelf);
#ifdef VL_DEBUG
void Vregister_file___024root___eval_debug_assertions(Vregister_file___024root* vlSelf);
#endif  // VL_DEBUG
void Vregister_file___024root___final(Vregister_file___024root* vlSelf);

static void _eval_initial_loop(Vregister_file__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vregister_file___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vregister_file___024root___eval_settle(&(vlSymsp->TOP));
        Vregister_file___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vregister_file::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vregister_file::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vregister_file___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vregister_file___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vregister_file::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vregister_file::final() {
    Vregister_file___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vregister_file::hierName() const { return vlSymsp->name(); }
const char* Vregister_file::modelName() const { return "Vregister_file"; }
unsigned Vregister_file::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vregister_file::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vregister_file___024root__trace_init_top(Vregister_file___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vregister_file___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vregister_file___024root*>(voidSelf);
    Vregister_file__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vregister_file___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vregister_file___024root__trace_register(Vregister_file___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vregister_file::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vregister_file___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
