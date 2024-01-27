#include "shifter.hpp"
#include "display.hpp"
#include "timer.hpp"
#include "adc.hpp"

#include <avr/interrupt.h>

/**
 * Obsługa przerwania komparatora Timer/Counter0.
 */
ISR(TIMER0_OVF_vect)
{
	display.refresh();
}

/**
 * Funkcja główna.
 */
int main()
{
	display.print(0);
	shifter.initialize();
	timer.initialize();

	sei();

	while (true) {
		if (bit_is_clear(PINC, 2)) {
			display.print(420);
		}
	}
}