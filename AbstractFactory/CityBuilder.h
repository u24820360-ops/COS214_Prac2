#ifndef CITYBUILDER_H
#define CITYBUILDER_H

#include "WorldBuilder.h"
#include "CityNpc.h"
#include "CityBiome.h"
#include "CityObstacle.h"

using namespace std;

class CityBuilder : public WorldBuilder {
public:
    virtual Biome* createBiome();
    virtual Obstacle* createObstacle();
    virtual Npc* createNpc();
    virtual ~CityBuilder() {};
};

#endif