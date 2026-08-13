#ifndef DASH_H
#define DASH_H

#include "Teleport.h"
#include "MovementState.h"
#include <string>
class Traveller;

class Dash:public MovementState 
{
	public:
	Dash();
	~Dash();
	void move(Traveller*);
	std::string getMode();
};

#endif