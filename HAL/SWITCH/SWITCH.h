#ifndef SWITCH_H_
#define SWITCH_H_
	
	typedef enum{
	KEY_NOT_PRESSED,
	KEY_PRESSED	}
	SWITCH_Current_State_t;
	

typedef enum{
	SWITCH_enuPullUp=2,
	SWITCH_enuPullDown=3
}SWITCH_enuActiveState_t;

typedef enum{
		START_SWITCH,
		SECOND_SWITCH,
		THIRD_SWITCH,
		FOURTHSWITCH,
		FIFTH_SWITCH,
		SIXTH_SWITCH
	}SWITCH_enuNum_t;

	
	typedef enum{
		NOK,
		OK
	}SWITCH_enuErrorState_t;


/**
*@brief   : listing the available options for pins
*/
typedef enum{
	SWITCH_enumPin0,
	SWITCH_enumPin1,
	SWITCH_enumPin2,
	SWITCH_enumPin3,
	SWITCH_enumPin4,
	SWITCH_enumPin5,
	SWITCH_enumPin6,
	SWITCH_enumPin7
}SWITCH_enumPinNum_t;
/**
*@brief the ports options at atmega32
 */
typedef enum{
	SWITCH_enumPortA,
	SWITCH_enumPortB,
	SWITCH_enumPortC,
	SWITCH_enumPortD
	}SWITCH_enumPorts_t;
	
	typedef struct{
		SWITCH_enumPorts_t SWITCH_strPortNumber;
		SWITCH_enumPinNum_t SWITCH_strPinNumber;
		SWITCH_enuActiveState_t SWITCH_strActive_State;
	}SWITCH_StrConfig_t;
	
	/* 
	**@brief function to init the switches 
	*/
SWITCH_enuErrorState_t SWITCH_Init(void);

	/* 
	**@brief function to get read of specific switche 
	*/
SWITCH_enuErrorState_t SWITCH_GetState(SWITCH_enuNum_t SWITCH_Num,u8 *Local_Switch_State);
#endif
