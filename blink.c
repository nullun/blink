/* 
 * File:   blink.c
 * Author: nullun
 *
 * Created on 19 January 2016, 20:01
 */


#include <xc.h>
// Turn the Watchdog Timer off
#pragma config WDTE = OFF 

void delay(int d); // Prototype delay function

int main(void) {
	// Set pins to output
	TRISCbits.TRISC0 = 0;
	TRISCbits.TRISC1 = 0;
	TRISCbits.TRISC2 = 0;
	TRISCbits.TRISC3 = 0;

	// Indefinite loop
	while(1) {
		// Unintelligent cycle of LEDs
		PORTCbits.RC0 = 1;
		delay(500);
		PORTCbits.RC0 = 0;
		PORTCbits.RC1 = 1;
		delay(500);
		PORTCbits.RC1 = 0;
		PORTCbits.RC2 = 1;
		delay(500);
		PORTCbits.RC2 = 0;
		PORTCbits.RC3 = 1;
		delay(500);
		PORTCbits.RC3 = 0;
		PORTCbits.RC2 = 1;
		delay(500);
		PORTCbits.RC2 = 0;
		PORTCbits.RC1 = 1;
		delay(500);
		PORTCbits.RC1 = 0;
    }
}

// Delay function
void delay(int d) {
	int i;
	while(d) {
		i = 10;
		while(i) {
			i--;
		}
		d--;
    }
}
