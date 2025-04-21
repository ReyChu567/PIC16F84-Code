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
	FNROOT	_main
	global	_RA0
_RA0	set	0x28
	global	_RB0
_RB0	set	0x30
	global	_RB1
_RB1	set	0x31
	global	_TRISA
_TRISA	set	0x85
	global	_TRISB
_TRISB	set	0x86
psect	maintext,global,class=CODE,delta=2,split=1
; #config settings
	file	"C:\Program Files (x86)\Microchip\xc8\v1.33\include\pic16f84.h"
	line	700
global __pmaintext
__pmaintext:	;psect for function _main
	file	"INVERT_INPUT.as"
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
psect	cstackCOMMON,class=COMMON,space=1,noexec
global __pcstackCOMMON
__pcstackCOMMON:
??_main:	; 0 bytes @ 0x0
psect	cstackBANK0,class=BANK0,space=1,noexec
global __pcstackBANK0
__pcstackBANK0:
?_main:	; 0 bytes @ 0x0
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
;!    BANK0            66      0       0

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
;!    None.

;;
;;Main: autosize = 0, tempsize = 0, incstack = 0, save=0
;;

;!
;!Call Graph Tables:
;!
;! ---------------------------------------------------------------------------------
;! (Depth) Function   	        Calls       Base Space   Used Autos Params    Refs
;! ---------------------------------------------------------------------------------
;! (0) _main                                                 0     0      0       0
;! ---------------------------------------------------------------------------------
;! Estimated maximum stack depth 0
;! ---------------------------------------------------------------------------------
;!
;! Call Graph Graphs:
;!
;! _main (ROOT)
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
;!BANK0               42      0       0       3        0.0%
;!ABS                  0      0       0       4        0.0%
;!BITBANK0            42      0       0       5        0.0%
;!DATA                 0      0       0       6        0.0%

	global	_main

;; *************** function _main *****************
;; Defined at:
;;		line 4 in file "C:\Users\Gwynne\Documents\MPLabEx\THESIS\INVERT\INVERT_BLINK.c"
;; Parameters:    Size  Location     Type
;;		None
;; Auto vars:     Size  Location     Type
;;		None
;; Return value:  Size  Location     Type
;;		None               void
;; Registers used:
;;		wreg, status,2
;; Tracked objects:
;;		On entry : 17F/0
;;		On exit  : 0/0
;;		Unchanged: 0/0
;; Data sizes:     COMMON   BANK0
;;      Params:         0       0
;;      Locals:         0       0
;;      Temps:          0       0
;;      Totals:         0       0
;;Total ram usage:        0 bytes
;; This function calls:
;;		Nothing
;; This function is called by:
;;		Startup code after reset
;; This function uses a non-reentrant model
;;
psect	maintext
psect	maintext
	file	"C:\Users\Gwynne\Documents\MPLabEx\THESIS\INVERT\INVERT_BLINK.c"
	line	4
	global	__size_of_main
	__size_of_main	equ	__end_of_main-_main
	
_main:	
;incstack = 0
	opt	stack 8
; Regs used in _main: [wreg+status,2]
	line	6
	
l483:	
;INVERT_BLINK.c: 6: TRISA = 0xFF;
	movlw	(0FFh)
	bsf	status, 5	;RP0=1, select bank1
	movwf	(133)^080h	;volatile
	line	7
	
l485:	
;INVERT_BLINK.c: 7: TRISB = 0x00;
	clrf	(134)^080h	;volatile
	goto	l487
	line	10
;INVERT_BLINK.c: 10: while (1){
	
l13:	
	line	11
	
l487:	
;INVERT_BLINK.c: 11: if (RA0 == 1){
	bcf	status, 5	;RP0=0, select bank0
	btfss	(40/8),(40)&7	;volatile
	goto	u21
	goto	u20
u21:
	goto	l14
u20:
	line	12
	
l489:	
;INVERT_BLINK.c: 12: RB0 = 0;
	bcf	(48/8),(48)&7	;volatile
	line	13
;INVERT_BLINK.c: 13: RB1 = 1;
	bsf	(49/8),(49)&7	;volatile
	line	14
;INVERT_BLINK.c: 14: }
	goto	l487
	line	15
	
l14:	
	line	16
;INVERT_BLINK.c: 15: else {
;INVERT_BLINK.c: 16: RB0 = 1;
	bsf	(48/8),(48)&7	;volatile
	line	17
;INVERT_BLINK.c: 17: RB1 = 0;
	bcf	(49/8),(49)&7	;volatile
	goto	l487
	line	18
	
l15:	
	goto	l487
	line	19
	
l16:	
	line	10
	goto	l487
	
l17:	
	line	20
	
l18:	
	global	start
	ljmp	start
	opt stack 0
GLOBAL	__end_of_main
	__end_of_main:
	signat	_main,88
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
