/*
 * ProgramFlow.cpp
 *
 *  Created on: 29 Mar 2015
 *      Author: tully
 */

#include "WonkyQueenslander.h"
#include "ProgramFlow.h"

void readInputs()
{
	// Does nothing j/k
}

bool shouldTransition()
{
	return false;
}

void transition()
{

}

void draw()
{
	fill_solid(allPixels, COUNT_PIXELS, CRGB(255, 0, 0));
	FastLED.delay(3000);
	output();

	fill_solid(allPixels, COUNT_PIXELS, CRGB(0, 255, 0));
	FastLED.delay(3000);
	output();

	fill_solid(allPixels, COUNT_PIXELS, CRGB(0, 0, 255));
	FastLED.delay(3000);
	output();
}

