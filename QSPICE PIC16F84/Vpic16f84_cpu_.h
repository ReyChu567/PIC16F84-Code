// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpic16f84_cpu.h for the primary calling header

#ifndef VERILATED_VPIC16F84_CPU__H_
#define VERILATED_VPIC16F84_CPU__H_  // guard

#include "verilated.h"

class Vpic16f84_cpu__Syms;
VL_MODULE(Vpic16f84_cpu_) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(q1,0,0);
        VL_IN8(q2,0,0);
        VL_IN8(q3,0,0);
        VL_IN8(q4,0,0);
        VL_IN8(port_a_data_in,4,0);
        VL_IN8(port_b_data_in,7,0);
        VL_IN8(mclr,0,0);
        VL_OUT8(nop_out,0,0);
        VL_OUT8(port_a_tris,4,0);
        VL_OUT8(port_a_data_out,4,0);
        VL_OUT8(port_b_tris,7,0);
        VL_OUT8(port_b_data_out,7,0);
        CData/*0:0*/ pic16f84_cpu__DOT__ADDWF;
        CData/*0:0*/ pic16f84_cpu__DOT__ANDWF;
        CData/*0:0*/ pic16f84_cpu__DOT__CLR;
        CData/*0:0*/ pic16f84_cpu__DOT__COMF;
        CData/*0:0*/ pic16f84_cpu__DOT__DECF;
        CData/*0:0*/ pic16f84_cpu__DOT__INCF;
        CData/*0:0*/ pic16f84_cpu__DOT__IORWF;
        CData/*0:0*/ pic16f84_cpu__DOT__MOVF;
        CData/*0:0*/ pic16f84_cpu__DOT__MOVWF;
        CData/*0:0*/ pic16f84_cpu__DOT__RLF;
        CData/*0:0*/ pic16f84_cpu__DOT__RRF;
        CData/*0:0*/ pic16f84_cpu__DOT__SUBWF;
        CData/*0:0*/ pic16f84_cpu__DOT__SWAPF;
        CData/*0:0*/ pic16f84_cpu__DOT__XORWF;
        CData/*0:0*/ pic16f84_cpu__DOT__DECFSZ;
        CData/*0:0*/ pic16f84_cpu__DOT__INCFSZ;
        CData/*0:0*/ pic16f84_cpu__DOT__NOP;
        CData/*0:0*/ pic16f84_cpu__DOT__BCF;
        CData/*0:0*/ pic16f84_cpu__DOT__BSF;
        CData/*0:0*/ pic16f84_cpu__DOT__BTFSC;
        CData/*0:0*/ pic16f84_cpu__DOT__BTFSS;
        CData/*0:0*/ pic16f84_cpu__DOT__XORLW;
        CData/*0:0*/ pic16f84_cpu__DOT__ANDLW;
        CData/*0:0*/ pic16f84_cpu__DOT__IORLW;
        CData/*0:0*/ pic16f84_cpu__DOT__ADDLW;
        CData/*0:0*/ pic16f84_cpu__DOT__SUBLW;
        CData/*0:0*/ pic16f84_cpu__DOT__MOVLW;
        CData/*0:0*/ pic16f84_cpu__DOT__GOTO;
        CData/*0:0*/ pic16f84_cpu__DOT__CALL;
        CData/*0:0*/ pic16f84_cpu__DOT__CLRWDT;
        CData/*0:0*/ pic16f84_cpu__DOT__RETURN;
        CData/*0:0*/ pic16f84_cpu__DOT__RETFIE;
        CData/*0:0*/ pic16f84_cpu__DOT__RETLW;
        CData/*0:0*/ pic16f84_cpu__DOT__SLEEP;
        CData/*0:0*/ pic16f84_cpu__DOT__tmp_cout;
        CData/*0:0*/ pic16f84_cpu__DOT__tmp_msbF;
        CData/*7:0*/ pic16f84_cpu__DOT__ALU_OUT;
        CData/*2:0*/ pic16f84_cpu__DOT__b;
        CData/*0:0*/ pic16f84_cpu__DOT__d;
        CData/*0:0*/ pic16f84_cpu__DOT__bit_b;
        CData/*7:0*/ pic16f84_cpu__DOT__F_REG;
        CData/*7:0*/ pic16f84_cpu__DOT__W_REG;
        CData/*7:0*/ pic16f84_cpu__DOT__K_LITERAL;
        CData/*7:0*/ pic16f84_cpu__DOT__F_ADDR;
        CData/*7:0*/ pic16f84_cpu__DOT__bank1;
        CData/*7:0*/ pic16f84_cpu__DOT__bank0;
        CData/*4:0*/ pic16f84_cpu__DOT__dc_out;
        CData/*2:0*/ pic16f84_cpu__DOT__sp;
        CData/*2:0*/ pic16f84_cpu__DOT__sp_out;
        CData/*7:0*/ __Vchglast__TOP__pic16f84_cpu__DOT__W_REG;
        CData/*2:0*/ __Vchglast__TOP__pic16f84_cpu__DOT__sp;
        VL_IN16(op_code,13,0);
    };
    struct {
        VL_OUT16(pc_out,12,0);
        SData/*8:0*/ pic16f84_cpu__DOT__c_out;
        SData/*10:0*/ pic16f84_cpu__DOT__CALLnGOTO_LITERAL;
        SData/*12:0*/ pic16f84_cpu__DOT__PC;
        VlUnpacked<CData/*7:0*/, 256> pic16f84_cpu__DOT__data_memory;
        VlUnpacked<SData/*12:0*/, 8> pic16f84_cpu__DOT__STACK;
        VlUnpacked<CData/*7:0*/, 256> __Vchglast__TOP__pic16f84_cpu__DOT__data_memory;
    };

    // INTERNAL VARIABLES
    Vpic16f84_cpu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpic16f84_cpu_(Vpic16f84_cpu__Syms* symsp, const char* name);
    ~Vpic16f84_cpu_();
    VL_UNCOPYABLE(Vpic16f84_cpu_);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
