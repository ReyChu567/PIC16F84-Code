#include <xc.h>

#define _XTAL_FREQ 1000000  // Define the crystal frequency (4 MHz)

// Configuration bits for PIC16F84
#pragma config WDTE = OFF, PWRTE = ON, FOSC = XT, CP = OFF

void main(void) {
    TRISB = 0x00;  // Set PORTB as output
    PORTB = 0x00;  // Initialize PORTB to low

    while (1) {
        PORTB = 0x01;  // Turn on RB0 (set RB0 high)
        __delay_ms(500);  // Delay 500 ms (LED on)

        PORTB = 0x00;  // Turn off RB0 (set RB0 low)
        __delay_ms(500);  // Delay 500 ms (LED off)
    }
}