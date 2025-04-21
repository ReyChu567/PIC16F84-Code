// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vport_a_tris.h"
#include "Vport_a_tris__Syms.h"

//============================================================
// Constructors

Vport_a_tris::Vport_a_tris(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vport_a_tris__Syms(_vcontextp__, _vcname__, this))
    , tris_val(vlSymsp->TOP.tris_val)
    , ra0(vlSymsp->TOP.ra0)
    , ra1(vlSymsp->TOP.ra1)
    , ra2(vlSymsp->TOP.ra2)
    , ra3(vlSymsp->TOP.ra3)
    , ra4(vlSymsp->TOP.ra4)
    , rootp(&(vlSymsp->TOP))
{
}

//Vport_a_tris::Vport_a_tris(const char* _vcname__)
//    : Vport_a_tris(nullptr, _vcname__)
//{
//}

Vport_a_tris::Vport_a_tris(const char* _vcname__)
   : vlSymsp(new Vport_a_tris__Syms(nullptr, _vcname__, this))
   , tris_val(vlSymsp->TOP.tris_val)
   , ra0(vlSymsp->TOP.ra0)
   , ra1(vlSymsp->TOP.ra1)
   , ra2(vlSymsp->TOP.ra2)
   , ra3(vlSymsp->TOP.ra3)
   , ra4(vlSymsp->TOP.ra4)
   , rootp(&(vlSymsp->TOP))
{
}

//============================================================
// Destructor

Vport_a_tris::~Vport_a_tris() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vport_a_tris____eval_initial(Vport_a_tris_* vlSelf);
void Vport_a_tris____eval_settle(Vport_a_tris_* vlSelf);
void Vport_a_tris____eval(Vport_a_tris_* vlSelf);
#ifdef VL_DEBUG
void Vport_a_tris____eval_debug_assertions(Vport_a_tris_* vlSelf);
#endif  // VL_DEBUG
void Vport_a_tris____final(Vport_a_tris_* vlSelf);

static void _eval_initial_loop(Vport_a_tris__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vport_a_tris____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vport_a_tris____eval_settle(&(vlSymsp->TOP));
        Vport_a_tris____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vport_a_tris::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vport_a_tris::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vport_a_tris____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vport_a_tris____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vport_a_tris::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vport_a_tris::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vport_a_tris::final() {
    Vport_a_tris____final(&(vlSymsp->TOP));
}
