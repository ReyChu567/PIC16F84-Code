// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpic16f84_cpu.h for the primary calling header

#include "verilated.h"

#include "Vpic16f84_cpu_.h"

VL_ATTR_COLD void Vpic16f84_cpu____initial__TOP__0(Vpic16f84_cpu_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_cpu____initial__TOP__0\n"); );
    // Body
    vlSelf->pic16f84_cpu__DOT__c_out = 0U;
    vlSelf->pic16f84_cpu__DOT__tmp_cout = 0U;
    vlSelf->pic16f84_cpu__DOT__tmp_msbF = 0U;
    vlSelf->pic16f84_cpu__DOT__ALU_OUT = 0U;
    vlSelf->pic16f84_cpu__DOT__b = 0U;
    vlSelf->pic16f84_cpu__DOT__d = 0U;
    vlSelf->pic16f84_cpu__DOT__bit_b = 0U;
    vlSelf->pic16f84_cpu__DOT__F_REG = 0U;
    vlSelf->pic16f84_cpu__DOT__K_LITERAL = 0U;
    vlSelf->pic16f84_cpu__DOT__CALLnGOTO_LITERAL = 0U;
    vlSelf->pic16f84_cpu__DOT__F_ADDR = 0U;
    vlSelf->pic16f84_cpu__DOT__PC = 0U;
    vlSelf->pic16f84_cpu__DOT__bank1 = 0U;
    vlSelf->pic16f84_cpu__DOT__bank0 = 0U;
    vlSelf->pic16f84_cpu__DOT__dc_out = 0U;
    vlSelf->pic16f84_cpu__DOT__sp_out = 0U;
    vlSelf->pic16f84_cpu__DOT__W_REG = 0U;
    vlSelf->pic16f84_cpu__DOT__sp = 0U;
    vlSelf->pic16f84_cpu__DOT__data_memory[0U] = 0U;
    vlSelf->pic16f84_cpu__DOT__data_memory[0x81U] = 0xffU;
    vlSelf->pic16f84_cpu__DOT__data_memory[2U] = 0U;
    vlSelf->pic16f84_cpu__DOT__data_memory[3U] = (0x18U 
                                                  | (7U 
                                                     & vlSelf->pic16f84_cpu__DOT__data_memory
                                                     [3U]));
    vlSelf->pic16f84_cpu__DOT__data_memory[4U] = 0U;
    vlSelf->pic16f84_cpu__DOT__data_memory[5U] = (0x1fU 
                                                  & vlSelf->pic16f84_cpu__DOT__data_memory
                                                  [5U]);
    vlSelf->pic16f84_cpu__DOT__data_memory[0x85U] = 0x1fU;
    vlSelf->pic16f84_cpu__DOT__data_memory[0x86U] = 0xffU;
    vlSelf->pic16f84_cpu__DOT__data_memory[0x88U] = 
        (0xfU & vlSelf->pic16f84_cpu__DOT__data_memory
         [0x88U]);
    vlSelf->pic16f84_cpu__DOT__data_memory[0x88U] = 
        (0xf8U & vlSelf->pic16f84_cpu__DOT__data_memory
         [0x88U]);
    vlSelf->pic16f84_cpu__DOT__data_memory[0x89U] = 0U;
    vlSelf->pic16f84_cpu__DOT__data_memory[0xaU] = 0U;
    vlSelf->pic16f84_cpu__DOT__data_memory[0xbU] = 
        (1U & vlSelf->pic16f84_cpu__DOT__data_memory
         [0xbU]);
    vlSelf->nop_out = 0U;
}

VL_ATTR_COLD void Vpic16f84_cpu____eval_initial(Vpic16f84_cpu_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_cpu____eval_initial\n"); );
    // Body
    Vpic16f84_cpu____initial__TOP__0(vlSelf);
}

void Vpic16f84_cpu____combo__TOP__0(Vpic16f84_cpu_* vlSelf);

VL_ATTR_COLD void Vpic16f84_cpu____eval_settle(Vpic16f84_cpu_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_cpu____eval_settle\n"); );
    // Body
    Vpic16f84_cpu____combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vpic16f84_cpu____final(Vpic16f84_cpu_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_cpu____final\n"); );
}

VL_ATTR_COLD void Vpic16f84_cpu____ctor_var_reset(Vpic16f84_cpu_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_cpu____ctor_var_reset\n"); );
    // Body
    vlSelf->q1 = VL_RAND_RESET_I(1);
    vlSelf->q2 = VL_RAND_RESET_I(1);
    vlSelf->q3 = VL_RAND_RESET_I(1);
    vlSelf->q4 = VL_RAND_RESET_I(1);
    vlSelf->op_code = VL_RAND_RESET_I(14);
    vlSelf->port_a_data_in = VL_RAND_RESET_I(5);
    vlSelf->port_b_data_in = VL_RAND_RESET_I(8);
    vlSelf->mclr = VL_RAND_RESET_I(1);
    vlSelf->pc_out = VL_RAND_RESET_I(13);
    vlSelf->nop_out = VL_RAND_RESET_I(1);
    vlSelf->port_a_tris = VL_RAND_RESET_I(5);
    vlSelf->port_a_data_out = VL_RAND_RESET_I(5);
    vlSelf->port_b_tris = VL_RAND_RESET_I(8);
    vlSelf->port_b_data_out = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_cpu__DOT__ADDWF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__ANDWF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__CLR = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__COMF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__DECF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__INCF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__IORWF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__MOVF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__MOVWF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__RLF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__RRF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__SUBWF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__SWAPF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__XORWF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__DECFSZ = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__INCFSZ = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__NOP = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__BCF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__BSF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__BTFSC = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__BTFSS = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__XORLW = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__ANDLW = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__IORLW = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__ADDLW = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__SUBLW = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__MOVLW = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__GOTO = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__CALL = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__CLRWDT = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__RETURN = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__RETFIE = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__RETLW = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__SLEEP = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->pic16f84_cpu__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->pic16f84_cpu__DOT__c_out = VL_RAND_RESET_I(9);
    vlSelf->pic16f84_cpu__DOT__tmp_cout = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__tmp_msbF = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__ALU_OUT = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_cpu__DOT__b = VL_RAND_RESET_I(3);
    vlSelf->pic16f84_cpu__DOT__d = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__bit_b = VL_RAND_RESET_I(1);
    vlSelf->pic16f84_cpu__DOT__F_REG = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_cpu__DOT__W_REG = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_cpu__DOT__K_LITERAL = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_cpu__DOT__CALLnGOTO_LITERAL = VL_RAND_RESET_I(11);
    vlSelf->pic16f84_cpu__DOT__F_ADDR = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_cpu__DOT__PC = VL_RAND_RESET_I(13);
    vlSelf->pic16f84_cpu__DOT__bank1 = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_cpu__DOT__bank0 = VL_RAND_RESET_I(8);
    vlSelf->pic16f84_cpu__DOT__dc_out = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->pic16f84_cpu__DOT__STACK[__Vi0] = VL_RAND_RESET_I(13);
    }
    vlSelf->pic16f84_cpu__DOT__sp = VL_RAND_RESET_I(3);
    vlSelf->pic16f84_cpu__DOT__sp_out = VL_RAND_RESET_I(3);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__W_REG = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__sp = VL_RAND_RESET_I(3);
}
