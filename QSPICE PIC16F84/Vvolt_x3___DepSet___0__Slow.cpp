// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvolt_x3.h for the primary calling header

#include "verilated.h"

#include "Vvolt_x3_.h"

VL_ATTR_COLD void Vvolt_x3____eval_initial(Vvolt_x3_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvolt_x3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvolt_x3____eval_initial\n"); );
}

void Vvolt_x3____combo__TOP__0(Vvolt_x3_* vlSelf);

VL_ATTR_COLD void Vvolt_x3____eval_settle(Vvolt_x3_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvolt_x3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvolt_x3____eval_settle\n"); );
    // Body
    Vvolt_x3____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vvolt_x3____final(Vvolt_x3_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvolt_x3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvolt_x3____final\n"); );
}

VL_ATTR_COLD void Vvolt_x3____ctor_var_reset(Vvolt_x3_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvolt_x3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvolt_x3____ctor_var_reset\n"); );
    // Body
    vlSelf->vdd = VL_RAND_RESET_I(4);
    vlSelf->in = VL_RAND_RESET_I(1);
    vlSelf->mclr = VL_RAND_RESET_I(1);
    vlSelf->q1 = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(4);
}
