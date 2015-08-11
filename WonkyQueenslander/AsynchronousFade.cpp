/*
 * SynchronisedFade.cpp
 *
 *  Created on: 30 Mar 2015
 *      Author: tully
 */

#include "WonkyQueenslander.h"
#include "AsynchronousFade.h"

AsynchronousFade::AsynchronousFade() {
}

AsynchronousFade::~AsynchronousFade() {
}

void AsynchronousFade::reset()
{
	resetSolidPixels();
}

void AsynchronousFade::update(unsigned int deltaT)
{

	_elapsed += deltaT;
}

void AsynchronousFade::draw()
{
	unsigned char zoneHue = _elapsed / 32;
	*solidPixel1 = CHSV(zoneHue, 255, 255);

	zoneHue = _elapsed / 28;
	*solidPixel2 = CHSV(zoneHue, 255, 255);

	zoneHue = _elapsed / 35;
	*solidPixel3 = CHSV(zoneHue, 255, 255);

	zoneHue = _elapsed / 29;
	*solidPixel4 = CHSV(zoneHue, 255, 255);
}

