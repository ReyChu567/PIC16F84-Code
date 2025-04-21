#include <xc.h>


void main(){                //main program
    
	TRISA = 0xFF;
	TRISB = 0x00;

    while (1){            //continuous run
    	if (RA0 == 1){
			RB0 = 0;
			RB1 = 1;
		}
		else {
			RB0 = 1;
			RB1 = 0;
		}
    }
}