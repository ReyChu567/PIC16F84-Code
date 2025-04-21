#include <xc.h>

void main(){

	TRISA = 0x00;
	TRISB = 0x00;
	
	PORTA = 0xFF; //Turns on all PORTA 
	PORTB = 0xFF;
}