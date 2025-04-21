// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vport_a_tris.h for the primary calling header

#include "verilated.h"

#include "Vport_a_tris_.h"

VL_ATTR_COLD void Vport_a_tris____eval_initial(Vport_a_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_a_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_a_tris____eval_initial\n"); );
}

void Vport_a_tris____combo__TOP__0(Vport_a_tris_* vlSelf);

VL_ATTR_COLD void Vport_a_tris____eval_settle(Vport_a_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_a_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_a_tris____eval_settle\n"); );
    // Body
    Vport_a_tris____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vport_a_tris____final(Vport_a_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_a_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_a_tris____final\n"); );
}

VL_ATTR_COLD void Vport_a_tris____ctor_var_reset(Vport_a_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_a_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_a_tris____ctor_var_reset\n"); );
    // Body
    vlSelf->tris_val = VL_RAND_RESET_I(5);
    vlSelf->ra0 = VL_RAND_RESET_I(1);
    vlSelf->ra1 = VL_RAND_RESET_I(1);
    vlSelf->ra2 = VL_RAND_RESET_I(1);
    vlSelf->ra3 = VL_RAND_RESET_I(1);
    vlSelf->ra4 = VL_RAND_RESET_I(1);
}
