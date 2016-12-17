/*
 * Atmegamain.c
 *
 * Created: 11/9/2016 1:11:48 PM
 * Author : Ben De LAthouwer
 * main processor code 
 *
 */ 
#define F_CPU 320000000 
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>


//void trigUltrasoon( void );

//void SetLevelTranslatorState ( int );

void EnableEsp8266 ( int );

void FastForward ( void );


int main( void )
{
	DDRA |= (1 << DDA0)| (1<<DDA1) | (1<<DDA2) | (1<<DDA3)|(1<<DDA4) | (1<<DDA5) | (1<<DDA6);// seting the port as output 
	
    while (1) 
    {
		FastForward();
    }
}

void FastForward()
{
	
	PORTA |= (1 << PA0)| (1<<PA1) | (1<<PA2) | (1<<PA3)|(1<<PA4) | (1<<PA5) | (1<<PA6);// drives pins A0=>A7 high 
	
	
	
}