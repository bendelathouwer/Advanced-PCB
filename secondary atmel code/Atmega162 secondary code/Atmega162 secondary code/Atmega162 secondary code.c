/*
 * Atmegamain.c
 *
 * Created: 11/9/2016 1:11:48 PM
 * Author : Ben De Lathouwer
 * main processor code 
 *
 */ 
#define F_CPU 320000000UL 
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
#include <util/delay.h>

 
 


int  main( void )
{
	DDRA|= ( 1<<PORTA0) |( 1<<PORTA1 ) |( 1<<PORTA2 ) |(1<<PORTA3) |(1<<PORTA4) |(1<<PORTA5) |(1<<PORTA6);//setting the port a pins (0 to 6) as an output

	PORTA = 0;
	
	setPortABit(PA0); // setting pwmB high
	setPortABit(PA3); // standby pin high
	setPortABit(PA6); // setting pwmA high
		
	while ( 1 ) 
    {	
		botForward();
		wait(3);
		
		botLeft();
		wait(3);
		
		botForward();
		wait(3);
		
		botRight();
		wait(3);
		
		botForward();
		wait(3);
		
		botBackward();
		wait(3);
    }
}

void wait(int x)
{
	_delay_ms(10);
}

void botForward()
{
	setPortABit(PA1);
	clearPortABit(PA2);
	setPortABit(PA4);
	clearPortABit(PA5);
}

void botBackward()
{
	clearPortABit(PA1);
	setPortABit(PA2);
	clearPortABit(PA4);
	setPortABit(PA5);
}

void botLeft()
{
	setPortABit(PA1);
	clearPortABit(PA2);
	clearPortABit(PA4);
	setPortABit(PA5);
}

void botRight()
{
	clearPortABit(PA1);
	setPortABit(PA2);
	setPortABit(PA4);
	clearPortABit(PA5);
}

int	setPortABit(int x)
{
	PORTA |= (1 << x);
}

int	clearPortABit(int x)
{
	PORTA &= ~(1 << x);
}

int	togglePortABit(int x)
{
	PORTA ^= (1 << x);
}
	
		
//PORTA |= (1<<PA1);
//PORTA |= (1<<PA2);
//PORTA |= (1<<PA4);
//PORTA |= (1<<PA5);	

