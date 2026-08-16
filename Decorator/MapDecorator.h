#ifndef MAPDECORATOR_H
#define MAPDECORATOR_H

#include "Map.h"
#include <string>

class MapDecorator : public Map
{
public:
	MapDecorator(Map *);
	~MapDecorator();
	virtual void display(std::string);
	virtual std::string getName() = 0;
	Npc *getNpc();
	Biome *getBiome();
	Obstacle *getObstacle();

private:
	Map *map;
	MapDecorator();
};

#endif