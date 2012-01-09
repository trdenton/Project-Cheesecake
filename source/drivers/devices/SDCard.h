//////////////////////////////////////////////////////////////////
//                                                              //
//    SDCard header                                        		//
//    last edited by: Kane Anderson                             //
//    date: January 4, 2012                                     //
//                                                              //
//////////////////////////////////////////////////////////////////

#ifndef SDCARD_H
#define SDCARD_H

#include <msp430fg4619.h>
#include "../DriversConfig.h"
#include "SPIDevice.h"

// same thing //////////////////////////////////
typedef SPIDevice SDCard;

// extended functionality
void readSDCard(SDCard* card, UI8 address);
void writeByte(SDCard* card, UI8 byteAddress);

#endif