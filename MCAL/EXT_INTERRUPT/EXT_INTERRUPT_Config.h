#ifndef EXT_INTERRUPT_CONFIG_H_
#define EXT_INTERRUPT_CONFIG_H_
/* to turn on an interrupt please put ENABLE_INTERRUPT */

#define INT0_INTERRUPT_ENABLE	ENABLE_INTERRUPT /* interrupt at pin2 on PortD */
#define INT1_INTERRUPT_ENABLE	ENABLE_INTERRUPT /* interrupt at pin3 on PortD */
#define INT2_INTERRUPT_ENABLE	DISABLE_INTERRUPT /* interrupt at pin2 on PortB */
/*
**@brief sense control for INT0 if enabled 
**@options 1/LOW_LEVEL 2/LOGICAL_CHANGE 3/FAILING_EDGE 4/RISING_EDGE 
*/
#define INT0_SENSE_CONTROL		FAILING_EDGE

/*
**@brief sense control for INT1 if enabled
**@options 1/LOW_LEVEL 2/LOGICAL_CHANGE 3/FAILING_EDGE 4/RISING_EDGE
*/
#define INT1_SENSE_CONTROL		FAILING_EDGE

/*
**@brief sense control for INT2 if enabled
**@options 1/FAILING_EDGE 2/RISING_EDGE
*/
#define INT2_SENSE_CONTROL		FAILING_EDGE

#endif /* EXT_INTERRUPT_CONFIG_H_ */