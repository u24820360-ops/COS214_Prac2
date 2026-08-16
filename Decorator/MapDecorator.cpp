#include "MapDecorator.h"
using namespace std;

MapDecorator::MapDecorator(Map *map) : Map(map->getName(), nullptr)
{
	this->map = map;
}

MapDecorator::~MapDecorator()
{
	delete this->map;
	this->map = nullptr;
}

void MapDecorator::display(string indent)
{
	this->map->display(indent);
}

Npc *MapDecorator::getNpc()
{
	return this->map->getNpc();
}
Biome *MapDecorator::getBiome()
{
	return this->map->getBiome();
}
Obstacle *MapDecorator::getObstacle()
{
	return this->map->getObstacle();
}