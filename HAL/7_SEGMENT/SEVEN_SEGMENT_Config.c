#include "SEVEN_SEGMENT.h"
#include "SEVEN_SEGMENT_Config.h"

/* array to set the pins and ports for each seven_Segment */


SEVEN_SEGMENT_StrConfig_t SEVEN_SEGMENT_ArrOfStr[NUMBER_OF_7_SEGMENTS][NUMBER_OF_7_SEGMENTS_PINS]={
	/* for the first 7_segment pins configuration */
	{
	[SEVEN_SEGMENT_enumPin0]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortA,			/*port of first pin  */
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin0,				/*pin number of first pin */
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Cathode
	},
	[SEVEN_SEGMENT_enumPin1]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortA,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin1,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Cathode
	},
	[SEVEN_SEGMENT_enumPin2]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortA,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin2,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Cathode
	},
	[SEVEN_SEGMENT_enumPin3]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortA,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin3,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Cathode
	},
	[SEVEN_SEGMENT_enumPin4]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortA,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin4,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Cathode
	},
	[SEVEN_SEGMENT_enumPin5]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortA,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin5,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Cathode
	},
	[SEVEN_SEGMENT_enumPin6]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortA,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin6,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Cathode
	},
	[SEVEN_SEGMENT_enumPin7]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortA,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin7,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Cathode
	}
	} 	
	/* for the second 7_segment pins configuration */
,
	{
		[SEVEN_SEGMENT_enumPin0]={	
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortC,		/*port of first pin */
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin0,			/*pin number of first pin */	
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Anode
	},
	[SEVEN_SEGMENT_enumPin1]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortC,	 
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin1,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Anode		 
	},
	[SEVEN_SEGMENT_enumPin2]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortC,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin2,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Anode
	},
	[SEVEN_SEGMENT_enumPin3]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortC,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin3,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Anode
	},
	[SEVEN_SEGMENT_enumPin4]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortC,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin4,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Anode
	},
	[SEVEN_SEGMENT_enumPin5]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortC,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin5,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Anode
	},
	[SEVEN_SEGMENT_enumPin6]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortC,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin6,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Anode
	},
	[SEVEN_SEGMENT_enumPin7]={
		.SEVEN_SEG_enumPortNumber=SEVEN_SEGMENT_enumPortC,
		.SEVEN_SEG_strPinNumber=SEVEN_SEGMENT_enumPin7,
		.SEVEN_SEG_Active_State=SEVEN_SEGMENT_enumCommon_Anode
	}
	}
};