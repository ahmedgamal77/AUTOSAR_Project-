/******************************************************************************
 *
 * Module: Clock
 *
 * File Name: Clock.c
 *
 * Description: Source file for Clock.
 *
 * Author: Ahmed Gamal
 ******************************************************************************/


#include "Clock.h"

/* Description: function to enable clock for configured ports */

void Clock_init(  ){
  volatile uint8 i,j;
  SYSCTL_REGCGC2_REG|=(0x3F);
  
  
  for(i=0;i<3;i++)
  {
    j=i+1;
  }
}
