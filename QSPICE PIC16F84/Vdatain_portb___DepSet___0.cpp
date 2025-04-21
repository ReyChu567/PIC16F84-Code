// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatain_portb.h for the primary calling header

#include "verilated.h"

#include "Vdatain_portb_.h"

VL_INLINE_OPT void Vdatain_portb____combo__TOP__0(Vdatain_portb_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatain_portb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatain_portb____combo__TOP__0\n"); );
    // Body
    vlSelf->data_out = ((0xf0U & (IData)(vlSelf->data_out)) 
                        | (((IData)(vlSelf->rb3) << 3U) 
                           | (((IData)(vlSelf->rb2) 
                               << 2U) | (((IData)(vlSelf->rb1) 
                                          << 1U) | (IData)(vlSelf->rb0)))));
    vlSelf->data_out = ((0xfU & (IData)(vlSelf->data_out)) 
                        | (((IData)(vlSelf->rb7) << 7U) 
                           | (((IData)(vlSelf->rb6) 
                               << 6U) | (((IData)(vlSelf->rb5) 
                                          << 5U) | 
                                         ((IData)(vlSelf->rb4) 
                                          << 4U)))));
}

void Vdatain_portb____eval(Vdatain_portb_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatain_portb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatain_portb____eval\n"); );
    // Body
    Vdatain_portb____combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vdatain_portb____eval_debug_assertions(Vdatain_portb_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatain_portb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatain_portb____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rb0 & 0xfeU))) {
        Verilated::overWidthError("rb0");}
    if (VL_UNLIKELY((vlSelf->rb1 & 0xfeU))) {
        Verilated::overWidthError("rb1");}
    if (VL_UNLIKELY((vlSelf->rb2 & 0xfeU))) {
        Verilated::overWidthError("rb2");}
    if (VL_UNLIKELY((vlSelf->rb3 & 0xfeU))) {
        Verilated::overWidthError("rb3");}
    if (VL_UNLIKELY((vlSelf->rb4 & 0xfeU))) {
        Verilated::overWidthError("rb4");}
    if (VL_UNLIKELY((vlSelf->rb5 & 0xfeU))) {
        Verilated::overWidthError("rb5");}
    if (VL_UNLIKELY((vlSelf->rb6 & 0xfeU))) {
        Verilated::overWidthError("rb6");}
    if (VL_UNLIKELY((vlSelf->rb7 & 0xfeU))) {
        Verilated::overWidthError("rb7");}
}
#endif  // VL_DEBUG
