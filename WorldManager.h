#ifndef WORDLMANAGER_H
#define WORDLMANAGER_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

// files

#include "Region.h"
#include "Location.h"
#include "FuelStation.h"
#include "University.h"
#include "TouristAttraction.h"
#include "Map.h"
#include "Swim.h"
#include "Walk.h"
#include "Teleport.h"
#include "Traveller.h"
#include "Dash.h"
#include "MovementState.h"

class WorldManager
{

public:
	WorldManager(std::string);
	Map *getWorld(); // region where the user can like travell and shoit
	~WorldManager();
	bool moveTraveler(Traveller *);
	void run();

private:
	WorldManager();
	Map *createWorld(std::string); // region where the user can like travell and shoit
	Map *world;
};

#endif