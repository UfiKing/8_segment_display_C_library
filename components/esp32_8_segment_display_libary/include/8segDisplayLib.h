#ifndef _8SEG_DISPLAY_LIB
#define _8SEG_DISPLAY_LIB
#include <stdio.h>

void initSingleDigit(uint8_t segments[8]);

void initPin(uint8_t pin);  

void displayNum(uint8_t segments[8], uint8_t number);

#endif

