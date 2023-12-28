#include "../../LIB/STD_types.h"
#include "LED_Config.h"
#include "LED.h"
/*
**@brief options ports 1/LED_enumPortA 2/LED_enumPortB 3/LED_enumPortC 4/LED_enumPortD
**options for pins from  LED_enumPin0 to LED_enumPin7
**options for current state 1/LED_enuHigh 2/LED_enuLow
**options for Active state 1/LED_enuActive_High 2/LED_enuActive_Low
*/
LED_StrConfig_t LEDS_ArrOfstr[NUMBER_OF_LEDS]={
	[START_LED]={
		.LED_strPortNumber=LED_enumPortA,
		.LED_strPinNumber=LED_enumPin1,
		.LED_strCurrent_State=LED_enuHigh,
		.LED_strActive_State=LED_enuActive_High
	},
	[SECOND_LED]={
		.LED_strPortNumber=LED_enumPortB,
		.LED_strPinNumber=LED_enumPin0,
		.LED_strCurrent_State=LED_enuLow,
		.LED_strActive_State=LED_enuActive_Low						 	
	},
	[END_LED]={
		.LED_strPortNumber=LED_enumPortC,
		.LED_strPinNumber=LED_enumPin2,
		.LED_strCurrent_State=LED_enuLow,
		.LED_strActive_State=LED_enuActive_High
	}
	};