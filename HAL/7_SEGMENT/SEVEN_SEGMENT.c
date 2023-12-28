#include "../../LIB/STD_types.h"
#include "../../LIB/Bit_utils.h"
#include "../../MCAL/PORT/PORT.h"
#include "../../MCAL/DIO/DIO.h"
#include "SEVEN_SEGMENT.h"
#include "SEVEN_SEGMENT_Config.h"

extern SEVEN_SEGMENT_StrConfig_t SEVEN_SEGMENT_ArrOfStr[NUMBER_OF_7_SEGMENTS][NUMBER_OF_7_SEGMENTS_PINS];

u8 Segments_Common_Anode[10]={
	0b11000000, // 0
	0b11111001, // 1
	0b10100100, // 2
	0b10110000, // 3
	0b10011001, // 4
	0b10010010, // 5
	0b10000010, // 6
	0b11111000, // 7
	0b10000000, // 8
	0b10010000  // 9
	};
	
	u8 Segments_Common_Cathode[10]={
	0b00111111, // 0
	0b00000110, // 1
	0b01011011, // 2
	0b01001111, // 3
	0b01100110, // 4
	0b01101101, // 5
	0b01111101, // 6
	0b00000111, // 7
	0b01111111, // 8
	0b01101111  // 9
	};
	/*******************
	**@brief seven segements init function
	*****************/

 void SEVEN_SEGMENT_Init(void){
	u8 Interal_Counter=0,External_Counter=0;
/* the outer for loop for each seven_segment */	
	for(External_Counter=0;External_Counter<NUMBER_OF_7_SEGMENTS;External_Counter++){
		/* the inner for loop to initialize each seven_segment pins */
		for(Interal_Counter=0;Interal_Counter<NUMBER_OF_7_SEGMENTS_PINS;Interal_Counter++){
			if(SEVEN_SEGMENT_ArrOfStr[External_Counter][Interal_Counter].SEVEN_SEG_Active_State==SEVEN_SEGMENT_enumCommon_Cathode){
			PORT_enumSetPinsConfig(SEVEN_SEGMENT_ArrOfStr[External_Counter][Interal_Counter].SEVEN_SEG_enumPortNumber,
			SEVEN_SEGMENT_ArrOfStr[External_Counter][Interal_Counter].SEVEN_SEG_strPinNumber,
			PORT_enumOutPut_Low); 
			}
			else if(SEVEN_SEGMENT_ArrOfStr[External_Counter][Interal_Counter].SEVEN_SEG_Active_State==SEVEN_SEGMENT_enumCommon_Anode){
			PORT_enumSetPinsConfig(SEVEN_SEGMENT_ArrOfStr[External_Counter][Interal_Counter].SEVEN_SEG_enumPortNumber,
			SEVEN_SEGMENT_ArrOfStr[External_Counter][Interal_Counter].SEVEN_SEG_strPinNumber,
			!PORT_enumOutPut_Low);
		}
				}
		/*******************************************************************************************************************/
	}
} 

/*
**@brief function to set the value on seven_segment 
**@options from 0 to 9 in case one seven segment and from 0 to 99 in case of two seven segment
*/


SEVEN_SEGMENT_enumErrors_t SEVEN_SEGMENT_SET_VALUE(u8 Copy_Seven_Segment_Value){
u8 Loc_Value_Of_Tens =0,Loc_Less_Than_ten=0;
u8 Loc_Pins_Counter =0;
/****************************** case of two seven segments ************************/
if (NUMBER_OF_7_SEGMENTS==2){
	/******************** to validate that the value sent by the user is correct *****************************/
	if(Copy_Seven_Segment_Value>99){
		return SEVEN_SEGMENT_enumNok;
	}
	else {
	/************************ setting the value for each seven segment ***************/	
		Loc_Less_Than_ten=(Copy_Seven_Segment_Value%10);
		Loc_Value_Of_Tens=(Copy_Seven_Segment_Value/10);
	}
}


/****************************** case of one seven segments ************************/
else if (NUMBER_OF_7_SEGMENTS==1){
	/* to validate that the value sent by the user is correct */
	if(Copy_Seven_Segment_Value>9){
		return SEVEN_SEGMENT_enumNok;
	}
	else {
		Loc_Less_Than_ten=Copy_Seven_Segment_Value;
	}
}
else {
	return SEVEN_SEGMENT_enumNok;
}

for(Loc_Pins_Counter=0;Loc_Pins_Counter<7;Loc_Pins_Counter++){
	#if (NUMBER_OF_7_SEGMENTS==1)||(NUMBER_OF_7_SEGMENTS==2)
	if(SEVEN_SEGMENT_ArrOfStr[FIRST_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_Active_State==SEVEN_SEGMENT_enumCommon_Cathode){
	DIO_enumSetPin(SEVEN_SEGMENT_ArrOfStr[FIRST_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_enumPortNumber,SEVEN_SEGMENT_ArrOfStr[FIRST_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_strPinNumber,GET_BIT(Segments_Common_Cathode[Loc_Less_Than_ten],Loc_Pins_Counter));
	}
	else if(SEVEN_SEGMENT_ArrOfStr[FIRST_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_Active_State==SEVEN_SEGMENT_enumCommon_Anode){
		DIO_enumSetPin(SEVEN_SEGMENT_ArrOfStr[FIRST_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_enumPortNumber,SEVEN_SEGMENT_ArrOfStr[FIRST_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_strPinNumber,GET_BIT(Segments_Common_Anode[Loc_Less_Than_ten],Loc_Pins_Counter));
	}
	else
	{
		return SEVEN_SEGMENT_enumNok;
	}
	#endif
	#if NUMBER_OF_7_SEGMENTS==2
	if(SEVEN_SEGMENT_ArrOfStr[SECOND_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_Active_State==SEVEN_SEGMENT_enumCommon_Cathode){
		DIO_enumSetPin(SEVEN_SEGMENT_ArrOfStr[SECOND_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_enumPortNumber,SEVEN_SEGMENT_ArrOfStr[SECOND_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_strPinNumber,GET_BIT(Segments_Common_Cathode[Loc_Value_Of_Tens],Loc_Pins_Counter));
	}
	else if(SEVEN_SEGMENT_ArrOfStr[SECOND_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_Active_State==SEVEN_SEGMENT_enumCommon_Anode){
		DIO_enumSetPin(SEVEN_SEGMENT_ArrOfStr[SECOND_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_enumPortNumber,SEVEN_SEGMENT_ArrOfStr[SECOND_SEVEN_SEGMENT][Loc_Pins_Counter].SEVEN_SEG_strPinNumber,GET_BIT(Segments_Common_Anode[Loc_Value_Of_Tens],Loc_Pins_Counter));
	}
	else
	{
		return SEVEN_SEGMENT_enumNok;
	}
	#endif
}
return SEVEN_SEGMENT_enumOk ;
}

