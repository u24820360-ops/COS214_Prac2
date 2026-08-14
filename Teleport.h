#ifndef TELEPORT_H
#define TELEPORT_H
#include <iostream>
#include <string>

#include "Dash.h"
#include "Walk.h"
#include "MovementState.h"
class Traveller;

class Teleport : public MovementState
{
public:
	Teleport();
	~Teleport();
	void move(Traveller *);
	std::string getMode();
};

#endif