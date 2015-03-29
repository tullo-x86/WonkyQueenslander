// Do not remove the include below
#include "WonkyQueenslander.h"

#include "ProgramFlow.h"

void setup()
{
	FastLED.addLeds<WS2811, 10, GRB>(frameBuffer, COUNT_WS2811, PIN_WS2811);
	memset8(allPixels, 0, COUNT_PIXELS);

	output();
	FastLED.delay(300);
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

void loop()
{
	readInputs();
	if(shouldTransition())
	{
		transition();
	}

	draw();
	output();
	FastLED.delay(5);
}
