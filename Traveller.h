#ifndef TRAVELLER_H
#define TRAVELLER_H

#include <string>
class Walk;
class MovementState;
class Map;

class Traveller
{
public:
	Traveller();
	~Traveller();
	void setState(MovementState *);
	void move();
	void selectTravelMode();
	bool canDash();
	bool canTeleport();
	int getTachyons();
	void setTachyons(int);
	void incrementTachyons(int);
	int getVelocity();
	void setVelocity(int);
	std::string getMode();

private:
	MovementState *state;
	int tachyons;
	int velocity;
	int health;
	Map *current; // current user map location
};

#endif