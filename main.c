/*
 * main.c
 *
 * Author : David Wiebe
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
#include "stepper.c"
#include "time.c"



int main (void){
	while(1){
		step();
		
	};		
};


/*
int main (void){
	DDRB = 0x80;
	while(1){
		PORTB = PORTB ^ DDRB;
		_delay_ms(500);
	}
	return 0;
}
*/