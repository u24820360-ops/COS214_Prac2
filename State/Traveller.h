#ifndef TRAVELLER_H
#define TRAVELLER_H

#include <string>
#include <vector>


class Walk;
class Swim;
class Teleport;
class Dash;
class MovementState;
class Map;

class Traveller
{
public:
	Traveller(std::string);
	~Traveller();
	void setState(MovementState *);
	void move();
	int chooseMode();
	bool canDash();
	bool canTeleport();
	int getTachyons();
	void setTachyons(int);
	int getVelocity();
	void setVelocity(int);
	std::string getMode();
	std::string getName();
	void print();
	bool canSwim();
	// void beginTravel(Map*); //give the traveller a starting location for them to travel the word you create in game manager
	Map* getLocation();
	void setLocation( Map* );

private:
	Traveller();
	MovementState *state;
	std::string name;
	int tachyons;
	int velocity;
	int health;
	bool onWater;
	Map* current; // current user map location, Location in a region arranged in a vector
};

#endif