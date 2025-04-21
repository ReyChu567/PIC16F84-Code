// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpic16f84_clock.h for the primary calling header

#include "verilated.h"

#include "Vpic16f84_clock_.h"

VL_INLINE_OPT void Vpic16f84_clock____sequent__TOP__0(Vpic16f84_clock_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_clock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_clock____sequent__TOP__0\n"); );
    // Body
    if ((((6U >= (IData)(vlSelf->vdd)) & (2U <= (IData)(vlSelf->vdd))) 
         & (0U == (IData)(vlSelf->vss)))) {
        if (vlSelf->mclr) {
            if ((2U & (IData)(vlSelf->pic16f84_clock__DOT__phase_counter))) {
                if ((1U & (IData)(vlSelf->pic16f84_clock__DOT__phase_counter))) {
                    vlSelf->q1 = 0U;
                    vlSelf->q2 = 0U;
                    vlSelf->q3 = 0U;
                    vlSelf->q4 = 1U;
                    vlSelf->clk_out = 1U;
                } else {
                    vlSelf->q1 = 0U;
                    vlSelf->q2 = 0U;
                    vlSelf->q3 = 1U;
                    vlSelf->q4 = 0U;
                    vlSelf->clk_out = 1U;
                }
            } else if ((1U & (IData)(vlSelf->pic16f84_clock__DOT__phase_counter))) {
                vlSelf->q1 = 0U;
                vlSelf->q2 = 1U;
                vlSelf->q3 = 0U;
                vlSelf->q4 = 0U;
                vlSelf->clk_out = 0U;
            } else {
                vlSelf->q1 = 1U;
                vlSelf->q2 = 0U;
                vlSelf->q3 = 0U;
                vlSelf->q4 = 0U;
                vlSelf->clk_out = 0U;
            }
            vlSelf->pic16f84_clock__DOT__phase_counter 
                = (3U & ((IData)(1U) + (IData)(vlSelf->pic16f84_clock__DOT__phase_counter)));
        } else {
            vlSelf->pic16f84_clock__DOT__phase_counter = 0U;
            vlSelf->q1 = 0U;
            vlSelf->q2 = 0U;
            vlSelf->q3 = 0U;
            vlSelf->q4 = 0U;
            vlSelf->clk_out = 0U;
        }
    } else {
        vlSelf->pic16f84_clock__DOT__phase_counter = 0U;
        vlSelf->q1 = 0U;
        vlSelf->q2 = 0U;
        vlSelf->q3 = 0U;
        vlSelf->q4 = 0U;
        vlSelf->clk_out = 0U;
    }
}

void Vpic16f84_clock____eval(Vpic16f84_clock_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_clock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_clock____eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vpic16f84_clock____sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vpic16f84_clock____eval_debug_assertions(Vpic16f84_clock_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_clock__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_clock____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->vdd & 0xf0U))) {
        Verilated::overWidthError("vdd");}
    if (VL_UNLIKELY((vlSelf->vss & 0xf0U))) {
        Verilated::overWidthError("vss");}
    if (VL_UNLIKELY((vlSelf->mclr & 0xfeU))) {
        Verilated::overWidthError("mclr");}
}
#endif  // VL_DEBUG
