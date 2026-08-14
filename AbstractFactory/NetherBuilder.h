#ifndef NETHERBUILDER_H
#define NETHERBUILDER_H

#include "WorldBuilder.h"
#include "NetherNpc.h"
#include "NetherBiome.h"
#include "NetherObstacle.h"

using namespace std;

class NetherBuilder : public WorldBuilder {
public:
    virtual Biome* createBiome();
    virtual Obstacle* createObstacle();
    virtual Npc* createNpc();
    virtual ~NetherBuilder() {};
};

#endif