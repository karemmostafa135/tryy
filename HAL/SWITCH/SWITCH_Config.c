#include "../../LIB/STD_types.h"
#include "SWITCH_Config.h"
#include "SWITCH.h"
SWITCH_StrConfig_t SWITCH_ArrOfStr[NUMBER_OF_SWITCHES]={
	[START_SWITCH]={
		.SWITCH_strPortNumber=SWITCH_enumPortB,
		.SWITCH_strPinNumber=SWITCH_enumPin1,
		.SWITCH_strActive_State=SWITCH_enuPullUp
	},
	[SECOND_SWITCH]={
		.SWITCH_strPortNumber=SWITCH_enumPortB,
		.SWITCH_strPinNumber=SWITCH_enumPin2,
		.SWITCH_strActive_State=SWITCH_enuPullUp
	}
	/*[THIRD_SWITCH]={
		.SWITCH_strPortNumber=SWITCH_enumPortC,
		.SWITCH_strPinNumber=SWITCH_enumPin4,
		.SWITCH_strActive_State=SWITCH_enuPullDown
	}*/
	};