opt subtitle "Microchip Technology Omniscient Code Generator (Lite mode) build 59893"

opt pagewidth 120

	opt lm

	processor	16F84
clrc	macro
	bcf	3,0
	endm
clrz	macro
	bcf	3,2
	endm
setc	macro
	bsf	3,0
	endm
setz	macro
	bsf	3,2
	endm
skipc	macro
	btfss	3,0
	endm
skipz	macro
	btfss	3,2
	endm
skipnc	macro
	btfsc	3,0
	endm
skipnz	macro
	btfsc	3,2
	endm
indf	equ	0
indf0	equ	0
pc	equ	2
pcl	equ	2
status	equ	3
fsr	equ	4
fsr0	equ	4
c	equ	1
z	equ	0
pclath	equ	10
# 49 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
INDF equ 00h ;# 
# 55 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
TMR0 equ 01h ;# 
# 61 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
PCL equ 02h ;# 
# 67 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
STATUS equ 03h ;# 
# 154 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
FSR equ 04h ;# 
# 160 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
PORTA equ 05h ;# 
# 203 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
PORTB equ 06h ;# 
# 264 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
EEDATA equ 08h ;# 
# 270 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
EEADR equ 09h ;# 
# 276 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
PCLATH equ 0Ah ;# 
# 295 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
INTCON equ 0Bh ;# 
# 372 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
OPTION_REG equ 081h ;# 
# 441 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
TRISA equ 085h ;# 
# 484 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
TRISB equ 086h ;# 
# 545 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
EECON1 equ 088h ;# 
# 588 "C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
EECON2 equ 089h ;# 
	FNCALL	_main,___bmul
	FNCALL	_main,___lbdiv
	FNROOT	_main
	global	_PORTA
_PORTA	set	0x5
	global	_PORTB
_PORTB	set	0x6
	global	_TRISA
_TRISA	set	0x85
	global	_TRISB
_TRISB	set	0x86
psect	text0,local,class=CODE,delta=2,merge=1
; #config settings
	file	"C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
	line	700
global __ptext0
__ptext0:	;psect for function ___bmul
	file	"ARITHMETIC.as"
	line	#
psect cinit,class=CODE,delta=2
global start_initialization
start_initialization:

global __initialization
__initialization:
psect cinit,class=CODE,delta=2,merge=1
global end_of_initialization,__end_of__initialization

;End of C runtime variable initialization code

end_of_initialization:
__end_of__initialization:clrf status
ljmp _main	;jump to C main() function
psect	cstackBANK0,class=BANK0,space=1,noexec
global __pcstackBANK0
__pcstackBANK0:
?_main:	; 0 bytes @ 0x0
?___bmul:	; 1 bytes @ 0x0
?___lbdiv:	; 1 bytes @ 0x0
	global	___bmul@multiplicand
___bmul@multiplicand:	; 1 bytes @ 0x0
	global	___lbdiv@divisor
___lbdiv@divisor:	; 1 bytes @ 0x0
	ds	1
??___bmul:	; 0 bytes @ 0x1
??___lbdiv:	; 0 bytes @ 0x1
	ds	1
	global	___bmul@product
___bmul@product:	; 1 bytes @ 0x2
	global	___lbdiv@dividend
___lbdiv@dividend:	; 1 bytes @ 0x2
	ds	1
	global	___bmul@multiplier
___bmul@multiplier:	; 1 bytes @ 0x3
	global	___lbdiv@counter
___lbdiv@counter:	; 1 bytes @ 0x3
	ds	1
	global	___lbdiv@quotient
___lbdiv@quotient:	; 1 bytes @ 0x4
	ds	1
??_main:	; 0 bytes @ 0x5
	ds	2
	global	main@rb3_rb4
main@rb3_rb4:	; 1 bytes @ 0x7
	ds	1
;!
;!Data Sizes:
;!    Strings     0
;!    Constant    0
;!    Data        0
;!    BSS         0
;!    Persistent  0
;!    Stack       0
;!
;!Auto Spaces:
;!    Space          Size  Autos    Used
;!    COMMON            0      0       0
;!    BANK0            66      8       8

;!
;!Pointer List with Targets:
;!
;!    None.


;!
;!Critical Paths under _main in COMMON
;!
;!    None.
;!
;!Critical Paths under _main in BANK0
;!
;!    _main->___lbdiv

;;
;;Main: autosize = 0, tempsize = 2, incstack = 0, save=0
;;

