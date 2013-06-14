/*
 * BlinkLED.c
 *
 * Created: 4/29/2013 12:03:06 PM
 *  Author: User
 */ 
#define F_CPU 1000000L

#include <avr/delay.h>
#include <avr/io.h>

int main(void)
{
	DDRB = 0x01;
	PORTB = 0x00;
	
    while(1)
    {
        //TODO:: Please write your application code 
		PORTB = 0x01;
		_delay_ms(1000);
		PORTB = 0x00;
		_delay_ms(1000);
    }
}