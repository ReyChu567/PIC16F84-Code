#include <xc.h>

void main(void) {
    // Initialize PORTB
    TRISB = 0x00;   // Set PORTB as output
    PORTB = 0x00;   // Clear PORTB

    unsigned char count = 0;  // Variable to hold the count

    while (1) {
        // Display the current count on PORTB
        PORTB = count;

        // Increment the count
        count++;

        // Reset the count if it exceeds 9
        if (count > 9) {
            count = 0;
        }
    }
}
