#include "../../LIB/Bit_utils.h"
#include "GLOBAL_INT.h"
/*
**@brief function to enable the global interrupt 
*/
void ENABLE_GIE(void){
	SET_BIT(SREG_REG,GIE_BIT);
}

/*
**@brief function to diable the global interrupt
*/

void DISABLE_GIE(void){
	CLR_BIT(SREG_REG,GIE_BIT);
}