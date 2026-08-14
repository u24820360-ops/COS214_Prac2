#ifndef OCEANBUILDER_H
#define OCEANBUILDER_H

#include "WorldBuilder.h"
#include "OceanNpc.h"
#include "OceanBiome.h"
#include "OceanObstacle.h"

using namespace std;

class OceanBuilder : public WorldBuilder {
public:
    virtual Biome* createBiome();
    virtual Obstacle* createObstacle();
    virtual Npc* createNpc();
    virtual ~OceanBuilder() {};
};

#endif