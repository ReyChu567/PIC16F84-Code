// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdata_out_port_a.h"
#include "Vdata_out_port_a__Syms.h"

//============================================================
// Constructors

Vdata_out_port_a::Vdata_out_port_a(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp(new Vdata_out_port_a__Syms(_vcontextp__, _vcname__, this))
    , data_in(vlSymsp->TOP.data_in)
    , ra0(vlSymsp->TOP.ra0)
    , ra1(vlSymsp->TOP.ra1)
    , ra2(vlSymsp->TOP.ra2)
    , ra3(vlSymsp->TOP.ra3)
    , ra4(vlSymsp->TOP.ra4)
    , rootp(&(vlSymsp->TOP))
{
}

//Vdata_out_port_a::Vdata_out_port_a(const char* _vcname__)
//    : Vdata_out_port_a(nullptr, _vcname__)
//{
//}

Vdata_out_port_a::Vdata_out_port_a(const char* _vcname__)
   : vlSymsp(new Vdata_out_port_a__Syms(nullptr, _vcname__, this))
   , data_in(vlSymsp->TOP.data_in)
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

Vdata_out_port_a::~Vdata_out_port_a() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vdata_out_port_a____eval_initial(Vdata_out_port_a_* vlSelf);
void Vdata_out_port_a____eval_settle(Vdata_out_port_a_* vlSelf);
void Vdata_out_port_a____eval(Vdata_out_port_a_* vlSelf);
#ifdef VL_DEBUG
void Vdata_out_port_a____eval_debug_assertions(Vdata_out_port_a_* vlSelf);
#endif  // VL_DEBUG
void Vdata_out_port_a____final(Vdata_out_port_a_* vlSelf);

static void _eval_initial_loop(Vdata_out_port_a__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vdata_out_port_a____eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vdata_out_port_a____eval_settle(&(vlSymsp->TOP));
        Vdata_out_port_a____eval(&(vlSymsp->TOP));
    } while (0);
}

void Vdata_out_port_a::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdata_out_port_a::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdata_out_port_a____eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vdata_out_port_a____eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vdata_out_port_a::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vdata_out_port_a::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vdata_out_port_a::final() {
    Vdata_out_port_a____final(&(vlSymsp->TOP));
}
