/*
 * Rotary encoder library for Arduino.
 */

#ifndef rotary_h
#define rotary_h

#include "Arduino.h"

// Enable this to emit codes twice per step.
//#define HALF_STEP

// Values returned by 'process'
// No complete step yet.
#define DIR_NONE 0x0
// Clockwise step.
#define DIR_CW 0x10
// Anti-clockwise step.
#define DIR_CCW 0x20

class Rotary
{
  public:
	Rotary();
    Rotary(char _pin1, char _pin2, bool bEnablePullups=true);
    // Process pin(s)
    unsigned char process(int8_t pinstate=-1);
  private:
    unsigned char state;
    int8_t pin1;
    int8_t pin2;
};

#endif
 
