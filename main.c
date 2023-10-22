// The ATmega4809 operates at 20MHz
// 20/6 = 3.333333MHz
#define F_CPU 3333333UL

// System headers bellow
//#include "Atmel.ATmega_DFP.2.0.401/include/avr/iom4809.h"
#include <avr/io.h>
#include <util/delay.h>
//#include "Atmel.ATmega_DFP.2.0.401/gcc/dev/atmega4809"

#define LED0 5

int main(void) {

    PORTF.DIR |= (1 << LED0);
    // The usual way to run microcontrollers is using a simple infinite loop
    while (1) {
        PORTF.OUT ^= (1 << LED0);
        _delay_ms(50);
    }
}
