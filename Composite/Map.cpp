#include "Map.h"
using namespace std;
Map::Map(string name, WorldBuilder *factory) : name(name), biome(nullptr), npc(nullptr), obstacle(nullptr)
{
	if (factory)
	{
		this->biome = factory->createBiome();
		this->npc = factory->createNpc();
		this->obstacle = factory->createObstacle();
	}
}
Map::~Map()
{
	delete this->npc;
	delete this->biome;
	delete this->obstacle;
}
void Map::add(Map *) {/*Do nothing at all*/}
string Map::getName() { return this->name; }
vector<Map *> Map::getChildren() { return {}; }
Npc *Map::getNpc() { return this->npc; }
Biome *Map::getBiome() { return this->biome; }
Obstacle *Map::getObstacle() { return this->obstacle; }
