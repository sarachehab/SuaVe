// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_memory.h"
#include "Vdata_memory__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdata_memory::Vdata_memory(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdata_memory__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , we_i{vlSymsp->TOP.we_i}
    , byte_op_i{vlSymsp->TOP.byte_op_i}
    , addr_i{vlSymsp->TOP.addr_i}
    , wd_i{vlSymsp->TOP.wd_i}
    , rd_o{vlSymsp->TOP.rd_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdata_memory::Vdata_memory(const char* _vcname__)
    : Vdata_memory(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdata_memory::~Vdata_memory() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdata_memory___024root___eval_debug_assertions(Vdata_memory___024root* vlSelf);
#endif  // VL_DEBUG
void Vdata_memory___024root___eval_static(Vdata_memory___024root* vlSelf);
void Vdata_memory___024root___eval_initial(Vdata_memory___024root* vlSelf);
void Vdata_memory___024root___eval_settle(Vdata_memory___024root* vlSelf);
void Vdata_memory___024root___eval(Vdata_memory___024root* vlSelf);

void Vdata_memory::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_memory::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_memory___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdata_memory___024root___eval_static(&(vlSymsp->TOP));
        Vdata_memory___024root___eval_initial(&(vlSymsp->TOP));
        Vdata_memory___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdata_memory___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdata_memory::eventsPending() { return false; }

uint64_t Vdata_memory::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdata_memory::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdata_memory___024root___eval_final(Vdata_memory___024root* vlSelf);

VL_ATTR_COLD void Vdata_memory::final() {
    Vdata_memory___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdata_memory::hierName() const { return vlSymsp->name(); }
const char* Vdata_memory::modelName() const { return "Vdata_memory"; }
unsigned Vdata_memory::threads() const { return 1; }
void Vdata_memory::prepareClone() const { contextp()->prepareClone(); }
void Vdata_memory::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdata_memory::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdata_memory___024root__trace_init_top(Vdata_memory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdata_memory___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdata_memory___024root*>(voidSelf);
    Vdata_memory__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vdata_memory___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vdata_memory___024root__trace_register(Vdata_memory___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdata_memory::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdata_memory::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdata_memory___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
