#include "timer1.h"

volatile char state = 0;

void setup() {
	timer1_Init(0.1);
	// DDRB |= (1 << PB1) | (1<<PB5);
	pinMode(13, OUTPUT);

	// pinMode(9, OUTPUT);
}

void loop() {

}

ISR(TIMER1_COMPA_vect){
	state = !state;
	digitalWrite(13, state);
}


