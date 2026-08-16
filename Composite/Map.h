#ifndef MAP_H
#define MAP_H
#include <string>
#include <vector>

#include "Biome.h"
#include "Npc.h"
#include "Obstacle.h"
#include "WorldBuilder.h"
class Map
{
public:
	Map(std::string, WorldBuilder*);
	virtual ~Map();
	virtual void add(Map *);
	std::string getName();
	virtual void display(std::string indent="") = 0;
	virtual std::vector<Map*> getChildren();
	virtual Npc* getNpc();
	virtual Biome* getBiome();
	virtual Obstacle* getObstacle();

	

private:
	Map();
	std::string name;
	Biome* biome;
	Npc* npc;
	Obstacle *obstacle;
};

#endif