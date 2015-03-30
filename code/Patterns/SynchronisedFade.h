/*
 * SynchronisedFade.h
 *
 *  Created on: 30 Mar 2015
 *      Author: tully
 */

#ifndef SYNCHRONISEDFADE_H_
#define SYNCHRONISEDFADE_H_

#include "Pattern.h"

class SynchronisedFade: public Pattern {
public:
	SynchronisedFade();
	virtual ~SynchronisedFade();

	void draw();
	void update(unsigned int deltaT);
	void reset();

private:
	unsigned int _elapsed;
};

#endif /* SYNCHRONISEDFADE_H_ */
