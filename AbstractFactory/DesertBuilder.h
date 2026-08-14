#ifndef DESERTBUILDER_H
#define DESERTBUILDER_H

#include "WorldBuilder.h"
#include "DesertNpc.h"
#include "DesertBiome.h"
#include "DesertObstacle.h"

using namespace std;

class DesertBuilder : public WorldBuilder {
public:
    virtual Biome* createBiome();
    virtual Obstacle* createObstacle();
    virtual Npc* createNpc();
    virtual ~DesertBuilder() {};
};

#endif