;!
;!Call Graph Tables:
;!
;! ---------------------------------------------------------------------------------
;! (Depth) Function   	        Calls       Base Space   Used Autos Params    Refs
;! ---------------------------------------------------------------------------------
;! (0) _main                                                 3     3      0     449
;!                                              5 BANK0      3     3      0
;!                             ___bmul
;!                            ___lbdiv
;! ---------------------------------------------------------------------------------
;! (1) ___lbdiv                                              5     4      1     215
;!                                              0 BANK0      5     4      1
;! ---------------------------------------------------------------------------------
;! (1) ___bmul                                               4     3      1     145
;!                                              0 BANK0      4     3      1
;! ---------------------------------------------------------------------------------
;! Estimated maximum stack depth 1
;! ---------------------------------------------------------------------------------
;!
;! Call Graph Graphs:
;!
;! _main (ROOT)
;!   ___bmul
;!   ___lbdiv
;!

;! Address spaces:

;!Name               Size   Autos  Total    Cost      Usage
;!BITCOMMON            0      0       0       0        0.0%
;!EEDATA              40      0       0       0        0.0%
;!NULL                 0      0       0       0        0.0%
;!CODE                 0      0       0       0        0.0%
;!BITSFR0              0      0       0       1        0.0%
;!SFR0                 0      0       0       1        0.0%
;!COMMON               0      0       0       1        0.0%
;!BITSFR1              0      0       0       2        0.0%
;!SFR1                 0      0       0       2        0.0%
;!STACK                0      0       0       2        0.0%
;!BANK0               42      8       8       3       12.1%
;!ABS                  0      0       0       4        0.0%
;!BITBANK0            42      0       0       5        0.0%
;!DATA                 0      0       0       6        0.0%

	global	_main

;; *************** function _main *****************
;; Defined at:
;;		line 3 in file "C:\Users\reyla\Downloads\ARITHMETIC\ARITHMETIC\ARITHMETIC_OP.c"
;; Parameters:    Size  Location     Type
;;		None
;; Auto vars:     Size  Location     Type
;;  rb3_rb4         1    7[BANK0 ] unsigned char 
;; Return value:  Size  Location     Type
;;		None               void
;; Registers used:
;;		wreg, status,2, status,0, pclath, cstack
;; Tracked objects:
;;		On entry : 17F/0
;;		On exit  : 0/0
;;		Unchanged: 0/0
;; Data sizes:     COMMON   BANK0
;;      Params:         0       0
;;      Locals:         0       1
;;      Temps:          0       2
;;      Totals:         0       3
;;Total ram usage:        3 bytes
;; Hardware stack levels required when called:    1
;; This function calls:
;;		___bmul
;;		___lbdiv
;; This function is called by:
;;		Startup code after reset
;; This function uses a non-reentrant model
;;
psect	maintext,global,class=CODE,delta=2,split=1
	file	"C:\Users\reyla\Downloads\ARITHMETIC\ARITHMETIC\ARITHMETIC_OP.c"
	line	3
global __pmaintext
__pmaintext:	;psect for function _main
psect	maintext
	file	"C:\Users\reyla\Downloads\ARITHMETIC\ARITHMETIC\ARITHMETIC_OP.c"
	line	3
	global	__size_of_main
	__size_of_main	equ	__end_of_main-_main
	
_main:	
;incstack = 0
	opt	stack 7
; Regs used in _main: [wreg+status,2+status,0+pclath+cstack]
	line	4
	
l589:	
;ARITHMETIC_OP.c: 4: TRISA = 0x00;
	bsf	status, 5	;RP0=1, select bank1
	clrf	(133)^080h	;volatile
	line	5
	
l591:	
;ARITHMETIC_OP.c: 5: TRISB = 0xFF;
	movlw	(0FFh)
	movwf	(134)^080h	;volatile
	line	7
	
l593:	
;ARITHMETIC_OP.c: 7: PORTA = 0x00;
	bcf	status, 5	;RP0=0, select bank0
	clrf	(5)	;volatile
	line	9
	
l595:	
;ARITHMETIC_OP.c: 9: unsigned char rb3_rb4 = PORTB & 0x18;
	movf	(6),w	;volatile
	andlw	018h
	movwf	(??_main+0)+0
	movf	(??_main+0)+0,w
	movwf	(main@rb3_rb4)
	goto	l597
	line	11
