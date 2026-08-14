#ifndef SWIM_H
#define SWIM_H

#include <iostream>
#include "MovementState.h"
#include "Walk.h"
#include <string>

class Traveller;
class Swim : public MovementState
{
public:
	Swim();
	~Swim();
	void move(Traveller*);
	std::string getMode();
};

#endif