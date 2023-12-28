/*
 * SEVEN_SEGMENT.h
 *
 * Created: 12/18/2023 12:56:47 PM
 *  Author: elkny
 */ 


#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#include "../../LIB/STD_types.h"

#define FIRST_SEVEN_SEGMENT		0
#define SECOND_SEVEN_SEGMENT		1

typedef enum{
	/**
	 *@brief  : defult value as things goes wrong if nothing modified it
	 */
	SEVEN_SEGMENT_enumNok,
	/**
	 *@brief : Everything Ok, Function had Performed Correctly.
	 */
	SEVEN_SEGMENT_enumOk,
	/**
	 *@brief : NULL Pointer is passed.
	 */
	SEVEN_SEGMENT_enumNullPointer,
	/**
	 *@brief : Select Port Not exist ! .
	 */
	SEVEN_SEGMENT_enumWrongPort,
	/**
	 *@brief : Select Pin Not exist ! .
	 */
	SEVEN_SEGMENT_enumWrongPin,
	/**
	 *@brief : Select Configuration type Not Found .
	 */
	SEVEN_SEGMENT_enumWrongConfig
	}SEVEN_SEGMENT_enumErrors_t;
	
	/*
	**@brief fucntion to select the type of selected seven_segments
	**@options common anode and common cathode 
	*/
typedef enum{
	SEVEN_SEGMENT_enumCommon_Cathode,
	SEVEN_SEGMENT_enumCommon_Anode
	}SEVEN_SEGMENT_enuActiveState_t;

typedef enum{
	 SEVEN_SEGMENT_enumPin0,
	 SEVEN_SEGMENT_enumPin1,
	 SEVEN_SEGMENT_enumPin2,
	 SEVEN_SEGMENT_enumPin3,
	 SEVEN_SEGMENT_enumPin4,
	 SEVEN_SEGMENT_enumPin5,
	 SEVEN_SEGMENT_enumPin6,
	 SEVEN_SEGMENT_enumPin7
} SEVEN_SEGMENT_enumPinNum_t;
/**
*@brief the ports options at atmega32
 */
typedef enum{
	 SEVEN_SEGMENT_enumPortA,
	 SEVEN_SEGMENT_enumPortB,
	 SEVEN_SEGMENT_enumPortC,
	 SEVEN_SEGMENT_enumPortD
	} SEVEN_SEGMENT_enumPorts_t;
	
	typedef struct{
		 SEVEN_SEGMENT_enumPorts_t SEVEN_SEG_enumPortNumber;
		 SEVEN_SEGMENT_enumPinNum_t SEVEN_SEG_strPinNumber;
		 SEVEN_SEGMENT_enuActiveState_t		SEVEN_SEG_Active_State;
	} SEVEN_SEGMENT_StrConfig_t;

/*
**@brief function to initialize the 7_segemnts  
*/
void SEVEN_SEGMENT_Init(void);

/*
**@brief a function to set the values on seven segments 
*/
SEVEN_SEGMENT_enumErrors_t SEVEN_SEGMENT_SET_VALUE(u8 Copy_Seven_Segment_Value);
#endif /* SEVEN_SEGMENT_H_ */