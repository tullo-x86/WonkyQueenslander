// Only modify this file to include
// - function definitions (prototypes)
// - include files
// - extern variable definitions
// In the appropriate section

#ifndef _WonkyQueenslander_H_
#define _WonkyQueenslander_H_
#include "Arduino.h"
//add your includes for the project WonkyQueenslander here

#include <FastLED.h>

//end of add your includes here
#ifdef __cplusplus
extern "C" {
#endif
void loop();
void setup();
#ifdef __cplusplus
} // extern "C"
#endif

//add your function definitions for the project WonkyQueenslander here

#define PIN_R1 2
#define PIN_G1 3
#define PIN_B1 4

#define PIN_R2 5
#define PIN_G2 6
#define PIN_B2 7

#define PIN_R3 8
#define PIN_G3 9
#define PIN_B3 10

#define PIN_R4 11
#define PIN_G4 12
#define PIN_B4 13

#define COUNT_PWM 4

#define PIN_WS2811 42
#define COUNT_WS2811 100

#define COUNT_PIXELS (COUNT_PWM + COUNT_WS2811)

extern struct CRGB allPixels[];
extern struct CRGB *frameBuffer;

extern struct CRGB *solidPixel1;
extern struct CRGB *solidPixel2;
extern struct CRGB *solidPixel3;
extern struct CRGB *solidPixel4;

void resetSolidPixels();
void output();

//Do not add code below this line
#endif /* _WonkyQueenslander_H_ */
