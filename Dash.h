#ifndef DASH_H
#define DASH_H

#include "Traveller.h"
#include "Teleport.h"
#include "MovementState.h"

class Traveller;

class Dash:public MovementState 
{
	public:
	Dash();
	~Dash();
	virtual void move(Traveller*);
	virtual string getMode();
};

#endif