/*
 * SynchronisedFade.cpp
 *
 *  Created on: 30 Mar 2015
 *      Author: tully
 */

#include "../WonkyQueenslander.h"
#include "SynchronousFade.h"

SynchronousFade::SynchronousFade() {
}

SynchronousFade::~SynchronousFade() {
}

void SynchronousFade::reset()
{
	resetSolidPixels();
}

void SynchronousFade::update(unsigned int deltaT)
{

	_elapsed += deltaT;
}

void SynchronousFade::draw()
{
	unsigned char hue = (_elapsed / 32) & 0xff; // luckily for us, HUE_MAX_RAINBOW is 255.

	*solidPixel1 = CHSV(hue, 255, 255);
	fill_rainbow(frameBuffer, COUNT_WS2811, hue);
	hue += 64;

	*solidPixel2 = CHSV(hue, 255, 255);
	*solidPixel3 = CHSV(hue, 255, 255);
	*solidPixel4 = CHSV(hue, 255, 255);
}

