// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vport_b_tris.h for the primary calling header

#include "verilated.h"

#include "Vport_b_tris_.h"

VL_ATTR_COLD void Vport_b_tris____eval_initial(Vport_b_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_b_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_b_tris____eval_initial\n"); );
}

void Vport_b_tris____combo__TOP__0(Vport_b_tris_* vlSelf);

VL_ATTR_COLD void Vport_b_tris____eval_settle(Vport_b_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_b_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_b_tris____eval_settle\n"); );
    // Body
    Vport_b_tris____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vport_b_tris____final(Vport_b_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_b_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_b_tris____final\n"); );
}

VL_ATTR_COLD void Vport_b_tris____ctor_var_reset(Vport_b_tris_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vport_b_tris__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vport_b_tris____ctor_var_reset\n"); );
    // Body
    vlSelf->tris_val = VL_RAND_RESET_I(8);
    vlSelf->rb0 = VL_RAND_RESET_I(1);
    vlSelf->rb1 = VL_RAND_RESET_I(1);
    vlSelf->rb2 = VL_RAND_RESET_I(1);
    vlSelf->rb3 = VL_RAND_RESET_I(1);
    vlSelf->rb4 = VL_RAND_RESET_I(1);
    vlSelf->rb5 = VL_RAND_RESET_I(1);
    vlSelf->rb6 = VL_RAND_RESET_I(1);
    vlSelf->rb7 = VL_RAND_RESET_I(1);
}
