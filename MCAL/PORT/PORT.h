#ifndef PORT_H_
#define PORT_H_

#define PIN_INPUT	0
#define PIN_OUTPUT	1
#define PIN_LOW		0
#define PIN_HIGH	1

/**
*@brief   : listing the available options for pins
*/
typedef enum{
	PORT_enumPin0,
	PORT_enumPin1,
	PORT_enumPin2,
	PORT_enumPin3,
	PORT_enumPin4,
	PORT_enumPin5,
	PORT_enumPin6,
	PORT_enumPin7
}PORT_enumPinNum_t;
/**
*@brief the ports options at atmega32
 */
typedef enum{
	PORT_enumPortA,
	PORT_enumPortB,
	PORT_enumPortC,
	PORT_enumPortD
	}PORT_enumPorts_t;
	
/* listing the type of errors */
typedef enum{
	/**
	 *@brief  : defult value as things goes wrong if nothing modified it
	 */
	PORT_enumNok,
	/**
	 *@brief : Everything Ok, Function had Performed Correctly.
	 */
	PORT_enumOk,
	/**
	 *@brief : NULL Pointer is passed.
	 */
	PORT_enumNullPointer,
	/**
	 *@brief : Select Port Not exist ! .
	 */
	PORT_enumWrongPort,
	/**
	 *@brief : Select Pin Not exist ! .
	 */
	PORT_enumWrongPin,
	/**
	 *@brief : Select Configuration type Not Found .
	 */
	PORT_enumWrongConfig
	
	}PORT_enumErrors_t;

typedef enum{
	/**
	 *@brief : Select Pin Configuration to be Output and low .
	 */
PORT_enumOutPut_Low,
	/**
	 *@brief : Select Pin Configuration to be Output and high .
	 */
	
	PORT_enumOutPut_High,
	/**
	 *@brief : Select Pin Configuration to be Input Internal PullUp .
	 */
PORT_enumInPut_PullUp,
	/**
	 *@brief : Select Pin Configuration to be Input External PullDown
	 */
PORT_enumInPut_PullDown
}PORT_enumPinConfig_t;

#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)		CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)		0b##b7##b6##b5##b4##b3##b2##b1##b0


/**
 *@brief  : Function to Configure Specific pin to be INPUT or OUTPUT port.
 *@param  : Port Number,Pin Number ,Configuration type(Input/Output).
 *@return : Error State
 */
#define PREPROCESSOR_CONFIG		0
#define POSTCOMPILE_CONFIG		1

#define TWO_PORTS		2
#define THREE_PORTS		3
#define FOUR_PORTS		4

#define NUMBER_OF_PINS		32

/* function to set the configuration of each pin */
PORT_enumErrors_t PORT_enumSetPinsConfig(PORT_enumPorts_t Copy_enumPortNum,PORT_enumPinNum_t Copy_enumPinNum,PORT_enumPinConfig_t Copy_enumConfig);


#endif /* PORT_H_ */