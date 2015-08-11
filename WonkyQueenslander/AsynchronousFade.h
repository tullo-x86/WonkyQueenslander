/*
 * SynchronisedFade.h
 *
 *  Created on: 30 Mar 2015
 *      Author: tully
 */

#ifndef ASYNCHRONOUSFADE_H_
#define ASYNCHRONOUSFADE_H_

#include "Pattern.h"

class AsynchronousFade: public Pattern {
public:
	AsynchronousFade();
	virtual ~AsynchronousFade();

	void draw();
	void update(unsigned int deltaT);
	void reset();

private:
	unsigned int _elapsed;
};

#endif /* ASYNCHRONOUSFADE_H_ */
