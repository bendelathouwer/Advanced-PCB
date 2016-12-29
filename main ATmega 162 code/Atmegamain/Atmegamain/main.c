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
void EnableTranslator ( int );
void EnableESP8266 ( int );




void main ( void )
{
}

void EnableEsp8266 ( int enableModulle )
{
	if( enableModulle == 0 )
	{
		
		
	}
	
}


