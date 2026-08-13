#ifndef TELEPORT_H
#define TELEPORT_H

#include "Traveller.h"
#include "Dash.h"
#include "Foot.h"
#include "MovementState.h"
using namespace std;
class Traveller;

class Teleport : public MovementState
{
public:
	~Teleport();
	virtual void move(Traveller *);
	virtual string getMode();
};

#endif