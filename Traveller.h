#ifndef TRAVELLER_H
#define TRAVELLER_H

#include "MovementState.h"
#include "Map.h"
#include <string>
using namespace std; 

class MovementState;
class Map;

class Traveller
{
public:
	Traveller();
	~Traveller();
	void setState(MovementState *);
	void move();
	bool canDash();
	bool canTeleport();
	int getTachyons();
	void setTachyons(int);
	void incrementTachyons(int);
	int getVelocity();
	void setVelocity(int);
	void incrementVelocity(int);
	string getMode();

private:
	MovementState *state;
	int tachyons;
	int tachyonCores;
	int velocity;
	Map *map;
};

#endif