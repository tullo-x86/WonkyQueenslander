/*
 * ProgramFlow.cpp
 *
 *  Created on: 29 Mar 2015
 *      Author: tully
 */

#include "WonkyQueenslander.h"
#include "ProgramFlow.h"

#include "Patterns/SynchronousFade.h"

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

void draw(unsigned int deltaT)
{
	fade.update(deltaT);
	fade.draw();
}

