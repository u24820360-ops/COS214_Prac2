#ifndef FOOT_H
#define FOOT_H

#include "Traveller.h"
#include "MovementState.h"
#include "Dash.h"

class Traveller;

class Foot : public MovementState
{
public:
    Foot();
    ~Foot();
    virtual void move(Traveller*);
	virtual string getMode();
};

#endif