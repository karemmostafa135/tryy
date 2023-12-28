#include "../../HAL/7_SEGMENT/SEVEN_SEGMENT.h"
#include "../../HAL/SWITCH/SWITCH.h"
#include "../../MCAL/DIO/DIO.h"
#include "../../MCAL/PORT/PORT.h"
#include "../../LIB/Bit_utils.h"
/* int main(){
	u8 Loc_Switch1_Read=1,Loc_Switch2_Read=1;
	u8 Loc_Timer_Counter =0;
	SEVEN_SEGMENT_Init();
	SWITCH_Init();
	while (1){
	SEVEN_SEGMENT_SET_VALUE(100);
	SWITCH_GetState(START_SWITCH,&Loc_Switch1_Read); 
	SWITCH_GetState(SECOND_SWITCH,&Loc_Switch2_Read);
	if (Loc_Switch1_Read==0){
		*((volatile u8 *)(0x32))=0b00000011;
        Loc_Timer_Counter++;
	}
	if (Loc_Switch2_Read==0){
		Loc_Timer_Counter--;
	}
	SEVEN_SEGMENT_SET_VALUE(Loc_Timer_Counter);
	
	return 0;
	}
	}
*/	