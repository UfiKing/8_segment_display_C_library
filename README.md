# 8_segment_display_C_library

This is a simple libary made by me (ufi) so i can make my clock project a little easier

## structure
the header file can be found in the `components` directory 
the `main` directory will contain examples

# functions

- [initPin()](#initPin())

### initPin(uint8_t pin)

prepares a GPIO pin for output

**Paramaters**: pin -- the GPIO pin number 
**Returns**: void

### initSingleDigit(uint8_t pins[8])

prepares 8 pins to be used for output 

**Paramaters**: pins -- array with pin numbers
*NOTE* this also works if you provide an array with fewer than 8 elements
**Returns** void

### initMultipleSegments(uint8_t segmentPins[8], uint8_t digitPins[], uint8_t numOfDigitPins)

prepares a display with multiple digits for usage

**Paramaters**: - segmentPins -- array with pin numbers for the segments
                - digitPins -- array with pin numbers for the digits
                - numOfDigitPins -- the number of digits

*NOTE* this also works if you provide a segmentPins array with fewer than 8 elements
**Returns** void


### displaySingleNum(uint8_t segments[8], uint8_t number)
displays a number between 0 and 9 on the provided display 
if the input dosent equal to a number 0 - 9, it maps the first bit to segment A, second to B ...
0b01001011 would map to HGFEDCBA (H being DP or the little dot)

**Paramaters**: - segments[8] -- array with the pin numbers
                - number -- the number to display




