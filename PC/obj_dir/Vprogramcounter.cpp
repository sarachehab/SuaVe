// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vprogramcounter.h"
#include "Vprogramcounter__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vprogramcounter::Vprogramcounter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vprogramcounter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , PCsrc{vlSymsp->TOP.PCsrc}
    , ImmOp{vlSymsp->TOP.ImmOp}
    , PC{vlSymsp->TOP.PC}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vprogramcounter::Vprogramcounter(const char* _vcname__)
    : Vprogramcounter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vprogramcounter::~Vprogramcounter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vprogramcounter___024root___eval_debug_assertions(Vprogramcounter___024root* vlSelf);
#endif  // VL_DEBUG
void Vprogramcounter___024root___eval_static(Vprogramcounter___024root* vlSelf);
void Vprogramcounter___024root___eval_initial(Vprogramcounter___024root* vlSelf);
void Vprogramcounter___024root___eval_settle(Vprogramcounter___024root* vlSelf);
void Vprogramcounter___024root___eval(Vprogramcounter___024root* vlSelf);

void Vprogramcounter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vprogramcounter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vprogramcounter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vprogramcounter___024root___eval_static(&(vlSymsp->TOP));
        Vprogramcounter___024root___eval_initial(&(vlSymsp->TOP));
        Vprogramcounter___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vprogramcounter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vprogramcounter::eventsPending() { return false; }

uint64_t Vprogramcounter::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vprogramcounter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vprogramcounter___024root___eval_final(Vprogramcounter___024root* vlSelf);

VL_ATTR_COLD void Vprogramcounter::final() {
    Vprogramcounter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vprogramcounter::hierName() const { return vlSymsp->name(); }
const char* Vprogramcounter::modelName() const { return "Vprogramcounter"; }
unsigned Vprogramcounter::threads() const { return 1; }
void Vprogramcounter::prepareClone() const { contextp()->prepareClone(); }
void Vprogramcounter::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vprogramcounter::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vprogramcounter___024root__trace_init_top(Vprogramcounter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vprogramcounter___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vprogramcounter___024root*>(voidSelf);
    Vprogramcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vprogramcounter___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vprogramcounter___024root__trace_register(Vprogramcounter___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vprogramcounter::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vprogramcounter::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vprogramcounter___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
