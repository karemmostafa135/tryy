/*#include "../../MCAL/DIO/DIO.h"
#include "../../LIB/STD_types.h"
#include "../../HAL/SWITCH/SWITCH.h"
#include "../../HAL/SWITCH/SWITCH_Config.h"
#include "../../HAL/LED/LED.h"
#include "../../HAL/LED/LED_Config.h"
/*int main(void)
{
	LED_Init();
	SWITCH_Init();
	u8 flag =1 ;
	while(1)
	{
			DIO_enumReadState(DIO_enumPortA,DIO_enumPin2,&flag);

		if(flag==0)
		{
			DIO_enumSetPin(DIO_enumPortC,DIO_enumPin2,DIO_enumLogicHigh);
		}
			//DIO_enumSetPin(DIO_enumPortC,DIO_enumPin2,DIO_enumLogicLow);
	}
}
*/