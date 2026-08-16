#include "MapDecorator.h"
using namespace std;

MapDecorator::MapDecorator(Map *map):Map(map->getName(), nullptr) {
	this->map=map;
}

MapDecorator::~MapDecorator()
{
	delete this->map;
	this->map = nullptr;
}

void MapDecorator::add(Map *map) { /*Do nothing*/ }

void MapDecorator::display(string indent)
{
	this->map->display(indent);
}