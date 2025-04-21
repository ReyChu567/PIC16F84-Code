// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvolt_x3.h for the primary calling header

#ifndef VERILATED_VVOLT_X3__H_
#define VERILATED_VVOLT_X3__H_  // guard

#include "verilated.h"

class Vvolt_x3__Syms;
VL_MODULE(Vvolt_x3_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(vdd,3,0);
    VL_IN8(in,0,0);
    VL_IN8(mclr,0,0);
    VL_IN8(q1,0,0);
    VL_OUT8(out,3,0);

    // INTERNAL VARIABLES
    Vvolt_x3__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvolt_x3_(Vvolt_x3__Syms* symsp, const char* name);
    ~Vvolt_x3_();
    VL_UNCOPYABLE(Vvolt_x3_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
