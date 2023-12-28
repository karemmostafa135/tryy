#include "../../LIB/Bit_utils.h"
#include "../../LIB/STD_types.h"
#include "GLOBAL_INT.h"
#include "EXT_INTERRUPT.h"
#include "EXT_INTERRUPT_Config.h"
#include "EXT_INTERRUPT_Reg.h"
// 1/LOW_LEVEL 2/LOGICAL_CHANGE 3/FAILING_EDGE 4/RISING_EDGE 
void EXT_voidInterrupt_Init(void){
	u8 Loc_u8Reg_Value=0;
	
	/***************** set configurations for INT0 interrupt if its enabled ********/
	
	#if INT0_INTERRUPT_ENABLE ==ENABLE_INTERRUPT
	SET_BIT(GICR_REG,GICR_REG_INT0_PIN);
	ENABLE_GIE();
	/*********************** in case of low_level sense *********************/
	#if INT0_SENSE_CONTROL==LOW_LEVEL
	Loc_u8Reg_Value=MCUCR_REG;
	Loc_u8Reg_Value&=INT0_RESET_SENSE_MASK;
	Loc_u8Reg_Value|=INT0_LOW_LEVEL_MASK;
	MCUCR_REG=Loc_u8Reg_Value;
	
	/****************** in case of logical_change sense *********************/
	#elif	INT0_SENSE_CONTROL==LOGICAL_CHANGE
	Loc_u8Reg_Value=MCUCR_REG;
	Loc_u8Reg_Value&=INT0_RESET_SENSE_MASK;
	Loc_u8Reg_Value|=INT0_LOGICAL_CHANGE_MASK;
	MCUCR_REG=Loc_u8Reg_Value;
	/******************* in case of failing_edge sense ***********************/
	#elif	INT0_SENSE_CONTROL==FAILING_EDGE
	Loc_u8Reg_Value=MCUCR_REG;
	Loc_u8Reg_Value&=INT0_RESET_SENSE_MASK;
	Loc_u8Reg_Value|=INT0_FAILING_EDGE_MASK;
	MCUCR_REG=Loc_u8Reg_Value;
	/************************ in case of rising_edge sense ********************/
	#elif	INT0_SENSE_CONTROL==RISING_EDGE
	Loc_u8Reg_Value=MCUCR_REG;
	Loc_u8Reg_Value&=INT0_RESET_SENSE_MASK;
	Loc_u8Reg_Value|=INT0_RISING_EDGE_MASK;
	MCUCR_REG=Loc_u8Reg_Value;
	#endif
	
	#endif
	
	
	/***************** set configurations for INT1 interrupt if its enabled ********/
	
	#if INT1_INTERRUPT_ENABLE ==ENABLE_INTERRUPT
	SET_BIT(GICR_REG,GICR_REG_INT1_PIN);
	ENABLE_GIE();
	/*********************** in case of low_level sense *********************/
	#if INT1_SENSE_CONTROL==LOW_LEVEL
	Loc_u8Reg_Value=MCUCR_REG;
	Loc_u8Reg_Value&=INT1_RESET_SENSE_MASK;
	Loc_u8Reg_Value|=INT1_LOW_LEVEL_MASK;
	MCUCR_REG=Loc_u8Reg_Value;
	
	/****************** in case of logical_change sense *********************/
	#elif	INT1_SENSE_CONTROL==LOGICAL_CHANGE
	Loc_u8Reg_Value=MCUCR_REG;
	Loc_u8Reg_Value&=INT1_RESET_SENSE_MASK;
	Loc_u8Reg_Value|=INT1_LOGICAL_CHANGE_MASK;
	MCUCR_REG=Loc_u8Reg_Value;
	/******************* in case of failing_edge sense ***********************/
	#elif	INT1_SENSE_CONTROL==FAILING_EDGE
	Loc_u8Reg_Value=MCUCR_REG;
	Loc_u8Reg_Value&=INT1_RESET_SENSE_MASK;
	Loc_u8Reg_Value|=INT1_FAILING_EDGE_MASK;
	MCUCR_REG=Loc_u8Reg_Value;
	/************************ in case of rising_edge sense ********************/
	#elif	INT1_SENSE_CONTROL==RISING_EDGE
	Loc_u8Reg_Value=MCUCR_REG;
	Loc_u8Reg_Value&=INT1_RESET_SENSE_MASK;
	Loc_u8Reg_Value|=INT1_RISING_EDGE_MASK;
	MCUCR_REG=Loc_u8Reg_Value;
	#endif
	
	#endif
	
	/***************** set configurations for INT2 interrupt if its enabled ********/
	
	#if INT2_INTERRUPT_ENABLE ==ENABLE_INTERRUPT
	SET_BIT(GICR_REG,GICR_REG_INT2_PIN);
	ENABLE_GIE();
	/******************* in case of failing_edge sense ***********************/
	#if	INT2_SENSE_CONTROL==FAILING_EDGE
	Loc_u8Reg_Value=MCUCSR_REG;
	Loc_u8Reg_Value&=INT2_RESET_SENSE_MASK;
	Loc_u8Reg_Value|=INT2_FAILING_EDGE_MASK;
	MCUCSR_REG=Loc_u8Reg_Value;
	/************************ in case of rising_edge sense ********************/
	#elif	INT2_SENSE_CONTROL==RISING_EDGE
	Loc_u8Reg_Value=MCUCSR_REG;
	Loc_u8Reg_Value&=INT2_RESET_SENSE_MASK;
	Loc_u8Reg_Value|=INT2_RISING_EDGE_MASK;
	MCUCSR_REG=Loc_u8Reg_Value;
	#endif
	
	#endif
}