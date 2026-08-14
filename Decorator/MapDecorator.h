#ifndef MAPDECORATOR_H
#define MAPDECORATOR_H

#include "Map.h"
#include <string>

class MapDecorator:public Map
{
public:
	MapDecorator(Map *);
	~MapDecorator();
	void add(Map *);
	virtual void display(std::string);
	virtual std::string getName() = 0;

private:
	Map *map;
	MapDecorator();
};

#endif