;ARITHMETIC_OP.c: 11: while (1) {
	
l11:	
	line	12
	
l597:	
;ARITHMETIC_OP.c: 12: if (rb3_rb4 == 0x00) {
	movf	(main@rb3_rb4),f
	skipz
	goto	u211
	goto	u210
u211:
	goto	l601
u210:
	line	13
	
l599:	
;ARITHMETIC_OP.c: 13: PORTA = (PORTB & 0x07) + ((PORTB & 0xE0) >> 5);
	movlw	(07h)
	andwf	(6),w	;volatile
	movwf	(??_main+0)+0
	movf	(6),w	;volatile
	movwf	(??_main+1)+0
	movlw	05h
u225:
	clrc
	rrf	(??_main+1)+0,f
	addlw	-1
	skipz
	goto	u225
	movf	0+(??_main+1)+0,w
	andlw	07h
	addwf	0+(??_main+0)+0,w
	movwf	(5)	;volatile
	line	14
;ARITHMETIC_OP.c: 14: } else if (rb3_rb4 == 0x10) {
	goto	l597
	
l12:	
	
l601:	
	movf	(main@rb3_rb4),w
	xorlw	010h
	skipz
	goto	u231
	goto	u230
u231:
	goto	l605
u230:
	line	15
	
l603:	
;ARITHMETIC_OP.c: 15: PORTA = (PORTB & 0x07) * ((PORTB & 0xE0) >> 5);
	movf	(6),w	;volatile
	movwf	(??_main+0)+0
	movlw	05h
u245:
	clrc
	rrf	(??_main+0)+0,f
	addlw	-1
	skipz
	goto	u245
	movf	0+(??_main+0)+0,w
	andlw	07h
	movwf	(??_main+1)+0
	movf	(??_main+1)+0,w
	movwf	(___bmul@multiplicand)
	movf	(6),w	;volatile
	andlw	07h
	fcall	___bmul
	bcf	status, 5	;RP0=0, select bank0
	movwf	(5)	;volatile
	line	16
;ARITHMETIC_OP.c: 16: } else if (rb3_rb4 == 0x08) {
	goto	l597
	
l14:	
	
l605:	
	movf	(main@rb3_rb4),w
	xorlw	08h
	skipz
	goto	u251
	goto	u250
u251:
	goto	l609
u250:
	line	17
	
l607:	
;ARITHMETIC_OP.c: 17: PORTA = (PORTB & 0x07) - ((PORTB & 0xE0) >> 5);
	movlw	(07h)
	andwf	(6),w	;volatile
	movwf	(??_main+0)+0
	movf	(6),w	;volatile
	movwf	(??_main+1)+0
	movlw	05h
u265:
	clrc
	rrf	(??_main+1)+0,f
	addlw	-1
	skipz
	goto	u265
	movf	0+(??_main+1)+0,w
	andlw	07h
	xorlw	0ffh
	addlw	1
	addwf	0+(??_main+0)+0,w
	movwf	(5)	;volatile
	line	18
;ARITHMETIC_OP.c: 18: } else if (rb3_rb4 == 0x18) {
	goto	l597
	
l16:	
	
l609:	
	movf	(main@rb3_rb4),w
	xorlw	018h
	skipz
	goto	u271
	goto	u270
u271:
	goto	l613
u270:
	line	19
	
l611:	
;ARITHMETIC_OP.c: 19: PORTA = (PORTB & 0x07) / ((PORTB & 0xE0) >> 5);
	movf	(6),w	;volatile
	movwf	(??_main+0)+0
	movlw	05h
u285:
	clrc
	rrf	(??_main+0)+0,f
	addlw	-1
	skipz
	goto	u285
	movf	0+(??_main+0)+0,w
	andlw	07h
	movwf	(??_main+1)+0
	movf	(??_main+1)+0,w
	movwf	(___lbdiv@divisor)
	movf	(6),w	;volatile
	andlw	07h
	fcall	___lbdiv
	bcf	status, 5	;RP0=0, select bank0
	movwf	(5)	;volatile
	line	20
;ARITHMETIC_OP.c: 20: } else {
	goto	l597
	
l18:	
	line	21
	
l613:	
;ARITHMETIC_OP.c: 21: PORTA = 0xFF;
	movlw	(0FFh)
	movwf	(5)	;volatile
	goto	l597
	line	22
	
l19:	
	goto	l597
	
l17:	
	goto	l597
	
l15:	
	goto	l597
	
l13:	
	goto	l597
	line	23
	
l20:	
	line	11
	goto	l597
	
l21:	
	line	24
	
l22:	
	global	start
	ljmp	start
	opt stack 0
GLOBAL	__end_of_main
	__end_of_main:
	signat	_main,88
	global	___lbdiv

;; *************** function ___lbdiv *****************
;; Defined at:
;;		line 4 in file "C:\Program Files (x86)\Microchip\xc8\v1.33\sources\common\lbdiv.c"
;; Parameters:    Size  Location     Type
;;  dividend        1    wreg     unsigned char 
;;  divisor         1    0[BANK0 ] unsigned char 
;; Auto vars:     Size  Location     Type
;;  dividend        1    2[BANK0 ] unsigned char 
;;  quotient        1    4[BANK0 ] unsigned char 
;;  counter         1    3[BANK0 ] unsigned char 
;; Return value:  Size  Location     Type
;;                  1    wreg      unsigned char 
;; Registers used:
;;		wreg, status,2, status,0
;; Tracked objects:
;;		On entry : 0/0
;;		On exit  : 0/0
;;		Unchanged: 0/0
;; Data sizes:     COMMON   BANK0
;;      Params:         0       1
;;      Locals:         0       3
;;      Temps:          0       1
;;      Totals:         0       5
;;Total ram usage:        5 bytes
;; Hardware stack levels used:    1
;; This function calls:
;;		Nothing
;; This function is called by:
;;		_main
;; This function uses a non-reentrant model
;;
psect	text1,local,class=CODE,delta=2,merge=1
	file	"C:\Program Files (x86)\Microchip\xc8\v1.33\sources\common\lbdiv.c"
	line	4
global __ptext1
__ptext1:	;psect for function ___lbdiv
psect	text1
	file	"C:\Program Files (x86)\Microchip\xc8\v1.33\sources\common\lbdiv.c"
	line	4
	global	__size_of___lbdiv
	__size_of___lbdiv	equ	__end_of___lbdiv-___lbdiv
	
___lbdiv:	
;incstack = 0
	opt	stack 7
; Regs used in ___lbdiv: [wreg+status,2+status,0]
;___lbdiv@dividend stored from wreg
	bcf	status, 5	;RP0=0, select bank0
	movwf	(___lbdiv@dividend)
	line	9
	
l563:	
	clrf	(___lbdiv@quotient)
	line	10
	
l565:	
	movf	(___lbdiv@divisor),w
	skipz
	goto	u170
	goto	l585
u170:
	line	11
	
l567:	
	clrf	(___lbdiv@counter)
	incf	(___lbdiv@counter),f
	line	12
	goto	l573
	
l363:	
	line	13
	
l569:	
	clrc
	rlf	(___lbdiv@divisor),f

	line	14
	
l571:	
	movlw	(01h)
	movwf	(??___lbdiv+0)+0
	movf	(??___lbdiv+0)+0,w
	addwf	(___lbdiv@counter),f
	goto	l573
	line	15
	
l362:	
	line	12
	
l573:	
	btfss	(___lbdiv@divisor),(7)&7
	goto	u181
	goto	u180
u181:
	goto	l569
u180:
	goto	l575
	
l364:	
	goto	l575
	line	16
	
l365:	
	line	17
	
l575:	
	clrc
	rlf	(___lbdiv@quotient),f

	line	18
	movf	(___lbdiv@divisor),w
	subwf	(___lbdiv@dividend),w
	skipc
	goto	u191
	goto	u190
u191:
	goto	l581
u190:
	line	19
	
l577:	
	movf	(___lbdiv@divisor),w
	subwf	(___lbdiv@dividend),f
	line	20
	
l579:	
	bsf	(___lbdiv@quotient)+(0/8),(0)&7
	goto	l581
	line	21
	
l366:	
	line	22
	
l581:	
	clrc
	rrf	(___lbdiv@divisor),f

	line	23
	
l583:	
	movlw	low(01h)
	subwf	(___lbdiv@counter),f
	btfss	status,2
	goto	u201
	goto	u200
u201:
	goto	l575
u200:
	goto	l585
	
l367:	
	goto	l585
	line	24
	
l361:	
	line	25
	
l585:	
	movf	(___lbdiv@quotient),w
	goto	l368
	
l587:	
	line	26
	
l368:	
	return
	opt stack 0
GLOBAL	__end_of___lbdiv
	__end_of___lbdiv:
	signat	___lbdiv,8313
	global	___bmul

;; *************** function ___bmul *****************
;; Defined at:
;;		line 4 in file "C:\Program Files (x86)\Microchip\xc8\v1.33\sources\common\Umul8.c"
;; Parameters:    Size  Location     Type
;;  multiplier      1    wreg     unsigned char 
;;  multiplicand    1    0[BANK0 ] unsigned char 
;; Auto vars:     Size  Location     Type
;;  multiplier      1    3[BANK0 ] unsigned char 
;;  product         1    2[BANK0 ] unsigned char 
;; Return value:  Size  Location     Type
;;                  1    wreg      unsigned char 
;; Registers used:
;;		wreg, status,2, status,0
;; Tracked objects:
;;		On entry : 0/0
;;		On exit  : 0/0
;;		Unchanged: 0/0
;; Data sizes:     COMMON   BANK0
;;      Params:         0       1
;;      Locals:         0       2
;;      Temps:          0       1
;;      Totals:         0       4
;;Total ram usage:        4 bytes
;; Hardware stack levels used:    1
;; This function calls:
;;		Nothing
;; This function is called by:
;;		_main
;; This function uses a non-reentrant model
;;
psect	text2,local,class=CODE,delta=2,merge=1
	file	"C:\Program Files (x86)\Microchip\xc8\v1.33\sources\common\Umul8.c"
	line	4
global __ptext2
__ptext2:	;psect for function ___bmul
psect	text2
	file	"C:\Program Files (x86)\Microchip\xc8\v1.33\sources\common\Umul8.c"
	line	4
	global	__size_of___bmul
	__size_of___bmul	equ	__end_of___bmul-___bmul
	
___bmul:	
;incstack = 0
	opt	stack 7
; Regs used in ___bmul: [wreg+status,2+status,0]
;___bmul@multiplier stored from wreg
	bcf	status, 5	;RP0=0, select bank0
	movwf	(___bmul@multiplier)
	line	6
	
l547:	
	clrf	(___bmul@product)
	goto	l549
	line	42
	
l123:	
	line	43
	
l549:	
	btfss	(___bmul@multiplier),(0)&7
	goto	u151
	goto	u150
u151:
	goto	l553
u150:
	line	44
	
l551:	
	movf	(___bmul@multiplicand),w
	movwf	(??___bmul+0)+0
	movf	(??___bmul+0)+0,w
	addwf	(___bmul@product),f
	goto	l553
	
l124:	
	line	45
	
l553:	
	clrc
	rlf	(___bmul@multiplicand),f

	line	46
	
l555:	
	clrc
	rrf	(___bmul@multiplier),f

	line	47
	
l557:	
	movf	(___bmul@multiplier),f
	skipz
	goto	u161
	goto	u160
u161:
	goto	l549
u160:
	goto	l559
	
l125:	
	line	50
	
l559:	
	movf	(___bmul@product),w
	goto	l126
	
l561:	
	line	51
	
l126:	
	return
	opt stack 0
GLOBAL	__end_of___bmul
	__end_of___bmul:
	signat	___bmul,8313
global	___latbits
___latbits	equ	0
	global	btemp
	btemp set 04Eh

	DABS	1,78,2	;btemp
	global	wtemp
	global	wtemp0
	wtemp set btemp
	wtemp0 set btemp
	global	wtemp1
	wtemp1 set btemp+2
	global	wtemp2
	wtemp2 set btemp+4
	global	wtemp3
	wtemp3 set btemp+6
	global	wtemp4
	wtemp4 set btemp+8
	global	wtemp5
	wtemp5 set btemp+10
	global	wtemp6
	wtemp6 set btemp+1
	global	ttemp
	global	ttemp0
	ttemp set btemp
	ttemp0 set btemp
	global	ttemp1
	ttemp1 set btemp+3
	global	ttemp2
	ttemp2 set btemp+6
	global	ttemp3
	ttemp3 set btemp+9
	global	ttemp4
	ttemp4 set btemp+1
	global	ltemp
	global	ltemp0
	ltemp set btemp
	ltemp0 set btemp
	global	ltemp1
	ltemp1 set btemp+4
	global	ltemp2
	ltemp2 set btemp+8
	global	ltemp3
	ltemp3 set btemp+2
	end
