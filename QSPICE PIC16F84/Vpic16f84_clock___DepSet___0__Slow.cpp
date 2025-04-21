// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpic16f84_clock.h for the primary calling header

#include "verilated.h"

#include "Vpic16f84_clock_.h"

VL_ATTR_COLD void Vpic16f84_clock____initial__TOP__0(Vpic16f84_clock_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_clock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_clock____initial__TOP__0\n"); );
    // Body
    vlSelf->pic16f84_clock__DOT__phase_counter = 0U;
}

VL_ATTR_COLD void Vpic16f84_clock____eval_initial(Vpic16f84_clock_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_clock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_clock____eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vpic16f84_clock____initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vpic16f84_clock____eval_settle(Vpic16f84_clock_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_clock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_clock____eval_settle\n"); );
}

VL_ATTR_COLD void Vpic16f84_clock____final(Vpic16f84_clock_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_clock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_clock____final\n"); );
}

VL_ATTR_COLD void Vpic16f84_clock____ctor_var_reset(Vpic16f84_clock_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_clock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_clock____ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->vdd = VL_RAND_RESET_I(4);
    vlSelf->vss = VL_RAND_RESET_I(4);
    vlSelf->mclr = VL_RAND_RESET_I(1);
    vlSelf->q1 = VL_RAND_RESET_I(1);
    vlSelf->q2 = VL_RAND_RESET_I(1);
    vlSelf->q3 = VL_RAND_RESET_I(1);
    vlSelf->q4 = VL_RAND_RESET_I(1);
    vlSelf->clk_out = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_clock__DOT__phase_counter = VL_RAND_RESET_I(2);
}
