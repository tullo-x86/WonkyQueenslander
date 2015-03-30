/*
 * SynchronisedFade.cpp
 *
 *  Created on: 30 Mar 2015
 *      Author: tully
 */

#include "SynchronisedFade.h"
#include "../WonkyQueenslander.h"

SynchronisedFade::SynchronisedFade() {
	// TODO Auto-generated constructor stub

}

SynchronisedFade::~SynchronisedFade() {
	// TODO Auto-generated destructor stub
}

void SynchronisedFade::reset()
{
	resetSolidPixels();
}

void SynchronisedFade::update(unsigned int deltaT)
{

	_elapsed += deltaT;
}

void SynchronisedFade::draw()
{
	unsigned char hue = (_elapsed / 32) & 0xff; // luckily for us, HUE_MAX_RAINBOW is 255.

	*solidPixel1 = CHSV(hue, 255, 255);
	fill_rainbow(frameBuffer, COUNT_WS2811, hue);
	hue += 64;

	*solidPixel2 = CHSV(hue, 255, 255);
	*solidPixel3 = CHSV(hue, 255, 255);
	*solidPixel4 = CHSV(hue, 255, 255);
}

