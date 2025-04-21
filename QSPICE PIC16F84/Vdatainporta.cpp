// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdatainporta.h"
#include "Vdatainporta__Syms.h"

//============================================================
// Constructors

Vdatainporta::Vdatainporta(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vdatainporta__Syms(_vcontextp__, _vcname__, this))
    , ra0(vlSymsp->TOP.ra0)
    , ra1(vlSymsp->TOP.ra1)
    , ra2(vlSymsp->TOP.ra2)
    , ra3(vlSymsp->TOP.ra3)
    , ra4(vlSymsp->TOP.ra4)
    , data_out(vlSymsp->TOP.data_out)
    , rootp(&(vlSymsp->TOP))
{
}

//Vdatainporta::Vdatainporta(const char* _vcname__)
//    : Vdatainporta(nullptr, _vcname__)
//{
//}

Vdatainporta::Vdatainporta(const char* _vcname__)
   : vlSymsp(new Vdatainporta__Syms(nullptr, _vcname__, this))
   , ra0(vlSymsp->TOP.ra0)
   , ra1(vlSymsp->TOP.ra1)
   , ra2(vlSymsp->TOP.ra2)
   , ra3(vlSymsp->TOP.ra3)
   , ra4(vlSymsp->TOP.ra4)
   , data_out(vlSymsp->TOP.data_out)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vdatainporta::~Vdatainporta() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdatainporta____eval_initial(Vdatainporta_* vlSelf);
void Vdatainporta____eval_settle(Vdatainporta_* vlSelf);
void Vdatainporta____eval(Vdatainporta_* vlSelf);
#ifdef VL_DEBUG
void Vdatainporta____eval_debug_assertions(Vdatainporta_* vlSelf);
#endif  // VL_DEBUG
void Vdatainporta____final(Vdatainporta_* vlSelf);

static void _eval_initial_loop(Vdatainporta__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdatainporta____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdatainporta____eval_settle(&(vlSymsp->TOP));
        Vdatainporta____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdatainporta::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdatainporta::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdatainporta____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdatainporta____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vdatainporta::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdatainporta::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdatainporta::final() {
    Vdatainporta____final(&(vlSymsp->TOP));
}
