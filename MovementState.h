#ifndef MOVEMENTSTATE_H
#define MOVEMENTSTATE_H

#include "Traveller.h"

class Traveller;

class MovementState 
{
	public:
	virtual ~MovementState();
	virtual void move(Traveller*)=0;
	virtual string getMode()=0;
		
};

#endif