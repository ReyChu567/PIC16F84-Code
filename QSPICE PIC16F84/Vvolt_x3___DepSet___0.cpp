// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvolt_x3.h for the primary calling header

#include "verilated.h"

#include "Vvolt_x3_.h"

VL_INLINE_OPT void Vvolt_x3____combo__TOP__0(Vvolt_x3_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvolt_x3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvolt_x3____combo__TOP__0\n"); );
    // Body
    if (vlSelf->mclr) {
        if (((IData)(vlSelf->mclr) & (IData)(vlSelf->q1))) {
            if (vlSelf->in) {
                vlSelf->out = vlSelf->vdd;
            } else if ((1U & (~ (IData)(vlSelf->in)))) {
                vlSelf->out = 0U;
            }
        }
    } else {
        vlSelf->out = 0U;
    }
}

void Vvolt_x3____eval(Vvolt_x3_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvolt_x3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvolt_x3____eval\n"); );
    // Body
    Vvolt_x3____combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vvolt_x3____eval_debug_assertions(Vvolt_x3_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvolt_x3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvolt_x3____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->vdd & 0xf0U))) {
        Verilated::overWidthError("vdd");}
    if (VL_UNLIKELY((vlSelf->in & 0xfeU))) {
        Verilated::overWidthError("in");}
    if (VL_UNLIKELY((vlSelf->mclr & 0xfeU))) {
        Verilated::overWidthError("mclr");}
    if (VL_UNLIKELY((vlSelf->q1 & 0xfeU))) {
        Verilated::overWidthError("q1");}
}
#endif  // VL_DEBUG
