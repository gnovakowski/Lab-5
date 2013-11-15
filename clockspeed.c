/*
 * clockspeed.c
 *
 *  Created on: Nov 7, 2013
 *      Author: C15Geoffrey.Novakows
 */

#include <msp430.h>
#include "clockspeed.h"


void RunAt1Hz()
{
                                   //Set DCO to 1 MHz:
								  BCSCTL1=0x00;
                                  DCOCTL=0x00; //Select lowest DCOx and MODx settings
                                  BCSCTL1=CALBC1_1MHZ;   //Set range
                                  DCOCTL=CALDCO_1MHZ;   //Set DCO step + modulation
}


void RunAt8Hz()
{
                                   //Set DCO to 1 MHz:
                  	  	  	  	  BCSCTL1=0x00;
                                  DCOCTL=0x00; //Select lowest DCOx and MODx settings
                                  BCSCTL1=CALBC1_8MHZ;   //Set range
                                  DCOCTL=CALDCO_8MHZ;   //Set DCO step + modulation
}


void RunAt12Hz()
{
                                   //Set DCO to 1 MHz:
                  	  	  	  	  BCSCTL1=0x00;
                                  DCOCTL=0x00; //Select lowest DCOx and MODx settings
                                  BCSCTL1=CALBC1_12MHZ;   //Set range
                                  DCOCTL=CALDCO_12MHZ;   //Set DCO step + modulation
}


void RunAt16Hz()
{
                                   //Set DCO to 1 MHz:
                  	  	  	  	  BCSCTL1=0x00;
                                  DCOCTL=0x00; //Select lowest DCOx and MODx settings
                                  BCSCTL1=CALBC1_16MHZ;   //Set range
                                  DCOCTL=CALDCO_16MHZ;   //Set DCO step + modulation
}


