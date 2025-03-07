#ifndef EMITTERSHAPE_H
#define EMITTERSHAPE_H

#include "util/Vector2.h"

#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <random>

class EmitterShape
{
protected:
	double angle, r;
	double xPos, yPos;
public:
	double RandomNumber() { return ((double)rand() / (double)RAND_MAX); };
	double RandomNumber(double Min, double Max){ return ((double(rand()) / double(RAND_MAX)) * (Max - Min)) + Min; }

	// call this method from particle system
	virtual Vector2 getParticleEmissionPos(Vector2* particleSystemPos) = 0;
};

#endif
