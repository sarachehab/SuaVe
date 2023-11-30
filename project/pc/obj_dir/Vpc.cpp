// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpc.h"
#include "Vpc__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vpc::Vpc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpc__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , pcsrc_i{vlSymsp->TOP.pcsrc_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , imm_ext_i{vlSymsp->TOP.imm_ext_i}
    , pc_o{vlSymsp->TOP.pc_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpc::Vpc(const char* _vcname__)
    : Vpc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpc::~Vpc() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vpc___024root___eval_initial(Vpc___024root* vlSelf);
void Vpc___024root___eval_settle(Vpc___024root* vlSelf);
void Vpc___024root___eval(Vpc___024root* vlSelf);
#ifdef VL_DEBUG
void Vpc___024root___eval_debug_assertions(Vpc___024root* vlSelf);
#endif  // VL_DEBUG
void Vpc___024root___final(Vpc___024root* vlSelf);

static void _eval_initial_loop(Vpc__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vpc___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vpc___024root___eval_settle(&(vlSymsp->TOP));
        Vpc___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vpc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vpc___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vpc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vpc::final() {
    Vpc___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpc::hierName() const { return vlSymsp->name(); }
const char* Vpc::modelName() const { return "Vpc"; }
unsigned Vpc::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vpc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vpc___024root__trace_init_top(Vpc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vpc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpc___024root*>(voidSelf);
    Vpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vpc___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vpc___024root__trace_register(Vpc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vpc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
