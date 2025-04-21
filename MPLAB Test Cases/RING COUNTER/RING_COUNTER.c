	// Ring Counter for PIC16F84
#include <xc.h>

void main() {
    TRISA = 0x00;               // Set PORTA as output
    PORTA = 0x00;               // Initialize PORTA (00000000)

    while (1) {
		PORTA = PORTA << 1;		// Shift to the left 

		// If the last LED is reached, reset to the first LED
        if (PORTA == 0x00) {
            PORTA = 0x01;       // Restart the ring counter
        }
    }
}