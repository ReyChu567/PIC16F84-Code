// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vport_input_x1.h"
#include "Vport_input_x1__Syms.h"

//============================================================
// Constructors

Vport_input_x1::Vport_input_x1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vport_input_x1__Syms(_vcontextp__, _vcname__, this))
    , tris_stat(vlSymsp->TOP.tris_stat)
    , in(vlSymsp->TOP.in)
    , data_in(vlSymsp->TOP.data_in)
    , rootp(&(vlSymsp->TOP))
{
}

//Vport_input_x1::Vport_input_x1(const char* _vcname__)
//    : Vport_input_x1(nullptr, _vcname__)
//{
//}

Vport_input_x1::Vport_input_x1(const char* _vcname__)
   : vlSymsp(new Vport_input_x1__Syms(nullptr, _vcname__, this))
   , tris_stat(vlSymsp->TOP.tris_stat)
   , in(vlSymsp->TOP.in)
   , data_in(vlSymsp->TOP.data_in)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vport_input_x1::~Vport_input_x1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vport_input_x1____eval_initial(Vport_input_x1_* vlSelf);
void Vport_input_x1____eval_settle(Vport_input_x1_* vlSelf);
void Vport_input_x1____eval(Vport_input_x1_* vlSelf);
#ifdef VL_DEBUG
void Vport_input_x1____eval_debug_assertions(Vport_input_x1_* vlSelf);
#endif  // VL_DEBUG
void Vport_input_x1____final(Vport_input_x1_* vlSelf);

static void _eval_initial_loop(Vport_input_x1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vport_input_x1____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vport_input_x1____eval_settle(&(vlSymsp->TOP));
        Vport_input_x1____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vport_input_x1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vport_input_x1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vport_input_x1____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vport_input_x1____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vport_input_x1::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vport_input_x1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vport_input_x1::final() {
    Vport_input_x1____final(&(vlSymsp->TOP));
}
