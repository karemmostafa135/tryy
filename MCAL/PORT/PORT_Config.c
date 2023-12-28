#include "PORT_Config.h"
#include "PORT.h"

/*
**@brief array to set four ports (A,B,C,D) from 0 to 7 on array PORTA ,8 to 15 PORTB , 16 to 23 PORTC?
24 to 31 PORTD
**@options for every pin 1/DIO_enumOutPut_lOw 2/ DIO_enumOutPut_High  3/DIO_enumInPut_PullDown
4/DIO_enumInPut_PullUp
**@default the defualt is DIO_enumInPut_PullUp
*/

PORT_enumPinConfig_t DIO_arrenuPins_Config[32]={
	/*** PORTA PINS***/
	PORT_enumOutPut_High,				
	PORT_enumInPut_PullUp,	
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,    
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	/*** PORTB PINS***/
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	/***** PORTC PINS **/
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	/**** PORTD PINS **/
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumOutPut_High,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	PORT_enumInPut_PullUp,
	};


