#ifndef EXT_INTERRUPT_REG_H_
#define EXT_INTERRUPT_REG_H_
#include "../../LIB/STD_types.h"
/******************* The MCU Control Register contains control bits for interrupt sense control for INT0 and INT1 ***/
#define		MCUCR_REG		*((volatile u8 *)(0x55))

/******************* The MCU Control Register contains control bits for interrupt sense control for INT0 and INT2 ***/
#define		MCUCSR_REG		*((volatile u8 *)(0x54))

/******************* the external interrupts enable register ****************/
#define		GICR_REG		*((volatile u8 *)(0x5B))
#define		GICR_REG_INT2_PIN		5
#define		GICR_REG_INT0_PIN		6
#define		GICR_REG_INT1_PIN		7

/******************* the external interrupts flags resgister  ****************/
#define		GIFR_REG		*((volatile u8 *)(0x5A))


#endif /* EXT_INTERRUPT_REG_H_ */