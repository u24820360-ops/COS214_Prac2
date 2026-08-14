#ifndef WORLDBUILDER_H
#define WORLDBUILDER_H

#include <string>
#include <iostream>
#include <map>
#include <vector>

class Biome;
class Obstacle;
class Npc;

class WorldBuilder {
public:
    virtual Biome* createBiome() = 0;
    virtual Obstacle* createObstacle() = 0;
    virtual Npc* createNpc() = 0;
    virtual ~WorldBuilder() {};
};

#endif