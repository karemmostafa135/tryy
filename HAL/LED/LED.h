#ifndef LED_H_
#define	LED_H_
typedef enum{
	LED_enuActive_Low,
	LED_enuActive_High
}LED_enuActiveState_t;
typedef enum{
		START_LED,
		SECOND_LED,
		THIRD_LED,
		FOURTH_LED,
		FIFTH_LED,
		SIXTH_LED
	}LED_enuLedsNum_t;
	
typedef enum{
	LED_enuLow,
	LED_enuHigh
	}LED_enuCurrentState;
	
	typedef enum{
		LED_NOK,
		LED_OK
	}LED_enuErrorState_t;


/**
*@brief   : listing the available options for pins
*/
typedef enum{
	LED_enumPin0,
	LED_enumPin1,
	LED_enumPin2,
	LED_enumPin3,
	LED_enumPin4,
	LED_enumPin5,
	LED_enumPin6,
	LED_enumPin7
}LED_enumPinNum_t;
/**
*@brief the ports options at atmega32
 */
typedef enum{
	LED_enumPortA,
	LED_enumPortB,
	LED_enumPortC,
	LED_enumPortD
	}LED_enumPorts_t;
	
	typedef struct{
		LED_enumPorts_t LED_strPortNumber;
		LED_enumPinNum_t LED_strPinNumber;
		LED_enuActiveState_t LED_strActive_State;
		LED_enuCurrentState LED_strCurrent_State;
	}LED_StrConfig_t;
/*
**@brief function to initialize the leds that user choose
*/
LED_enuErrorState_t LED_Init(void);
/*
**@brief function to change the led state during runtime
**@options 1/ LED_enuLow 2/LED_enuHigh
*/
LED_enuErrorState_t LED_Set_State(LED_enuLedsNum_t LED_enuNumber,LED_enuCurrentState LED_State);

#endif