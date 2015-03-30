/*
 * Pattern.h
 *
 *  Created on: 7 Jan 2015
 *      Author: tully
 */

#ifndef PATTERN_PATTERN_H_
#define PATTERN_PATTERN_H_

#include <FastLED.h>

class Pattern
{
public:
    Pattern();
    virtual ~Pattern();

    virtual void update(unsigned int deltaT) = 0;
    virtual void draw() = 0;
    virtual void reset() { };
};

#endif /* PATTERN_PATTERN_H_ */
