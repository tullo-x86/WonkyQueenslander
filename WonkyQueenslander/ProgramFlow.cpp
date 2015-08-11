/*
 * ProgramFlow.cpp
 *
 *  Created on: 29 Mar 2015
 *      Author: tully
 */

#include "WonkyQueenslander.h"
#include "ProgramFlow.h"

#include "SynchronousFade.h"
#include "AsynchronousFade.h"
#include "SparksPattern.h"

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
	random16_add_entropy(millis() & 0xffff);
}

SynchronousFade fade;

SparksPattern sparks(allPixels, COUNT_PIXELS, 24, 0, 20, 128, 255, 20);

void draw(unsigned int deltaT)
{
	Pattern *pattern = &sparks;

	pattern->reset();
	pattern->update(deltaT);
	pattern->draw();
}

