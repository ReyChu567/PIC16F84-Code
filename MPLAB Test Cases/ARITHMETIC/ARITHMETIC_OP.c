#include <xc.h>

void main() {
    TRISA = 0x00;
    TRISB = 0xFF;

    PORTA = 0x00;

    unsigned char rb3_rb4 = PORTB & 0x18; // Extract RB3 and RB4
	
	while (1) {
    if (rb3_rb4 == 0x00) { // SET RB3 AND RB4 TO 00
        PORTA = (PORTB & 0x07) + ((PORTB & 0xE0) >> 5); //Shift right by 5
    } else if (rb3_rb4 == 0x10) { // SET RB3 AND RB4 TO 10
        PORTA = (PORTB & 0x07) * ((PORTB & 0xE0) >> 5); //Shift right by 5
    } else if (rb3_rb4 == 0x08) { // SET RB3 AND RB4 TO 01 (0x18 = 0b00011000, 0x08 is 0b00001000)
        PORTA = (PORTB & 0x07) - ((PORTB & 0xE0) >> 5); //Shift right by 5
    } else if (rb3_rb4 == 0x18) { // SET RB3 AND RB4 TO 11 (0x18 = 0b00011000)
        PORTA = (PORTB & 0x07) / ((PORTB & 0xE0) >> 5); //Shift right by 5
    } else {
        PORTA = 0xFF;
    }
	}
}
