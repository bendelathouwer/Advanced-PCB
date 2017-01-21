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

// function prototypes
 //void ReadTrottleStick( void );
 //void ReadRudderStick ( void );
 //void NormalizeRudder ( void );
 //void NormalizeTrottle ( void );
 void  GeneratePWM1( int OfTime , int Ontime );
 void  Ge neratePWM2( int OfTime1 , int Ontime1 );


int  main( void )
{
	 
	
    while ( 1 ) 
    {
		
    }
}



// these functions generate  a pwm signal based on the on of timer value's 
void GeneratePWM1( int OfTime , int Ontime )

{
	
}

void GeneratePWM2(  int OfTime1 , int Ontime1  )

{
	
}

//void ReadRudderStick()
//{
//	
//	
//}
//
//void ReadTrottleStick()
//{
//}