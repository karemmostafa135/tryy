#ifndef DIO_H_
#define DIO_H_

/**
*@brief the ports options at atmega32
 */
typedef enum{
	DIO_enumPortA,
	DIO_enumPortB,
	DIO_enumPortC,
	DIO_enumPortD
	}DIO_enumPorts_t;
/* listing the type of errors */
typedef enum{
	/**
	 *@brief  : defult value as things goes wrong if nothing modified it
	 */
	DIO_enumNok,
	/**
	 *@brief : Everything Ok, Function had Performed Correctly.
	 */
	DIO_enumOk,
	/**
	 *@brief : NULL Pointer is passed.
	 */
	DIO_enumNullPointer,
	/**
	 *@brief : Select Port Not exist ! .
	 */
	DIO_enumWrongPort,
	/**
	 *@brief : Select Pin Not exist ! .
	 */
	DIO_enumWrongPin,
	/**
	 *@brief : Select Configuration type Not Found .
	 */
	DIO_enumWrongConfig
	}DIO_enumErrors_t;

/*listing the options for config */
typedef enum{
	/**
	 *@brief : Select Pin Configuration to be Output .
	 */
DIO_enumOutPut,
	/**
	 *@brief : Select Pin Configuration to be Input Internal PullUp .
	 */
DIO_enumInPut_PullUp,
	/**
	 *@brief : Select Pin Configuration to be Input External PullDown
	 */
DIO_enumInPut_PullDown
}DIO_enumPortConfig_t;
/**
*@brief : Select whole Port Configuration to Input o
*/
typedef enum {
	DIO_enumPinOutPut,
	DIO_enumPinInPut
}DIO_enumPinConfig_t;

/**
 *@brief :  Logic State Type : HIGH (5V) or LOW(0V )
 */
typedef enum
{
	DIO_enumLogicLow,
	DIO_enumLogicHigh
}DIO_enumLogicState_t;


/**
*@brief   : listing the available options for pins
*/
typedef enum{
	DIO_enumPin0,
	DIO_enumPin1,
	DIO_enumPin2,
	DIO_enumPin3,
	DIO_enumPin4,
	DIO_enumPin5,
	DIO_enumPin6,
	DIO_enumPin7
	}DIO_enumPinNum_t;

/**
 *@brief  : Function to Set the Pins to be Logic HIGH  or Logic LOW.
 *@param  : Port Number,Pin Number,Logic State(HIGH/LOW).
 *@return : Error State
 */
DIO_enumErrors_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPinNum_t Copy_enumPinNum,DIO_enumLogicState_t Copy_enumLogicState);

/**
 *@brief : Function to Set the whole Port(8 pins) at one time to be Logic HIGH  or Logic LOW.
 *@param : Port Number,Logic State(HIGH/LOW).
 *@return: Error State.
 */
DIO_enumErrors_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum,DIO_enumLogicState_t Copy_enumLogicState);
/*
**@brief function t assign a specific value in register 
**@options any value between 0 and 255 as the avr registers are 8 bits 
*/
/*DIO_enumErrors_t DIO_enumSetPortValue(DIO_enumPorts_t Copy_enumPortNum,u8 Copy_u8RegValue); */


/**
 *@brief  : Function to Read the Logic State of the Pin (Is it HIGH or LOW).
 *@param  : Port Number,Pin Number, Pointer points to unsigned char passed by address (to return the value of pin state).
 *@return : Error State
 */
DIO_enumErrors_t DIO_enumReadState(DIO_enumPorts_t Copy_enumPortNum,DIO_enumPinNum_t Copy_enumPinNum,DIO_enumLogicState_t* Add_Pu8PinValue);

#endif
