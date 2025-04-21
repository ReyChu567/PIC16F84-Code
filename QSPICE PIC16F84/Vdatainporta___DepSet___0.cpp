// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdatainporta.h for the primary calling header

#include "verilated.h"

#include "Vdatainporta_.h"

VL_INLINE_OPT void Vdatainporta____combo__TOP__0(Vdatainporta_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatainporta__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatainporta____combo__TOP__0\n"); );
    // Body
    vlSelf->data_out = ((0xfU & (IData)(vlSelf->data_out)) 
                        | ((IData)(vlSelf->ra4) << 4U));
    vlSelf->data_out = ((0x10U & (IData)(vlSelf->data_out)) 
                        | (((IData)(vlSelf->ra3) << 3U) 
                           | (((IData)(vlSelf->ra2) 
                               << 2U) | (((IData)(vlSelf->ra1) 
                                          << 1U) | (IData)(vlSelf->ra0)))));
}

void Vdatainporta____eval(Vdatainporta_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatainporta__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatainporta____eval\n"); );
    // Body
    Vdatainporta____combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vdatainporta____eval_debug_assertions(Vdatainporta_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdatainporta__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdatainporta____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ra0 & 0xfeU))) {
        Verilated::overWidthError("ra0");}
    if (VL_UNLIKELY((vlSelf->ra1 & 0xfeU))) {
        Verilated::overWidthError("ra1");}
    if (VL_UNLIKELY((vlSelf->ra2 & 0xfeU))) {
        Verilated::overWidthError("ra2");}
    if (VL_UNLIKELY((vlSelf->ra3 & 0xfeU))) {
        Verilated::overWidthError("ra3");}
    if (VL_UNLIKELY((vlSelf->ra4 & 0xfeU))) {
        Verilated::overWidthError("ra4");}
}
#endif  // VL_DEBUG
