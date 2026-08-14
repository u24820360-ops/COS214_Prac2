#ifndef FORESTBUILDER_H
#define FORESTBUILDER_H

#include "WorldBuilder.h"
#include "ForestNpc.h"
#include "ForestBiome.h"
#include "ForestObstacle.h"

using namespace std;

class ForestBuilder : public WorldBuilder {
public:
    virtual Biome* createBiome();
    virtual Obstacle* createObstacle();
    virtual Npc* createNpc();
    virtual ~ForestBuilder() {};
};

#endif