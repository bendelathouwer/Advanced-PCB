/*
 * secondary AT Mega code.c
 *
 * Created: 11/17/2016 9:53:30 PM
 * Author : Ecto1
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>


void trigUltrasoon(void);
void mesureDistance(void );
int main(void)
{
    
    while (1) 
    {
    }
}

void trigUltrasoon(void)// trigering the ultrasonic sensor 
{
	// trigering ultrasonic sensor 
	PORTD |= (1<<PORTD6);
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	PORTD &= ~(1<<PORTD6);
}