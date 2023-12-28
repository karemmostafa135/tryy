#ifndef GLOBAL_INT_H_
#define GLOBAL_INT_H_
#include "../../LIB/STD_types.h"

#define GIE_BIT	7
#define SREG_REG  *(( volatile u8 *)(0x5F))

void ENABLE_GIE(void);
void DISABLE_GIE(void);



#endif /* GLOBAL_INT_H_ */