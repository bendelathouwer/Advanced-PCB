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
#include <util/delay.h>


//function prototypes

void BotForward ( void );
void BotBackwards( void  );
void BotLeft ( void );
void BotRight ( void  );
void BotStop  ( void );



int  main( void )
{
	 
	DDRA|= ( 1<<PORTA0) |( 1<<PORTA1 ) |( 1<<PORTA2 ) |(1<<PORTA3) |(1<<PORTA4) |(1<<PORTA5) |(1<<PORTA6);//setting the port a pins (0 to 6) as an output 
    
	PORTA |= (1<<PORTA0);//setting pwmB high
	PORTA |= (1<<PORTA6);//setting pwmA high
	
	
	while ( 1 ) 
    {
		BotForward();
		_delay_ms(5000);
		BotBackwards();
		_delay_ms(5000);
		BotLeft();
		_delay_ms(5000);
		BotRight();
		_delay_ms(5000);
		BotStop();
		_delay_ms(5000);
		
    }
}

// both motors clockwise
void BotForward ( void )
{
	PORTA &= ~(1<<PORTA1);//Bin1 pin
	PORTA |= (1<<PORTA2);//Bin2 pin
	PORTA |= (1<<PORTA3);//standby pin
	PORTA &= ~(1<<PORTA4);//Ain1 pin
	PORTA |= (1<<PORTA5);//Ain2  pin 
	

}

// bothe motors counter clockwise
void BotBackwards( void  )
{
	PORTA |= (1<<PORTA1);//Bin1 pin
	PORTA &= ~(1<<PORTA2);//Bin2 pin
	PORTA |= (1<<PORTA3);//standby pin
	PORTA |= (1<<PORTA4);//Ain1 pin
	PORTA &= ~(1<<PORTA5);//Ain2  pin

	
		
		
}

//  motor1 clockewise , motor2 counter clockwise 
void BotLeft ( void )
{
	PORTA &= ~(1<<PORTA1);//Bin1 pin
	PORTA |= (1<<PORTA2);//Bin2 pin
	PORTA |= (1<<PORTA3);//standby pin
	PORTA |= (1<<PORTA4);//Ain1 pin
	PORTA &= ~(1<<PORTA5);//Ain2  pin
	 
	
	
}

//  motor1 clockewise , motor2 counter clockwise 
void BotRight ( void  )
{
	PORTA |=(1<<PORTA1);//Bin1 pin
	PORTA &= ~(1<<PORTA2);//Bin2 pin
	PORTA |= (1<<PORTA3);//standby pin
	PORTA |= (1<<PORTA4);//Ain1 pin
	PORTA &= ~(1<<PORTA5);//Ain2  pin
	
		
}
// both motors off
void BotStop  ( void )
{
		PORTA |=(1<<PORTA1);//Bin1 pin
		PORTA |= (1<<PORTA2);//Bin2 pin
		PORTA &= ~(1<<PORTA3);//standby pin
		PORTA |= (1<<PORTA4);//Ain1 pin
		PORTA |= (1<<PORTA5);//Ain2  pin
}

