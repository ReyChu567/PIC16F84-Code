// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdatainporta.h for the primary calling header

#ifndef VERILATED_VDATAINPORTA__H_
#define VERILATED_VDATAINPORTA__H_  // guard

#include "verilated.h"

class Vdatainporta__Syms;
VL_MODULE(Vdatainporta_) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(ra0,0,0);
    VL_IN8(ra1,0,0);
    VL_IN8(ra2,0,0);
    VL_IN8(ra3,0,0);
    VL_IN8(ra4,0,0);
    VL_OUT8(data_out,4,0);

    // INTERNAL VARIABLES
    Vdatainporta__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdatainporta_(Vdatainporta__Syms* symsp, const char* name);
    ~Vdatainporta_();
    VL_UNCOPYABLE(Vdatainporta_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
