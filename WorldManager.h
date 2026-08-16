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
#include "WorldBuilder.h"
#include "ForestBuilder.h"
#include "CityBuilder.h"
#include "OceanBuilder.h"
#include "DesertBuilder.h"
#include "NetherBuilder.h"

class WorldManager
{

public:
	WorldManager();
	Map *getWorld(); // region where the user can like travell and shoit
	~WorldManager();
	void run(Traveller*);

private:
	// WorldManager();
	Map *createWorld(); // region where the user can like travell and shoit
	bool moveTraveler(Traveller *);
	int promptTraveller(Traveller*);
	Map *world;
};

#endif