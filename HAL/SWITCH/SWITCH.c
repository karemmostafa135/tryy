#include "../../MCAL/PORT/PORT.h"
#include "../../LIB/STD_types.h"
#include "../../MCAL/PORT/PORT_Config.h"
#include "../../MCAL/DIO/DIO.h"
#include "SWITCH.h"
#include "SWITCH_Config.h"
extern SWITCH_StrConfig_t SWITCH_ArrOfStr[NUMBER_OF_SWITCHES];

SWITCH_enuErrorState_t SWITCH_Init(void){
	u8 counter=0;
	for(counter=0;counter<NUMBER_OF_SWITCHES;counter++){
		PORT_enumSetPinsConfig(SWITCH_ArrOfStr[counter].SWITCH_strPortNumber,SWITCH_ArrOfStr[counter].SWITCH_strPinNumber,SWITCH_ArrOfStr[counter].SWITCH_strActive_State);
	}
	return OK;
}

SWITCH_enuErrorState_t SWITCH_GetState(SWITCH_enuNum_t SWITCH_Num,u8 *Local_Switch_State){
	SWITCH_enuErrorState_t Local_enuSwitchErrorState=OK;
	if(SWITCH_Num>NUMBER_OF_SWITCHES){
		return  Local_enuSwitchErrorState=NOK;
	}
	else if(Local_Switch_State==NULL){
	return Local_enuSwitchErrorState=NOK;
	}
	else{
		Local_enuSwitchErrorState=OK;
		 DIO_enumReadState(SWITCH_ArrOfStr[SWITCH_Num].SWITCH_strPortNumber,
		 SWITCH_ArrOfStr[SWITCH_Num].SWITCH_strPinNumber,
		 Local_Switch_State);
	}
	
	/*switch(SWITCH_ArrOfStr[SWITCH_Num].SWITCH_strActive_State){
		
		case SWITCH_enuPullUp:
		if(*Local_Switch_State==KEY_NOT_PRESSED){
			*Local_Switch_State=1;
		}
		else if (*Local_Switch_State==KEY_PRESSED){
			 *Local_Switch_State=0;
		}
		else{
			return Local_enuSwitchErrorState=NOK;
		}
		break;
		
		
		case SWITCH_enuPullDown:
		if(*Local_Switch_State==KEY_PRESSED){
			*Local_Switch_State=1;
		}
		else if (*Local_Switch_State==KEY_NOT_PRESSED){
			*Local_Switch_State=0;
		}
		else{
			return Local_enuSwitchErrorState=NOK;
		}
		break;	
			
		}*/
	return Local_enuSwitchErrorState;
}