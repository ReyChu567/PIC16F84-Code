// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpic16f84_clock.h for the primary calling header

#ifndef VERILATED_VPIC16F84_CLOCK__H_
#define VERILATED_VPIC16F84_CLOCK__H_  // guard

#include "verilated.h"

class Vpic16f84_clock__Syms;
VL_MODULE(Vpic16f84_clock_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(vdd,3,0);
    VL_IN8(vss,3,0);
    VL_IN8(mclr,0,0);
    VL_OUT8(q1,0,0);
    VL_OUT8(q2,0,0);
    VL_OUT8(q3,0,0);
    VL_OUT8(q4,0,0);
    VL_OUT8(clk_out,0,0);
    CData/*1:0*/ pic16f84_clock__DOT__phase_counter;
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    Vpic16f84_clock__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpic16f84_clock_(Vpic16f84_clock__Syms* symsp, const char* name);
    ~Vpic16f84_clock_();
    VL_UNCOPYABLE(Vpic16f84_clock_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
