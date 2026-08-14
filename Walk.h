#ifndef WALK_H
#define WALK_H

#include <iostream>
#include "MovementState.h"
#include "Dash.h"
#include <string>

class Traveller;
class Walk : public MovementState
{
public:
	Walk();
	~Walk();
	void move(Traveller*);
	std::string getMode();
};

#endif