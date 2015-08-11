// Do not remove the include below
#include "WonkyQueenslander.h"

#include "ProgramFlow.h"

struct CRGB allPixels[COUNT_PIXELS];
struct CRGB *frameBuffer = allPixels + COUNT_PWM;

struct CRGB *solidPixel1;
struct CRGB *solidPixel2;
struct CRGB *solidPixel3;
struct CRGB *solidPixel4;

void setup()
{
	FastLED.addLeds<WS2811, PIN_WS2811, BRG>(frameBuffer, COUNT_WS2811).setCorrection(TypicalSMD5050);
	memset8(allPixels, 0, COUNT_PIXELS);
	resetSolidPixels();

	pinMode(PIN_R1, OUTPUT);
	pinMode(PIN_G1, OUTPUT);
	pinMode(PIN_B1, OUTPUT);

	pinMode(PIN_R2, OUTPUT);
	pinMode(PIN_G2, OUTPUT);
	pinMode(PIN_B2, OUTPUT);

	pinMode(PIN_R3, OUTPUT);
	pinMode(PIN_G3, OUTPUT);
	pinMode(PIN_B3, OUTPUT);

	pinMode(PIN_R4, OUTPUT);
	pinMode(PIN_G4, OUTPUT);
	pinMode(PIN_B4, OUTPUT);

	output();
	FastLED.delay(300);
}

unsigned long lastFrameTime = 0;

void loop()
{
	unsigned long currentFrameTime = millis();
	unsigned int deltaT = currentFrameTime - lastFrameTime;
	lastFrameTime = currentFrameTime;

	readInputs();
	if(shouldTransition())
	{
		transition();
	}

	draw(deltaT);
	output();
}

void resetSolidPixels()
{
	solidPixel1 = allPixels + 0;
	solidPixel2 = allPixels + 1;
	solidPixel3 = allPixels + 2;
	solidPixel4 = allPixels + 3;
}

void output()
{
	FastLED.show();

	analogWrite(PIN_R1, solidPixel1->r);
	analogWrite(PIN_G1, solidPixel1->g);
	analogWrite(PIN_B1, solidPixel1->b);

	analogWrite(PIN_R2, solidPixel2->r);
	analogWrite(PIN_G2, solidPixel2->g);
	analogWrite(PIN_B2, solidPixel2->b);

	analogWrite(PIN_R3, solidPixel3->r);
	analogWrite(PIN_G3, solidPixel3->g);
	analogWrite(PIN_B3, solidPixel3->b);

	analogWrite(PIN_R4, solidPixel4->r);
	analogWrite(PIN_G4, solidPixel4->g);
	analogWrite(PIN_B4, solidPixel4->b);
}
