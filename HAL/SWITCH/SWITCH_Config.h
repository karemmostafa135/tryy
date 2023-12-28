#ifndef SWITCH_CONFIG_H_
#define SWITCH_CONFIG_H_

/*
**@brief please choose number of switches
**options please choose from 1 to 32 then please insert their data on array on file LED_Config.c
**@default the default value is three switches on internal_pullup mode 

*/
#define  NUMBER_OF_SWITCHES		2
/*
**@brief for example if you choose five switches then the end switch will be 4 (number of switches - 1 )
*/
#define END_SWITCH      2
#endif