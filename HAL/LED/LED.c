#include "../../LIB/STD_types.h"
#include "../../MCAL/PORT/PORT.h"
#include "../../MCAL/PORT/PORT_Config.h"
#include "../../MCAL/DIO/DIO.h"
#include "LED_Config.h"
#include "LED.h"

extern LED_StrConfig_t LEDS_ArrOfstr [NUMBER_OF_LEDS];
LED_enuErrorState_t LED_Init(void){
	u8 count=0;
	for(count=0;count<NUMBER_OF_LEDS;count++){
		if(LEDS_ArrOfstr[count].LED_strActive_State==LED_enuActive_High){
		PORT_enumSetPinsConfig(LEDS_ArrOfstr[count].LED_strPortNumber,LEDS_ArrOfstr[count].LED_strPinNumber,LEDS_ArrOfstr[count].LED_strCurrent_State);
		}
		else if (LEDS_ArrOfstr[count].LED_strActive_State==LED_enuActive_Low){
			PORT_enumSetPinsConfig(LEDS_ArrOfstr[count].LED_strPortNumber,LEDS_ArrOfstr[count].LED_strPinNumber,!LEDS_ArrOfstr[count].LED_strCurrent_State);
		}
		else{
			return LED_NOK;
		}
	}
	
	return LED_OK;
}

LED_enuErrorState_t LED_Set_State(LED_enuLedsNum_t LED_enuNumber,LED_enuCurrentState LED_State){
	if ((LED_enuNumber>NUMBER_OF_LEDS)||(LED_State>LED_enuHigh)){
		return LED_NOK;
	}
	else{
		if(LEDS_ArrOfstr[LED_enuNumber].LED_strActive_State==LED_enuActive_High){
			DIO_enumSetPin(LEDS_ArrOfstr[LED_enuNumber].LED_strPortNumber,
			LEDS_ArrOfstr[LED_enuNumber].LED_strPinNumber,
			LED_State);
			return LED_OK;
		}
		else if (LEDS_ArrOfstr[LED_enuNumber].LED_strActive_State==LED_enuActive_Low){
			DIO_enumSetPin(LEDS_ArrOfstr[LED_enuNumber].LED_strPortNumber,
			LEDS_ArrOfstr[LED_enuNumber].LED_strPinNumber,
			!LED_State);
			return LED_OK;
		}
		else{
			return LED_NOK;
		}
	}
}

