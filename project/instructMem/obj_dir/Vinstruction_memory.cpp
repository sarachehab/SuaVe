// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vinstruction_memory.h"
#include "Vinstruction_memory__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vinstruction_memory::Vinstruction_memory(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vinstruction_memory__Syms(contextp(), _vcname__, this)}
    , addr_i{vlSymsp->TOP.addr_i}
    , instr_o{vlSymsp->TOP.instr_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vinstruction_memory::Vinstruction_memory(const char* _vcname__)
    : Vinstruction_memory(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vinstruction_memory::~Vinstruction_memory() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vinstruction_memory___024root___eval_debug_assertions(Vinstruction_memory___024root* vlSelf);
#endif  // VL_DEBUG
void Vinstruction_memory___024root___eval_static(Vinstruction_memory___024root* vlSelf);
void Vinstruction_memory___024root___eval_initial(Vinstruction_memory___024root* vlSelf);
void Vinstruction_memory___024root___eval_settle(Vinstruction_memory___024root* vlSelf);
void Vinstruction_memory___024root___eval(Vinstruction_memory___024root* vlSelf);

void Vinstruction_memory::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vinstruction_memory::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vinstruction_memory___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vinstruction_memory___024root___eval_static(&(vlSymsp->TOP));
        Vinstruction_memory___024root___eval_initial(&(vlSymsp->TOP));
        Vinstruction_memory___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vinstruction_memory___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vinstruction_memory::eventsPending() { return false; }

uint64_t Vinstruction_memory::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vinstruction_memory::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vinstruction_memory___024root___eval_final(Vinstruction_memory___024root* vlSelf);

VL_ATTR_COLD void Vinstruction_memory::final() {
    Vinstruction_memory___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vinstruction_memory::hierName() const { return vlSymsp->name(); }
const char* Vinstruction_memory::modelName() const { return "Vinstruction_memory"; }
unsigned Vinstruction_memory::threads() const { return 1; }
void Vinstruction_memory::prepareClone() const { contextp()->prepareClone(); }
void Vinstruction_memory::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vinstruction_memory::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vinstruction_memory___024root__trace_init_top(Vinstruction_memory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vinstruction_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vinstruction_memory___024root*>(voidSelf);
    Vinstruction_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vinstruction_memory___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vinstruction_memory___024root__trace_register(Vinstruction_memory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vinstruction_memory::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vinstruction_memory::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vinstruction_memory___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
