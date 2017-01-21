/*
 * Atmegamain.c
 *
 * Created: 11/9/2016 1:11:48 PM
 * Author : Ben De Lathouwer
 * main processor code 
 *
 */ 
#define F_CPU 320000000 
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>
#include <avr/delay.h>


// function prototypes 
void InitUart ( void );
void EnableEsp( int EspEnable  );
void EnableLevelConvertor ( int Enable ); 
void SendDataToESP ( double data  ); 
double  RecieveData( int Recieve );
void  EnableDataTransmision ( int  go );// enable Data transmission from secondary controller 



int  main( void )
{
	 
	
    while ( 1 ) 
    {
		
		EnableLevelConvertor( 1 );
		_delay_ms (1000);
		EnableLevelConvertor( 0 );
		_delay_ms (1000);
		
		
    }
}

void InitUart ( void )
{
	
}

void EnableEsp( int EspEnable  )
{
	if (EspEnable == 1)
	{
		
		//write Enable (on esp) pin high
	
	}
	else
	{
		//write Enable (on esp) pin low
	}
}
void EnableLevelConvertor ( int Enable )
{
	DDRC|= (1<<DDRC); 
	if ( Enable == 1 )
	{
		 PORTC |= (1<<PORTC0);    
	}
	else
	{
		PORTC &= ~(1<<PORTC0);   
	}
	
}
void SendDataToESP ( double data  )
{
	
}
double  RecieveData( int Recieve )
{
	
}
void  EnableDataTransmision ( int  go )
{
	
}


