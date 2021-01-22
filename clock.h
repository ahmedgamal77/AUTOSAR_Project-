/******************************************************************************
 *
 * Module: clock
 *
 * File Name: clock.h
 *
 * Description: Header file for clock Module.
 *
 * Author: Ahmed Gamal
 ******************************************************************************/
#ifndef CLOCK_H
#define CLOCK_H

#include "Std_Types.h"
#include "Common_Macros.h"



/* Button State according to its configuration PULL UP/Down */
#define SYSCTL_REGCGC2_REG        (*((volatile uint32 *)0x400FE108))


void Clock_init();


#endif /* CLOCK_H */
