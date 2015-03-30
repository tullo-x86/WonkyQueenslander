/*
 * SynchronisedFade.h
 *
 *  Created on: 30 Mar 2015
 *      Author: tully
 */

#ifndef SYNCHRONOUSFADE_H_
#define SYNCHRONOUSFADE_H_

#include "Pattern.h"

class SynchronousFade: public Pattern {
public:
	SynchronousFade();
	virtual ~SynchronousFade();

	void draw();
	void update(unsigned int deltaT);
	void reset();

private:
	unsigned int _elapsed;
};

#endif /* SYNCHRONOUSFADE_H_ */
