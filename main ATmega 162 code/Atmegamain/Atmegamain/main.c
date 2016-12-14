/*
 * Atmegamain.c
 *
 * Created: 11/9/2016 1:11:48 PM
 * Author : Ben De LAthouwer
 * main processor code 
 *
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>


void trigUltrasoon( void );

void SetLevelTranslatorState ( int );

void EnableEsp8266 ( int );




int main( void )
{
	
	DDRD |= ( 1 << PORTD6);
	
	
	DDRC  |= (1 << PORTC0);
	
    while (1) 
    {
    }
}


void SetLevelTranslatorState ( int state  )
{
	if (state == 0)
	{
		PORTC &= ~(1<<PORTC0);
	}
	if ( state == 1 )
	{
			PORTC |= (1<<PORTC0);
	}
	
}  

void EnableEsp8266 ( int enable )
{
	if (enable  == 0)
	{
		PORTD &= ~(1<<PORTD6);
	}
	if ( enable  == 1 )
	{
		PORTD |= (1<<PORTD6);
	}
}


