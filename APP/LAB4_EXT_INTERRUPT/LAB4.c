#include "../../LIB/Bit_utils.h"
#include "../../LIB/STD_types.h"
#include "../../MCAL/PORT/PORT.h"
#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/EXT_INTERRUPT/EXT_INTERRUPT.h"
#include <util/delay.h> 

int main(){
	EXT_voidInterrupt_Init();
	while(1){
	PORT_enumSetPinsConfig(PORT_enumPortA,PORT_enumPin0,PORT_enumOutPut_Low);
	PORT_enumSetPinsConfig(PORT_enumPortD,PORT_enumPin3,PORT_enumInPut_PullUp);
	PORT_enumSetPinsConfig(PORT_enumPortD,PORT_enumPin2,PORT_enumInPut_PullUp);
	
	}
}


void __vector_1(void) __attribute__((signal)); // INT0
void __vector_1(void)
{
	DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicHigh);
	_delay_ms(1500);
	
}



void __vector_2(void) __attribute__((signal)); // INT1
void __vector_2(void)
{
	DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicHigh);
			_delay_ms(1500);
	
}



void __vector_3(void) __attribute__((signal)); // INT2
void __vector_3(void)
{
	DIO_enumSetPin(DIO_enumPortA,DIO_enumPin0,DIO_enumLogicHigh);
	_delay_ms(1500);
}
