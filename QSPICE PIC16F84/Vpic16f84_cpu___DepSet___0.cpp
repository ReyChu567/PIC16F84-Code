// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpic16f84_cpu.h for the primary calling header

#include "verilated.h"

#include "Vpic16f84_cpu_.h"

VL_INLINE_OPT void Vpic16f84_cpu____combo__TOP__0(Vpic16f84_cpu_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_cpu____combo__TOP__0\n"); );
    // Body
    if (vlSelf->mclr) {
        if ((1U == (((IData)(vlSelf->q4) << 3U) | (
                                                   ((IData)(vlSelf->q3) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->q2) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->q1)))))) {
            vlSelf->pic16f84_cpu__DOT__PC = ((0x1f00U 
                                              & (vlSelf->pic16f84_cpu__DOT__data_memory
                                                 [0xaU] 
                                                 << 8U)) 
                                             | vlSelf->pic16f84_cpu__DOT__data_memory
                                             [2U]);
            vlSelf->pic16f84_cpu__DOT__NOP = (IData)(
                                                     (0U 
                                                      == 
                                                      (0x3f9fU 
                                                       & (IData)(vlSelf->op_code))));
            vlSelf->pic16f84_cpu__DOT__ADDLW = (0x1fU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 9U)));
            vlSelf->pic16f84_cpu__DOT__ANDLW = (0x39U 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 8U)));
            vlSelf->pic16f84_cpu__DOT__IORLW = (0x38U 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 8U)));
            vlSelf->pic16f84_cpu__DOT__MOVLW = (0xcU 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 0xaU)));
            vlSelf->pic16f84_cpu__DOT__SUBLW = (0x1eU 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 9U)));
            vlSelf->pic16f84_cpu__DOT__XORLW = (0x3aU 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 8U)));
            vlSelf->pic16f84_cpu__DOT__GOTO = (5U == 
                                               (7U 
                                                & ((IData)(vlSelf->op_code) 
                                                   >> 0xbU)));
            vlSelf->pic16f84_cpu__DOT__CALL = (4U == 
                                               (7U 
                                                & ((IData)(vlSelf->op_code) 
                                                   >> 0xbU)));
            vlSelf->pic16f84_cpu__DOT__RETURN = (8U 
                                                 == (IData)(vlSelf->op_code));
            vlSelf->pic16f84_cpu__DOT__CLRWDT = (0x64U 
                                                 == (IData)(vlSelf->op_code));
            vlSelf->pic16f84_cpu__DOT__RETFIE = (9U 
                                                 == (IData)(vlSelf->op_code));
            vlSelf->pic16f84_cpu__DOT__RETLW = (0xdU 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 0xaU)));
            vlSelf->pic16f84_cpu__DOT__SLEEP = (0x63U 
                                                == (IData)(vlSelf->op_code));
            vlSelf->pc_out = vlSelf->pic16f84_cpu__DOT__PC;
            vlSelf->pic16f84_cpu__DOT__PC = (0x1fffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->pic16f84_cpu__DOT__PC)));
            vlSelf->port_a_tris = (0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                   [0x85U]);
            vlSelf->port_b_tris = vlSelf->pic16f84_cpu__DOT__data_memory
                [0x86U];
            vlSelf->pic16f84_cpu__DOT__ADDWF = (7U 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 8U)));
            vlSelf->pic16f84_cpu__DOT__SUBWF = (2U 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 8U)));
            vlSelf->pic16f84_cpu__DOT__ANDWF = (5U 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 8U)));
            vlSelf->pic16f84_cpu__DOT__COMF = (9U == 
                                               (0x3fU 
                                                & ((IData)(vlSelf->op_code) 
                                                   >> 8U)));
            vlSelf->pic16f84_cpu__DOT__DECF = (3U == 
                                               (0x3fU 
                                                & ((IData)(vlSelf->op_code) 
                                                   >> 8U)));
            vlSelf->pic16f84_cpu__DOT__INCF = (0xaU 
                                               == (0x3fU 
                                                   & ((IData)(vlSelf->op_code) 
                                                      >> 8U)));
            vlSelf->pic16f84_cpu__DOT__IORWF = (4U 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 8U)));
            vlSelf->pic16f84_cpu__DOT__MOVF = (8U == 
                                               (0x3fU 
                                                & ((IData)(vlSelf->op_code) 
                                                   >> 8U)));
            vlSelf->pic16f84_cpu__DOT__MOVWF = (1U 
                                                == 
                                                (0x7fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 7U)));
            vlSelf->pic16f84_cpu__DOT__RLF = (0xdU 
                                              == (0x3fU 
                                                  & ((IData)(vlSelf->op_code) 
                                                     >> 8U)));
            vlSelf->pic16f84_cpu__DOT__RRF = (0xcU 
                                              == (0x3fU 
                                                  & ((IData)(vlSelf->op_code) 
                                                     >> 8U)));
            vlSelf->pic16f84_cpu__DOT__SWAPF = (0xeU 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 8U)));
            vlSelf->pic16f84_cpu__DOT__CLR = (1U == 
                                              (0x3fU 
                                               & ((IData)(vlSelf->op_code) 
                                                  >> 8U)));
            vlSelf->pic16f84_cpu__DOT__XORWF = (6U 
                                                == 
                                                (0x3fU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 8U)));
            vlSelf->pic16f84_cpu__DOT__DECFSZ = (0xbU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSelf->op_code) 
                                                     >> 8U)));
            vlSelf->pic16f84_cpu__DOT__INCFSZ = (0xfU 
                                                 == 
                                                 (0x3fU 
                                                  & ((IData)(vlSelf->op_code) 
                                                     >> 8U)));
            vlSelf->pic16f84_cpu__DOT__BCF = (4U == 
                                              (0xfU 
                                               & ((IData)(vlSelf->op_code) 
                                                  >> 0xaU)));
            vlSelf->pic16f84_cpu__DOT__BSF = (5U == 
                                              (0xfU 
                                               & ((IData)(vlSelf->op_code) 
                                                  >> 0xaU)));
            vlSelf->pic16f84_cpu__DOT__BTFSC = (6U 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 0xaU)));
            vlSelf->pic16f84_cpu__DOT__BTFSS = (7U 
                                                == 
                                                (0xfU 
                                                 & ((IData)(vlSelf->op_code) 
                                                    >> 0xaU)));
            if (((((((((((((((((IData)(vlSelf->pic16f84_cpu__DOT__ADDWF) 
                               | (IData)(vlSelf->pic16f84_cpu__DOT__SUBWF)) 
                              | (IData)(vlSelf->pic16f84_cpu__DOT__ANDWF)) 
                             | (IData)(vlSelf->pic16f84_cpu__DOT__COMF)) 
                            | (IData)(vlSelf->pic16f84_cpu__DOT__DECF)) 
                           | (IData)(vlSelf->pic16f84_cpu__DOT__INCF)) 
                          | (IData)(vlSelf->pic16f84_cpu__DOT__IORWF)) 
                         | (IData)(vlSelf->pic16f84_cpu__DOT__MOVF)) 
                        | (IData)(vlSelf->pic16f84_cpu__DOT__MOVWF)) 
                       | (IData)(vlSelf->pic16f84_cpu__DOT__SWAPF)) 
                      | (IData)(vlSelf->pic16f84_cpu__DOT__CLR)) 
                     | (IData)(vlSelf->pic16f84_cpu__DOT__XORWF)) 
                    | (IData)(vlSelf->pic16f84_cpu__DOT__DECFSZ)) 
                   | (IData)(vlSelf->pic16f84_cpu__DOT__INCFSZ)) 
                  | (IData)(vlSelf->pic16f84_cpu__DOT__RLF)) 
                 | (IData)(vlSelf->pic16f84_cpu__DOT__RRF))) {
                vlSelf->pic16f84_cpu__DOT__d = (1U 
                                                & ((IData)(vlSelf->op_code) 
                                                   >> 7U));
                vlSelf->pic16f84_cpu__DOT__F_ADDR = 
                    (0x7fU & (IData)(vlSelf->op_code));
            } else if (((((IData)(vlSelf->pic16f84_cpu__DOT__BCF) 
                          | (IData)(vlSelf->pic16f84_cpu__DOT__BSF)) 
                         | (IData)(vlSelf->pic16f84_cpu__DOT__BTFSC)) 
                        | (IData)(vlSelf->pic16f84_cpu__DOT__BTFSS))) {
                vlSelf->pic16f84_cpu__DOT__b = (7U 
                                                & ((IData)(vlSelf->op_code) 
                                                   >> 7U));
                vlSelf->pic16f84_cpu__DOT__F_ADDR = 
                    (0x7fU & (IData)(vlSelf->op_code));
            }
            if ((0x20U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [3U])) {
                vlSelf->pic16f84_cpu__DOT__F_ADDR = 
                    (0xffU & ((IData)(0x80U) + (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)));
                vlSelf->pic16f84_cpu__DOT__bank1 = vlSelf->pic16f84_cpu__DOT__F_ADDR;
            } else if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                                 [3U] >> 5U)))) {
                vlSelf->pic16f84_cpu__DOT__bank0 = vlSelf->pic16f84_cpu__DOT__F_ADDR;
            }
            if (((((((0U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                     | (2U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                    | (3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                   | (4U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                  | (0xaU == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                 | (0xbU == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))) {
                vlSelf->pic16f84_cpu__DOT__bank1 = 
                    (0xffU & ((IData)(0x80U) + (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)));
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__bank1] 
                    = vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
            }
            if (((((((0x80U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                     | (0x82U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                    | (0x83U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                   | (0x84U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                  | (0x8aU == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                 | (0x8bU == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))) {
                vlSelf->pic16f84_cpu__DOT__bank0 = 
                    (0xffU & ((IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR) 
                              - (IData)(0x80U)));
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__bank0] 
                    = vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
            }
            if (((0xcU <= (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                 & (0x4fU >= (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))) {
                vlSelf->pic16f84_cpu__DOT__bank1 = 
                    (0xffU & ((IData)(0x80U) + (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)));
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__bank1] 
                    = vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
            }
            if (((0x8cU <= (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                 & (0xcfU >= (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))) {
                vlSelf->pic16f84_cpu__DOT__bank0 = 
                    (0xffU & ((IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR) 
                              - (IData)(0x80U)));
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__bank0] 
                    = vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
            }
        } else if ((2U == (((IData)(vlSelf->q4) << 3U) 
                           | (((IData)(vlSelf->q3) 
                               << 2U) | (((IData)(vlSelf->q2) 
                                          << 1U) | (IData)(vlSelf->q1)))))) {
            vlSelf->pic16f84_cpu__DOT__data_memory[0xaU] 
                = ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                    [0xaU]) | (0x1fU & ((IData)(vlSelf->pic16f84_cpu__DOT__PC) 
                                        >> 8U)));
            if ((((((((IData)(vlSelf->pic16f84_cpu__DOT__ADDLW) 
                      | (IData)(vlSelf->pic16f84_cpu__DOT__ANDLW)) 
                     | (IData)(vlSelf->pic16f84_cpu__DOT__IORLW)) 
                    | (IData)(vlSelf->pic16f84_cpu__DOT__MOVLW)) 
                   | (IData)(vlSelf->pic16f84_cpu__DOT__SUBLW)) 
                  | (IData)(vlSelf->pic16f84_cpu__DOT__XORLW)) 
                 | (IData)(vlSelf->pic16f84_cpu__DOT__RETLW))) {
                vlSelf->pic16f84_cpu__DOT__K_LITERAL 
                    = (0xffU & (IData)(vlSelf->op_code));
            } else if (vlSelf->pic16f84_cpu__DOT__GOTO) {
                vlSelf->pic16f84_cpu__DOT__CALLnGOTO_LITERAL 
                    = (0x7ffU & (IData)(vlSelf->op_code));
            } else if (vlSelf->pic16f84_cpu__DOT__CALL) {
                vlSelf->pic16f84_cpu__DOT__CALLnGOTO_LITERAL 
                    = (0x7ffU & (IData)(vlSelf->op_code));
                vlSelf->pic16f84_cpu__DOT__STACK[vlSelf->pic16f84_cpu__DOT__sp] 
                    = (0x1fffU & ((IData)(vlSelf->pic16f84_cpu__DOT__PC) 
                                  - (IData)(1U)));
                vlSelf->pic16f84_cpu__DOT__sp_out = 
                    (7U & ((IData)(1U) + (IData)(vlSelf->pic16f84_cpu__DOT__sp)));
            }
            vlSelf->pic16f84_cpu__DOT__data_memory[2U] 
                = (0xffU & (IData)(vlSelf->pic16f84_cpu__DOT__PC));
            if ((1U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x85U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[5U] 
                    = ((0xfeU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [5U]) | (1U & (IData)(vlSelf->port_a_data_in)));
            }
            if ((2U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x85U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[5U] 
                    = ((0xfdU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [5U]) | (2U & (IData)(vlSelf->port_a_data_in)));
            }
            if ((4U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x85U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[5U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [5U]) | (4U & (IData)(vlSelf->port_a_data_in)));
            }
            if ((8U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x85U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[5U] 
                    = ((0xf7U & vlSelf->pic16f84_cpu__DOT__data_memory
                        [5U]) | (8U & (IData)(vlSelf->port_a_data_in)));
            }
            if ((0x10U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x85U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[5U] 
                    = ((0xefU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [5U]) | (0x10U & (IData)(vlSelf->port_a_data_in)));
            }
            if ((1U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x86U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[6U] 
                    = ((0xfeU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [6U]) | (1U & (IData)(vlSelf->port_b_data_in)));
            }
            if ((2U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x86U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[6U] 
                    = ((0xfdU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [6U]) | (2U & (IData)(vlSelf->port_b_data_in)));
            }
            if ((4U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x86U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[6U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [6U]) | (4U & (IData)(vlSelf->port_b_data_in)));
            }
            if ((8U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x86U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[6U] 
                    = ((0xf7U & vlSelf->pic16f84_cpu__DOT__data_memory
                        [6U]) | (8U & (IData)(vlSelf->port_b_data_in)));
            }
            if ((0x10U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x86U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[6U] 
                    = ((0xefU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [6U]) | (0x10U & (IData)(vlSelf->port_b_data_in)));
            }
            if ((0x20U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x86U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[6U] 
                    = ((0xdfU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [6U]) | (0x20U & (IData)(vlSelf->port_b_data_in)));
            }
            if ((0x40U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x86U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[6U] 
                    = ((0xbfU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [6U]) | (0x40U & (IData)(vlSelf->port_b_data_in)));
            }
            if ((0x80U & vlSelf->pic16f84_cpu__DOT__data_memory
                 [0x86U])) {
                vlSelf->pic16f84_cpu__DOT__data_memory[6U] 
                    = ((0x7fU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [6U]) | (0x80U & (IData)(vlSelf->port_b_data_in)));
            }
            if (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                 | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))) {
                if (((((((((((((((IData)(vlSelf->pic16f84_cpu__DOT__ADDWF) 
                                 | (IData)(vlSelf->pic16f84_cpu__DOT__SUBWF)) 
                                | (IData)(vlSelf->pic16f84_cpu__DOT__ANDWF)) 
                               | (IData)(vlSelf->pic16f84_cpu__DOT__COMF)) 
                              | (IData)(vlSelf->pic16f84_cpu__DOT__DECF)) 
                             | (IData)(vlSelf->pic16f84_cpu__DOT__INCF)) 
                            | (IData)(vlSelf->pic16f84_cpu__DOT__IORWF)) 
                           | (IData)(vlSelf->pic16f84_cpu__DOT__MOVF)) 
                          | (IData)(vlSelf->pic16f84_cpu__DOT__MOVWF)) 
                         | (IData)(vlSelf->pic16f84_cpu__DOT__SWAPF)) 
                        | (IData)(vlSelf->pic16f84_cpu__DOT__CLR)) 
                       | (IData)(vlSelf->pic16f84_cpu__DOT__XORWF)) 
                      | (IData)(vlSelf->pic16f84_cpu__DOT__DECFSZ)) 
                     | (IData)(vlSelf->pic16f84_cpu__DOT__INCFSZ))) {
                    vlSelf->pic16f84_cpu__DOT__F_REG 
                        = (0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                           [vlSelf->pic16f84_cpu__DOT__F_ADDR]);
                } else if (vlSelf->pic16f84_cpu__DOT__RLF) {
                    vlSelf->pic16f84_cpu__DOT__F_REG 
                        = (0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                           [vlSelf->pic16f84_cpu__DOT__F_ADDR]);
                    vlSelf->pic16f84_cpu__DOT__tmp_cout 
                        = (1U & vlSelf->pic16f84_cpu__DOT__data_memory
                           [3U]);
                    vlSelf->pic16f84_cpu__DOT__tmp_msbF 
                        = (1U & ((IData)(vlSelf->pic16f84_cpu__DOT__F_REG) 
                                 >> 7U));
                } else if (vlSelf->pic16f84_cpu__DOT__RRF) {
                    vlSelf->pic16f84_cpu__DOT__F_REG 
                        = (0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                           [vlSelf->pic16f84_cpu__DOT__F_ADDR]);
                    vlSelf->pic16f84_cpu__DOT__tmp_cout 
                        = (1U & vlSelf->pic16f84_cpu__DOT__data_memory
                           [3U]);
                    vlSelf->pic16f84_cpu__DOT__tmp_msbF 
                        = (1U & (IData)(vlSelf->pic16f84_cpu__DOT__F_REG));
                } else if (((((IData)(vlSelf->pic16f84_cpu__DOT__BCF) 
                              | (IData)(vlSelf->pic16f84_cpu__DOT__BSF)) 
                             | (IData)(vlSelf->pic16f84_cpu__DOT__BTFSC)) 
                            | (IData)(vlSelf->pic16f84_cpu__DOT__BTFSS))) {
                    vlSelf->pic16f84_cpu__DOT__F_REG 
                        = vlSelf->pic16f84_cpu__DOT__data_memory
                        [vlSelf->pic16f84_cpu__DOT__F_ADDR];
                }
            } else if (((((((((((((((IData)(vlSelf->pic16f84_cpu__DOT__ADDWF) 
                                    | (IData)(vlSelf->pic16f84_cpu__DOT__SUBWF)) 
                                   | (IData)(vlSelf->pic16f84_cpu__DOT__ANDWF)) 
                                  | (IData)(vlSelf->pic16f84_cpu__DOT__COMF)) 
                                 | (IData)(vlSelf->pic16f84_cpu__DOT__DECF)) 
                                | (IData)(vlSelf->pic16f84_cpu__DOT__INCF)) 
                               | (IData)(vlSelf->pic16f84_cpu__DOT__IORWF)) 
                              | (IData)(vlSelf->pic16f84_cpu__DOT__MOVF)) 
                             | (IData)(vlSelf->pic16f84_cpu__DOT__MOVWF)) 
                            | (IData)(vlSelf->pic16f84_cpu__DOT__SWAPF)) 
                           | (IData)(vlSelf->pic16f84_cpu__DOT__CLR)) 
                          | (IData)(vlSelf->pic16f84_cpu__DOT__XORWF)) 
                         | (IData)(vlSelf->pic16f84_cpu__DOT__DECFSZ)) 
                        | (IData)(vlSelf->pic16f84_cpu__DOT__INCFSZ))) {
                vlSelf->pic16f84_cpu__DOT__F_REG = 
                    vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
            } else if (vlSelf->pic16f84_cpu__DOT__RLF) {
                vlSelf->pic16f84_cpu__DOT__F_REG = 
                    vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
                vlSelf->pic16f84_cpu__DOT__tmp_cout 
                    = (1U & vlSelf->pic16f84_cpu__DOT__data_memory
                       [3U]);
                vlSelf->pic16f84_cpu__DOT__tmp_msbF 
                    = (1U & ((IData)(vlSelf->pic16f84_cpu__DOT__F_REG) 
                             >> 7U));
            } else if (vlSelf->pic16f84_cpu__DOT__RRF) {
                vlSelf->pic16f84_cpu__DOT__F_REG = 
                    vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
                vlSelf->pic16f84_cpu__DOT__tmp_cout 
                    = (1U & vlSelf->pic16f84_cpu__DOT__data_memory
                       [3U]);
                vlSelf->pic16f84_cpu__DOT__tmp_msbF 
                    = (1U & (IData)(vlSelf->pic16f84_cpu__DOT__F_REG));
            } else if (((((IData)(vlSelf->pic16f84_cpu__DOT__BCF) 
                          | (IData)(vlSelf->pic16f84_cpu__DOT__BSF)) 
                         | (IData)(vlSelf->pic16f84_cpu__DOT__BTFSC)) 
                        | (IData)(vlSelf->pic16f84_cpu__DOT__BTFSS))) {
                vlSelf->pic16f84_cpu__DOT__F_REG = 
                    vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
            }
        } else if ((4U == (((IData)(vlSelf->q4) << 3U) 
                           | (((IData)(vlSelf->q3) 
                               << 2U) | (((IData)(vlSelf->q2) 
                                          << 1U) | (IData)(vlSelf->q1)))))) {
            if (vlSelf->pic16f84_cpu__DOT__ADDWF) {
                vlSelf->pic16f84_cpu__DOT__c_out = 
                    (0x1ffU & ((IData)(vlSelf->pic16f84_cpu__DOT__W_REG) 
                               + (IData)(vlSelf->pic16f84_cpu__DOT__F_REG)));
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = (0xffU & (IData)(vlSelf->pic16f84_cpu__DOT__c_out));
                vlSelf->pic16f84_cpu__DOT__dc_out = 
                    (0x1fU & ((0xfU & (IData)(vlSelf->pic16f84_cpu__DOT__W_REG)) 
                              + (0xfU & (IData)(vlSelf->pic16f84_cpu__DOT__F_REG))));
            } else if (vlSelf->pic16f84_cpu__DOT__SUBWF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = (0xffU & ((IData)(vlSelf->pic16f84_cpu__DOT__F_REG) 
                                - (IData)(vlSelf->pic16f84_cpu__DOT__W_REG)));
            } else if (vlSelf->pic16f84_cpu__DOT__ANDWF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((IData)(vlSelf->pic16f84_cpu__DOT__W_REG) 
                       & (IData)(vlSelf->pic16f84_cpu__DOT__F_REG));
            } else if (vlSelf->pic16f84_cpu__DOT__COMF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = (0xffU & (~ (IData)(vlSelf->pic16f84_cpu__DOT__F_REG)));
            } else if (((IData)(vlSelf->pic16f84_cpu__DOT__DECF) 
                        | (IData)(vlSelf->pic16f84_cpu__DOT__DECFSZ))) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = (0xffU & ((IData)(vlSelf->pic16f84_cpu__DOT__F_REG) 
                                - (IData)(1U)));
            } else if (((IData)(vlSelf->pic16f84_cpu__DOT__INCF) 
                        | (IData)(vlSelf->pic16f84_cpu__DOT__INCFSZ))) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->pic16f84_cpu__DOT__F_REG)));
            } else if (vlSelf->pic16f84_cpu__DOT__IORWF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((IData)(vlSelf->pic16f84_cpu__DOT__W_REG) 
                       | (IData)(vlSelf->pic16f84_cpu__DOT__F_REG));
            } else if (vlSelf->pic16f84_cpu__DOT__MOVF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = vlSelf->pic16f84_cpu__DOT__F_REG;
            } else if (vlSelf->pic16f84_cpu__DOT__MOVWF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = vlSelf->pic16f84_cpu__DOT__W_REG;
            } else if (vlSelf->pic16f84_cpu__DOT__RLF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = (0xffU & ((IData)(vlSelf->pic16f84_cpu__DOT__F_REG) 
                                << 1U));
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((0xfeU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                       | (IData)(vlSelf->pic16f84_cpu__DOT__tmp_cout));
            } else if (vlSelf->pic16f84_cpu__DOT__RRF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = (0xffU & ((IData)(vlSelf->pic16f84_cpu__DOT__F_REG) 
                                >> 1U));
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((0x7fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                       | ((IData)(vlSelf->pic16f84_cpu__DOT__tmp_cout) 
                          << 7U));
            } else if (vlSelf->pic16f84_cpu__DOT__SWAPF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((0xf0U & ((IData)(vlSelf->pic16f84_cpu__DOT__F_REG) 
                                 << 4U)) | (0xfU & 
                                            ((IData)(vlSelf->pic16f84_cpu__DOT__F_REG) 
                                             >> 4U)));
            } else if (vlSelf->pic16f84_cpu__DOT__CLR) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT = 0U;
            } else if (vlSelf->pic16f84_cpu__DOT__XORWF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((IData)(vlSelf->pic16f84_cpu__DOT__W_REG) 
                       ^ (IData)(vlSelf->pic16f84_cpu__DOT__F_REG));
            } else if (vlSelf->pic16f84_cpu__DOT__ADDLW) {
                vlSelf->pic16f84_cpu__DOT__c_out = 
                    (0x1ffU & ((IData)(vlSelf->pic16f84_cpu__DOT__W_REG) 
                               + (IData)(vlSelf->pic16f84_cpu__DOT__K_LITERAL)));
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = (0xffU & (IData)(vlSelf->pic16f84_cpu__DOT__c_out));
                vlSelf->pic16f84_cpu__DOT__dc_out = 
                    (0x1fU & ((0xfU & (IData)(vlSelf->pic16f84_cpu__DOT__W_REG)) 
                              + (0xfU & (IData)(vlSelf->pic16f84_cpu__DOT__K_LITERAL))));
            } else if (vlSelf->pic16f84_cpu__DOT__ANDLW) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((IData)(vlSelf->pic16f84_cpu__DOT__W_REG) 
                       & (IData)(vlSelf->pic16f84_cpu__DOT__K_LITERAL));
            } else if (vlSelf->pic16f84_cpu__DOT__IORLW) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((IData)(vlSelf->pic16f84_cpu__DOT__W_REG) 
                       | (IData)(vlSelf->pic16f84_cpu__DOT__K_LITERAL));
            } else if (vlSelf->pic16f84_cpu__DOT__MOVLW) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = vlSelf->pic16f84_cpu__DOT__K_LITERAL;
            } else if (vlSelf->pic16f84_cpu__DOT__SUBLW) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = (0xffU & ((IData)(vlSelf->pic16f84_cpu__DOT__K_LITERAL) 
                                - (IData)(vlSelf->pic16f84_cpu__DOT__W_REG)));
            } else if (vlSelf->pic16f84_cpu__DOT__XORLW) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((IData)(vlSelf->pic16f84_cpu__DOT__W_REG) 
                       ^ (IData)(vlSelf->pic16f84_cpu__DOT__K_LITERAL));
            } else if (vlSelf->pic16f84_cpu__DOT__BSF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT) 
                       | (0xffU & ((IData)(1U) << (IData)(vlSelf->pic16f84_cpu__DOT__b))));
            } else if (vlSelf->pic16f84_cpu__DOT__BCF) {
                vlSelf->pic16f84_cpu__DOT__ALU_OUT 
                    = ((~ ((IData)(1U) << (IData)(vlSelf->pic16f84_cpu__DOT__b))) 
                       & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
            } else if (((IData)(vlSelf->pic16f84_cpu__DOT__BTFSC) 
                        | (IData)(vlSelf->pic16f84_cpu__DOT__BTFSS))) {
                vlSelf->pic16f84_cpu__DOT__bit_b = 
                    (1U & (vlSelf->pic16f84_cpu__DOT__data_memory
                           [vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                           >> (IData)(vlSelf->pic16f84_cpu__DOT__b)));
            } else if ((1U & (~ (IData)(vlSelf->pic16f84_cpu__DOT__NOP)))) {
                if (vlSelf->pic16f84_cpu__DOT__RETFIE) {
                    vlSelf->pic16f84_cpu__DOT__data_memory[0xbU] 
                        = (0x80U | vlSelf->pic16f84_cpu__DOT__data_memory
                           [0xbU]);
                } else if (vlSelf->pic16f84_cpu__DOT__CALL) {
                    vlSelf->pic16f84_cpu__DOT__sp = vlSelf->pic16f84_cpu__DOT__sp_out;
                    if ((7U == (IData)(vlSelf->pic16f84_cpu__DOT__sp))) {
                        vlSelf->pic16f84_cpu__DOT__sp = 0U;
                    }
                }
            }
        } else if ((8U == (((IData)(vlSelf->q4) << 3U) 
                           | (((IData)(vlSelf->q3) 
                               << 2U) | (((IData)(vlSelf->q2) 
                                          << 1U) | (IData)(vlSelf->q1)))))) {
            if (vlSelf->pic16f84_cpu__DOT__ADDWF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfeU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | (1U & ((IData)(vlSelf->pic16f84_cpu__DOT__c_out) 
                                       >> 8U)));
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfdU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | (2U & ((IData)(vlSelf->pic16f84_cpu__DOT__dc_out) 
                                       >> 3U)));
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__SUBWF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfeU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((IData)(vlSelf->pic16f84_cpu__DOT__F_REG) 
                                 >= (IData)(vlSelf->pic16f84_cpu__DOT__W_REG)));
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfdU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | (((0xfU & (IData)(vlSelf->pic16f84_cpu__DOT__F_REG)) 
                                  >= (0xfU & (IData)(vlSelf->pic16f84_cpu__DOT__W_REG))) 
                                 << 1U));
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__ANDWF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__COMF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__DECF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__INCF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__IORWF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__MOVF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__MOVWF) {
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                    = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                        | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                        ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                            [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                           | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                        : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                vlSelf->nop_out = 1U;
                if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                    vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                        = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                            [3U]) | (0xe0U & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                }
            } else if (vlSelf->pic16f84_cpu__DOT__RLF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfeU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | (IData)(vlSelf->pic16f84_cpu__DOT__tmp_msbF));
            } else if (vlSelf->pic16f84_cpu__DOT__RRF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfeU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | (IData)(vlSelf->pic16f84_cpu__DOT__tmp_msbF));
            } else if (vlSelf->pic16f84_cpu__DOT__SWAPF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
            } else if (vlSelf->pic16f84_cpu__DOT__CLR) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = vlSelf->pic16f84_cpu__DOT__ALU_OUT;
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = vlSelf->pic16f84_cpu__DOT__ALU_OUT;
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = (4U | vlSelf->pic16f84_cpu__DOT__data_memory
                       [3U]);
            } else if (vlSelf->pic16f84_cpu__DOT__XORWF) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        if ((3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) {
                            vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                                = ((0x1fU & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [3U]) | (0xe0U 
                                             & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)));
                        }
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                }
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__DECFSZ) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        vlSelf->nop_out = (0U != vlSelf->pic16f84_cpu__DOT__data_memory
                                           [vlSelf->pic16f84_cpu__DOT__F_ADDR]);
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                    vlSelf->nop_out = (0U != (IData)(vlSelf->pic16f84_cpu__DOT__W_REG));
                }
            } else if (vlSelf->pic16f84_cpu__DOT__INCFSZ) {
                if (vlSelf->pic16f84_cpu__DOT__d) {
                    if (vlSelf->pic16f84_cpu__DOT__d) {
                        vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                            = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                                | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                                ? ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                                    [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                                   | (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)))
                                : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                        vlSelf->nop_out = (0U != vlSelf->pic16f84_cpu__DOT__data_memory
                                           [vlSelf->pic16f84_cpu__DOT__F_ADDR]);
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = (((5U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                            | (0x85U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))
                            ? (0x1fU & (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT))
                            : (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT));
                    vlSelf->nop_out = (0U != (IData)(vlSelf->pic16f84_cpu__DOT__W_REG));
                }
            } else if (vlSelf->pic16f84_cpu__DOT__BCF) {
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->pic16f84_cpu__DOT__b))) 
                        & vlSelf->pic16f84_cpu__DOT__data_memory
                        [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                       | (0xffU & ((1U & ((IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT) 
                                          >> (IData)(vlSelf->pic16f84_cpu__DOT__b))) 
                                   << (IData)(vlSelf->pic16f84_cpu__DOT__b))));
                vlSelf->nop_out = 1U;
            } else if (vlSelf->pic16f84_cpu__DOT__BSF) {
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__F_ADDR] 
                    = (((~ ((IData)(1U) << (IData)(vlSelf->pic16f84_cpu__DOT__b))) 
                        & vlSelf->pic16f84_cpu__DOT__data_memory
                        [vlSelf->pic16f84_cpu__DOT__F_ADDR]) 
                       | (0xffU & ((1U & ((IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT) 
                                          >> (IData)(vlSelf->pic16f84_cpu__DOT__b))) 
                                   << (IData)(vlSelf->pic16f84_cpu__DOT__b))));
                vlSelf->nop_out = 1U;
            } else if (vlSelf->pic16f84_cpu__DOT__ADDLW) {
                vlSelf->pic16f84_cpu__DOT__W_REG = vlSelf->pic16f84_cpu__DOT__ALU_OUT;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfeU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | (1U & ((IData)(vlSelf->pic16f84_cpu__DOT__c_out) 
                                       >> 8U)));
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = (0xfdU & vlSelf->pic16f84_cpu__DOT__data_memory
                       [3U]);
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__ANDLW) {
                vlSelf->pic16f84_cpu__DOT__W_REG = vlSelf->pic16f84_cpu__DOT__ALU_OUT;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
                vlSelf->nop_out = 1U;
            } else if (vlSelf->pic16f84_cpu__DOT__IORLW) {
                vlSelf->pic16f84_cpu__DOT__W_REG = vlSelf->pic16f84_cpu__DOT__ALU_OUT;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
                vlSelf->nop_out = 1U;
            } else if (vlSelf->pic16f84_cpu__DOT__MOVLW) {
                vlSelf->pic16f84_cpu__DOT__W_REG = vlSelf->pic16f84_cpu__DOT__ALU_OUT;
                vlSelf->nop_out = 1U;
            } else if (vlSelf->pic16f84_cpu__DOT__SUBLW) {
                vlSelf->pic16f84_cpu__DOT__W_REG = vlSelf->pic16f84_cpu__DOT__ALU_OUT;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfeU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((IData)(vlSelf->pic16f84_cpu__DOT__K_LITERAL) 
                                 >= (IData)(vlSelf->pic16f84_cpu__DOT__W_REG)));
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfdU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | (((0xfU & (IData)(vlSelf->pic16f84_cpu__DOT__K_LITERAL)) 
                                  >= (0xfU & (IData)(vlSelf->pic16f84_cpu__DOT__W_REG))) 
                                 << 1U));
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
            } else if (vlSelf->pic16f84_cpu__DOT__XORLW) {
                vlSelf->pic16f84_cpu__DOT__W_REG = vlSelf->pic16f84_cpu__DOT__ALU_OUT;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = ((0xfbU & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]) | ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__ALU_OUT)) 
                                 << 2U));
                vlSelf->nop_out = 1U;
            } else if (vlSelf->pic16f84_cpu__DOT__BTFSC) {
                vlSelf->nop_out = vlSelf->pic16f84_cpu__DOT__bit_b;
            } else if (vlSelf->pic16f84_cpu__DOT__BTFSS) {
                vlSelf->nop_out = (1U & (~ (IData)(vlSelf->pic16f84_cpu__DOT__bit_b)));
            } else if (((IData)(vlSelf->pic16f84_cpu__DOT__GOTO) 
                        | (IData)(vlSelf->pic16f84_cpu__DOT__CALL))) {
                vlSelf->pic16f84_cpu__DOT__data_memory[0xaU] 
                    = ((0xf8U & vlSelf->pic16f84_cpu__DOT__data_memory
                        [0xaU]) | (7U & ((IData)(vlSelf->pic16f84_cpu__DOT__CALLnGOTO_LITERAL) 
                                         >> 8U)));
                vlSelf->nop_out = 0U;
                vlSelf->pic16f84_cpu__DOT__data_memory[2U] 
                    = (0xffU & (IData)(vlSelf->pic16f84_cpu__DOT__CALLnGOTO_LITERAL));
            } else if (((IData)(vlSelf->pic16f84_cpu__DOT__RETURN) 
                        | (IData)(vlSelf->pic16f84_cpu__DOT__RETFIE))) {
                if ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__sp))) {
                    vlSelf->pic16f84_cpu__DOT__sp = 7U;
                } else {
                    vlSelf->pic16f84_cpu__DOT__sp_out 
                        = (7U & ((IData)(vlSelf->pic16f84_cpu__DOT__sp) 
                                 - (IData)(1U)));
                }
                vlSelf->pic16f84_cpu__DOT__sp = vlSelf->pic16f84_cpu__DOT__sp_out;
                vlSelf->nop_out = 0U;
                vlSelf->pic16f84_cpu__DOT__data_memory[0xaU] 
                    = ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                        [0xaU]) | (0x1fU & (vlSelf->pic16f84_cpu__DOT__STACK
                                            [vlSelf->pic16f84_cpu__DOT__sp] 
                                            >> 8U)));
                vlSelf->pic16f84_cpu__DOT__data_memory[2U] 
                    = (0xffU & vlSelf->pic16f84_cpu__DOT__STACK
                       [vlSelf->pic16f84_cpu__DOT__sp]);
            } else if (vlSelf->pic16f84_cpu__DOT__CLRWDT) {
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = (0xefU & vlSelf->pic16f84_cpu__DOT__data_memory
                       [3U]);
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = (0xf7U & vlSelf->pic16f84_cpu__DOT__data_memory
                       [3U]);
            } else if (vlSelf->pic16f84_cpu__DOT__CLRWDT) {
                if (vlSelf->pic16f84_cpu__DOT__RETLW) {
                    if ((0U == (IData)(vlSelf->pic16f84_cpu__DOT__sp))) {
                        vlSelf->pic16f84_cpu__DOT__sp = 7U;
                    } else {
                        vlSelf->pic16f84_cpu__DOT__sp_out 
                            = (7U & ((IData)(vlSelf->pic16f84_cpu__DOT__sp) 
                                     - (IData)(1U)));
                    }
                    vlSelf->pic16f84_cpu__DOT__W_REG 
                        = vlSelf->pic16f84_cpu__DOT__K_LITERAL;
                    vlSelf->pic16f84_cpu__DOT__sp = vlSelf->pic16f84_cpu__DOT__sp_out;
                    vlSelf->nop_out = 0U;
                    vlSelf->pic16f84_cpu__DOT__data_memory[0xaU] 
                        = ((0xe0U & vlSelf->pic16f84_cpu__DOT__data_memory
                            [0xaU]) | (0x1fU & (vlSelf->pic16f84_cpu__DOT__STACK
                                                [vlSelf->pic16f84_cpu__DOT__sp] 
                                                >> 8U)));
                    vlSelf->pic16f84_cpu__DOT__data_memory[2U] 
                        = (0xffU & vlSelf->pic16f84_cpu__DOT__STACK
                           [vlSelf->pic16f84_cpu__DOT__sp]);
                } else if (vlSelf->pic16f84_cpu__DOT__SLEEP) {
                    vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                        = (0x10U | vlSelf->pic16f84_cpu__DOT__data_memory
                           [3U]);
                    vlSelf->nop_out = 1U;
                    vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                        = (0xf7U & vlSelf->pic16f84_cpu__DOT__data_memory
                           [3U]);
                } else if (vlSelf->pic16f84_cpu__DOT__SLEEP) {
                    if (vlSelf->pic16f84_cpu__DOT__NOP) {
                        vlSelf->nop_out = 1U;
                    }
                } else {
                    vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                        = (8U | vlSelf->pic16f84_cpu__DOT__data_memory
                           [3U]);
                }
            } else {
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = (0x10U | vlSelf->pic16f84_cpu__DOT__data_memory
                       [3U]);
                vlSelf->nop_out = 1U;
                vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
                    = (8U | vlSelf->pic16f84_cpu__DOT__data_memory
                       [3U]);
            }
            if (((((((0U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                     | (2U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                    | (3U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                   | (4U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                  | (0xaU == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                 | (0xbU == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))) {
                vlSelf->pic16f84_cpu__DOT__bank1 = 
                    (0xffU & ((IData)(0x80U) + (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)));
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__bank1] 
                    = vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
            }
            if (((((((0x80U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                     | (0x82U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                    | (0x83U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                   | (0x84U == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                  | (0x8aU == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR))) 
                 | (0x8bU == (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))) {
                vlSelf->pic16f84_cpu__DOT__bank0 = 
                    (0xffU & ((IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR) 
                              - (IData)(0x80U)));
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__bank0] 
                    = vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
            }
            if (((0xcU <= (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                 & (0x4fU >= (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))) {
                vlSelf->pic16f84_cpu__DOT__bank1 = 
                    (0xffU & ((IData)(0x80U) + (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)));
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__bank1] 
                    = vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
            }
            if (((0x8cU <= (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)) 
                 & (0xcfU >= (IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR)))) {
                vlSelf->pic16f84_cpu__DOT__bank0 = 
                    (0xffU & ((IData)(vlSelf->pic16f84_cpu__DOT__F_ADDR) 
                              - (IData)(0x80U)));
                vlSelf->pic16f84_cpu__DOT__data_memory[vlSelf->pic16f84_cpu__DOT__bank0] 
                    = vlSelf->pic16f84_cpu__DOT__data_memory
                    [vlSelf->pic16f84_cpu__DOT__F_ADDR];
            }
            if ((1U & (~ vlSelf->pic16f84_cpu__DOT__data_memory
                       [0x85U]))) {
                vlSelf->port_a_data_out = ((0x1eU & (IData)(vlSelf->port_a_data_out)) 
                                           | (1U & 
                                              vlSelf->pic16f84_cpu__DOT__data_memory
                                              [5U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x85U] >> 1U)))) {
                vlSelf->port_a_data_out = ((0x1dU & (IData)(vlSelf->port_a_data_out)) 
                                           | (2U & 
                                              vlSelf->pic16f84_cpu__DOT__data_memory
                                              [5U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x85U] >> 2U)))) {
                vlSelf->port_a_data_out = ((0x1bU & (IData)(vlSelf->port_a_data_out)) 
                                           | (4U & 
                                              vlSelf->pic16f84_cpu__DOT__data_memory
                                              [5U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x85U] >> 3U)))) {
                vlSelf->port_a_data_out = ((0x17U & (IData)(vlSelf->port_a_data_out)) 
                                           | (8U & 
                                              vlSelf->pic16f84_cpu__DOT__data_memory
                                              [5U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x85U] >> 4U)))) {
                vlSelf->port_a_data_out = ((0xfU & (IData)(vlSelf->port_a_data_out)) 
                                           | (0x10U 
                                              & vlSelf->pic16f84_cpu__DOT__data_memory
                                              [5U]));
            }
            if ((1U & (~ vlSelf->pic16f84_cpu__DOT__data_memory
                       [0x86U]))) {
                vlSelf->port_b_data_out = ((0xfeU & (IData)(vlSelf->port_b_data_out)) 
                                           | (1U & 
                                              vlSelf->pic16f84_cpu__DOT__data_memory
                                              [6U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x86U] >> 1U)))) {
                vlSelf->port_b_data_out = ((0xfdU & (IData)(vlSelf->port_b_data_out)) 
                                           | (2U & 
                                              vlSelf->pic16f84_cpu__DOT__data_memory
                                              [6U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x86U] >> 2U)))) {
                vlSelf->port_b_data_out = ((0xfbU & (IData)(vlSelf->port_b_data_out)) 
                                           | (4U & 
                                              vlSelf->pic16f84_cpu__DOT__data_memory
                                              [6U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x86U] >> 3U)))) {
                vlSelf->port_b_data_out = ((0xf7U & (IData)(vlSelf->port_b_data_out)) 
                                           | (8U & 
                                              vlSelf->pic16f84_cpu__DOT__data_memory
                                              [6U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x86U] >> 4U)))) {
                vlSelf->port_b_data_out = ((0xefU & (IData)(vlSelf->port_b_data_out)) 
                                           | (0x10U 
                                              & vlSelf->pic16f84_cpu__DOT__data_memory
                                              [6U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x86U] >> 5U)))) {
                vlSelf->port_b_data_out = ((0xdfU & (IData)(vlSelf->port_b_data_out)) 
                                           | (0x20U 
                                              & vlSelf->pic16f84_cpu__DOT__data_memory
                                              [6U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x86U] >> 6U)))) {
                vlSelf->port_b_data_out = ((0xbfU & (IData)(vlSelf->port_b_data_out)) 
                                           | (0x40U 
                                              & vlSelf->pic16f84_cpu__DOT__data_memory
                                              [6U]));
            }
            if ((1U & (~ (vlSelf->pic16f84_cpu__DOT__data_memory
                          [0x86U] >> 7U)))) {
                vlSelf->port_b_data_out = ((0x7fU & (IData)(vlSelf->port_b_data_out)) 
                                           | (0x80U 
                                              & vlSelf->pic16f84_cpu__DOT__data_memory
                                              [6U]));
            }
        }
    } else {
        vlSelf->pic16f84_cpu__DOT__data_memory[0U] = 0U;
        vlSelf->nop_out = 0U;
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
        vlSelf->pic16f84_cpu__DOT__sp = 0U;
        vlSelf->pic16f84_cpu__DOT__sp_out = 0U;
        vlSelf->pic16f84_cpu__DOT__data_memory[2U] = 0U;
        vlSelf->pic16f84_cpu__DOT__data_memory[3U] 
            = (0x18U | (7U & vlSelf->pic16f84_cpu__DOT__data_memory
                        [3U]));
        vlSelf->pic16f84_cpu__DOT__data_memory[0xaU] = 0U;
        vlSelf->pic16f84_cpu__DOT__data_memory[0xbU] 
            = (1U & vlSelf->pic16f84_cpu__DOT__data_memory
               [0xbU]);
        vlSelf->pic16f84_cpu__DOT__data_memory[0x81U] = 0xffU;
        vlSelf->pic16f84_cpu__DOT__data_memory[0x85U] = 0x1fU;
        vlSelf->pic16f84_cpu__DOT__data_memory[0x86U] = 0xffU;
        vlSelf->pic16f84_cpu__DOT__data_memory[0x88U] 
            = (0xfU & vlSelf->pic16f84_cpu__DOT__data_memory
               [0x88U]);
        vlSelf->pic16f84_cpu__DOT__data_memory[0x88U] 
            = (0xf8U & vlSelf->pic16f84_cpu__DOT__data_memory
               [0x88U]);
        vlSelf->pic16f84_cpu__DOT__data_memory[0x89U] = 0U;
        vlSelf->pic16f84_cpu__DOT__data_memory[0xbU] 
            = (1U & vlSelf->pic16f84_cpu__DOT__data_memory
               [0xbU]);
    }
}

void Vpic16f84_cpu____eval(Vpic16f84_cpu_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_cpu____eval\n"); );
    // Body
    Vpic16f84_cpu____combo__TOP__0(vlSelf);
}

QData Vpic16f84_cpu____change_request_1(Vpic16f84_cpu_* vlSelf);

VL_INLINE_OPT QData Vpic16f84_cpu____change_request(Vpic16f84_cpu_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_cpu____change_request\n"); );
    // Body
    return (Vpic16f84_cpu____change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vpic16f84_cpu____change_request_1(Vpic16f84_cpu_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_cpu____change_request_1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->pic16f84_cpu__DOT__data_memory
               [0U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
               [0U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[1U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [1U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[2U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [2U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[3U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [3U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[4U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [4U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[5U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [5U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[6U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [6U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[7U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [7U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[8U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [8U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[9U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [9U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xaU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xaU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xbU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xbU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xcU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xcU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xdU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xdU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xeU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xeU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xfU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xfU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x10U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x10U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x11U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x11U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x12U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x12U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x13U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x13U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x14U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x14U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x15U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x15U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x16U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x16U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x17U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x17U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x18U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x18U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x19U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x19U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x1aU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x1aU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x1bU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x1bU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x1cU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x1cU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x1dU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x1dU])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x1eU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x1eU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x1fU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x1fU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x20U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x20U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x21U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x21U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x22U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x22U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x23U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x23U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x24U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x24U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x25U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x25U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x26U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x26U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x27U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x27U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x28U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x28U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x29U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x29U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x2aU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x2aU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x2bU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x2bU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x2cU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x2cU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x2dU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x2dU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x2eU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x2eU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x2fU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x2fU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x30U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x30U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x31U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x31U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x32U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x32U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x33U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x33U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x34U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x34U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x35U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x35U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x36U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x36U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x37U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x37U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x38U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x38U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x39U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x39U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x3aU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x3aU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x3bU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x3bU])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x3cU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x3cU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x3dU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x3dU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x3eU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x3eU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x3fU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x3fU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x40U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x40U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x41U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x41U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x42U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x42U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x43U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x43U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x44U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x44U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x45U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x45U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x46U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x46U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x47U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x47U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x48U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x48U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x49U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x49U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x4aU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x4aU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x4bU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x4bU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x4cU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x4cU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x4dU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x4dU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x4eU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x4eU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x4fU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x4fU])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x50U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x50U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x51U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x51U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x52U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x52U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x53U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x53U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x54U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x54U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x55U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x55U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x56U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x56U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x57U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x57U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x58U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x58U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x59U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x59U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x5aU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x5aU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x5bU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x5bU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x5cU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x5cU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x5dU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x5dU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x5eU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x5eU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x5fU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x5fU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x60U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x60U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x61U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x61U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x62U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x62U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x63U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x63U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x64U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x64U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x65U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x65U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x66U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x66U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x67U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x67U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x68U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x68U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x69U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x69U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x6aU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x6aU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x6bU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x6bU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x6cU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x6cU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x6dU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x6dU])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x6eU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x6eU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x6fU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x6fU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x70U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x70U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x71U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x71U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x72U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x72U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x73U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x73U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x74U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x74U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x75U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x75U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x76U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x76U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x77U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x77U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x78U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x78U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x79U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x79U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x7aU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x7aU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x7bU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x7bU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x7cU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x7cU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x7dU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x7dU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x7eU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x7eU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x7fU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x7fU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x80U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x80U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x81U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x81U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x82U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x82U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x83U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x83U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x84U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x84U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x85U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x85U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x86U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x86U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x87U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x87U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x88U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x88U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x89U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x89U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x8aU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x8aU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x8bU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x8bU])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x8cU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x8cU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x8dU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x8dU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x8eU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x8eU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x8fU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x8fU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x90U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x90U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x91U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x91U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x92U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x92U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x93U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x93U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x94U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x94U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x95U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x95U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0x96U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x96U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x97U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x97U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x98U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x98U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x99U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x99U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x9aU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x9aU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x9bU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x9bU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x9cU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x9cU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x9dU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x9dU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x9eU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x9eU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0x9fU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0x9fU])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xa0U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xa0U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xa1U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xa1U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xa2U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xa2U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xa3U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xa3U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xa4U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xa4U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xa5U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xa5U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xa6U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xa6U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xa7U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xa7U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xa8U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xa8U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xa9U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xa9U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xaaU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xaaU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xabU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xabU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xacU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xacU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xadU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xadU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xaeU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xaeU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xafU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xafU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xb0U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xb0U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xb1U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xb1U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xb2U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xb2U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xb3U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xb3U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xb4U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xb4U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xb5U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xb5U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xb6U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xb6U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xb7U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xb7U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xb8U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xb8U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xb9U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xb9U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xbaU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xbaU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xbbU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xbbU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xbcU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xbcU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xbdU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xbdU])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xbeU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xbeU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xbfU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xbfU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xc0U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xc0U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xc1U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xc1U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xc2U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xc2U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xc3U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xc3U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xc4U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xc4U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xc5U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xc5U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xc6U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xc6U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xc7U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xc7U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xc8U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xc8U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xc9U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xc9U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xcaU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xcaU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xcbU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xcbU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xccU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xccU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xcdU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xcdU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xceU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xceU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xcfU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xcfU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xd0U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xd0U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xd1U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xd1U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xd2U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xd2U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xd3U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xd3U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xd4U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xd4U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xd5U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xd5U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xd6U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xd6U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xd7U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xd7U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xd8U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xd8U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xd9U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xd9U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xdaU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xdaU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xdbU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xdbU])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xdcU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xdcU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xddU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xddU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xdeU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xdeU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xdfU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xdfU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xe0U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xe0U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xe1U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xe1U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xe2U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xe2U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xe3U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xe3U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xe4U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xe4U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xe5U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xe5U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xe6U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xe6U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xe7U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xe7U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xe8U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xe8U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xe9U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xe9U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xeaU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xeaU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xebU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xebU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xecU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xecU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xedU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xedU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xeeU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xeeU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xefU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xefU])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xf0U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xf0U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xf1U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xf1U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xf2U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xf2U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xf3U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xf3U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xf4U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xf4U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xf5U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xf5U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xf6U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xf6U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xf7U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xf7U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xf8U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xf8U])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xf9U] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xf9U])
        || (vlSelf->pic16f84_cpu__DOT__data_memory[0xfaU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xfaU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xfbU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xfbU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xfcU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xfcU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xfdU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xfdU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xfeU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xfeU])
         | (vlSelf->pic16f84_cpu__DOT__data_memory[0xffU] ^ 
            vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
            [0xffU])
         | (vlSelf->pic16f84_cpu__DOT__W_REG ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__W_REG)
         | (vlSelf->pic16f84_cpu__DOT__sp ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__sp));
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [1U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [1U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [2U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [2U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [3U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [3U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [4U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [4U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [5U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [5U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [6U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [6U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [7U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [7U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [8U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [8U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [9U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [9U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xaU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xaU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xbU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xbU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xcU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xcU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xdU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xdU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xeU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xeU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xfU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xfU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x10U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x10U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x11U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x11U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x12U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x12U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x13U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x13U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x14U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x14U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x15U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x15U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x16U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x16U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x17U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x17U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x18U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x18U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x19U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x19U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x1aU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x1aU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x1bU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x1bU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x1cU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x1cU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x1dU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x1dU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x1eU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x1eU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x1fU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x1fU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x20U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x20U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x21U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x21U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x22U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x22U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x23U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x23U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x24U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x24U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x25U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x25U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x26U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x26U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x27U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x27U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x28U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x28U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x29U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x29U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x2aU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x2aU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x2bU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x2bU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x2cU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x2cU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x2dU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x2dU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x2eU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x2eU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x2fU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x2fU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x30U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x30U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x31U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x31U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x32U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x32U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x33U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x33U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x34U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x34U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x35U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x35U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x36U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x36U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x37U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x37U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x38U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x38U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x39U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x39U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x3aU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x3aU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x3bU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x3bU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x3cU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x3cU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x3dU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x3dU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x3eU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x3eU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x3fU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x3fU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x40U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x40U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x41U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x41U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x42U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x42U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x43U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x43U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x44U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x44U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x45U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x45U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x46U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x46U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x47U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x47U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x48U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x48U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x49U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x49U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x4aU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x4aU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x4bU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x4bU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x4cU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x4cU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x4dU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x4dU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x4eU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x4eU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x4fU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x4fU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x50U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x50U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x51U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x51U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x52U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x52U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x53U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x53U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x54U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x54U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x55U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x55U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x56U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x56U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x57U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x57U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x58U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x58U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x59U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x59U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x5aU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x5aU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x5bU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x5bU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x5cU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x5cU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x5dU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x5dU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x5eU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x5eU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x5fU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x5fU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x60U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x60U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x61U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x61U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x62U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x62U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x63U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x63U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x64U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x64U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x65U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x65U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x66U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x66U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x67U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x67U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x68U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x68U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x69U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x69U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x6aU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x6aU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x6bU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x6bU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x6cU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x6cU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x6dU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x6dU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x6eU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x6eU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x6fU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x6fU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x70U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x70U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x71U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x71U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x72U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x72U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x73U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x73U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x74U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x74U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x75U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x75U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x76U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x76U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x77U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x77U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x78U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x78U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x79U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x79U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x7aU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x7aU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x7bU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x7bU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x7cU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x7cU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x7dU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x7dU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x7eU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x7eU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x7fU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x7fU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x80U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x80U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x81U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x81U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x82U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x82U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x83U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x83U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x84U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x84U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x85U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x85U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x86U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x86U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x87U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x87U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x88U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x88U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x89U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x89U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x8aU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x8aU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x8bU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x8bU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x8cU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x8cU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x8dU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x8dU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x8eU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x8eU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x8fU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x8fU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x90U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x90U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x91U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x91U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x92U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x92U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x93U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x93U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x94U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x94U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x95U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x95U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x96U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x96U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x97U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x97U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x98U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x98U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x99U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x99U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x9aU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x9aU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x9bU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x9bU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x9cU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x9cU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x9dU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x9dU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x9eU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x9eU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0x9fU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0x9fU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xa0U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xa0U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xa1U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xa1U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xa2U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xa2U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xa3U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xa3U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xa4U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xa4U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xa5U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xa5U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xa6U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xa6U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xa7U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xa7U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xa8U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xa8U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xa9U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xa9U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xaaU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xaaU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xabU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xabU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xacU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xacU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xadU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xadU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xaeU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xaeU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xafU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xafU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xb0U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xb0U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xb1U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xb1U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xb2U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xb2U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xb3U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xb3U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xb4U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xb4U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xb5U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xb5U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xb6U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xb6U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xb7U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xb7U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xb8U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xb8U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xb9U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xb9U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xbaU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xbaU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xbbU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xbbU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xbcU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xbcU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xbdU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xbdU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xbeU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xbeU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xbfU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xbfU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xc0U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xc0U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xc1U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xc1U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xc2U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xc2U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xc3U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xc3U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xc4U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xc4U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xc5U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xc5U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xc6U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xc6U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xc7U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xc7U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xc8U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xc8U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xc9U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xc9U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xcaU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xcaU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xcbU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xcbU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xccU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xccU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xcdU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xcdU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xceU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xceU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xcfU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xcfU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xd0U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xd0U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xd1U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xd1U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xd2U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xd2U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xd3U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xd3U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xd4U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xd4U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xd5U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xd5U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xd6U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xd6U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xd7U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xd7U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xd8U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xd8U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xd9U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xd9U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xdaU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xdaU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xdbU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xdbU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xdcU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xdcU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xddU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xddU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xdeU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xdeU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xdfU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xdfU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xe0U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xe0U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xe1U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xe1U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xe2U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xe2U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xe3U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xe3U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xe4U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xe4U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xe5U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xe5U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xe6U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xe6U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xe7U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xe7U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xe8U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xe8U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xe9U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xe9U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xeaU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xeaU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xebU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xebU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xecU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xecU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xedU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xedU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xeeU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xeeU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xefU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xefU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xf0U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xf0U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xf1U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xf1U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xf2U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xf2U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xf3U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xf3U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xf4U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xf4U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xf5U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xf5U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xf6U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xf6U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xf7U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xf7U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xf8U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xf8U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xf9U] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xf9U]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xfaU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xfaU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xfbU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xfbU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xfcU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xfcU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xfdU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xfdU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xfeU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xfeU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__data_memory
                               [0xffU] ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory
                               [0xffU]))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:31\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__W_REG ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__W_REG))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:92: pic16f84_cpu.W_REG\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->pic16f84_cpu__DOT__sp ^ vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__sp))) VL_DBG_MSGF("        CHANGE: pic16f84_cpu.v:106: pic16f84_cpu.sp\n"); );
    // Final
    __Vilp = 0U;
    while ((__Vilp <= 0xffU)) {
        vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__data_memory[__Vilp] 
            = vlSelf->pic16f84_cpu__DOT__data_memory
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__W_REG 
        = vlSelf->pic16f84_cpu__DOT__W_REG;
    vlSelf->__Vchglast__TOP__pic16f84_cpu__DOT__sp 
        = vlSelf->pic16f84_cpu__DOT__sp;
    return __req;
}

#ifdef VL_DEBUG
void Vpic16f84_cpu____eval_debug_assertions(Vpic16f84_cpu_* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpic16f84_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpic16f84_cpu____eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->q1 & 0xfeU))) {
        Verilated::overWidthError("q1");}
    if (VL_UNLIKELY((vlSelf->q2 & 0xfeU))) {
        Verilated::overWidthError("q2");}
    if (VL_UNLIKELY((vlSelf->q3 & 0xfeU))) {
        Verilated::overWidthError("q3");}
    if (VL_UNLIKELY((vlSelf->q4 & 0xfeU))) {
        Verilated::overWidthError("q4");}
    if (VL_UNLIKELY((vlSelf->op_code & 0xc000U))) {
        Verilated::overWidthError("op_code");}
    if (VL_UNLIKELY((vlSelf->port_a_data_in & 0xe0U))) {
        Verilated::overWidthError("port_a_data_in");}
    if (VL_UNLIKELY((vlSelf->mclr & 0xfeU))) {
        Verilated::overWidthError("mclr");}
}
#endif  // VL_DEBUG
