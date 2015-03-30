/*
 * ProgramFlow.h
 *
 *  Created on: 29 Mar 2015
 *      Author: tully
 */

#ifndef PROGRAMFLOW_H_
#define PROGRAMFLOW_H_


void readInputs();
bool shouldTransition();
void transition();
void draw();

// This is dodgy, we shouldn't be calling output() from here.
extern void output();


#endif /* PROGRAMFLOW_H_ */
