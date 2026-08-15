#ifndef LOCATION_H
#define LOCATION_H
#include <string>
#include <iostream>
#include "Map.h"

class Location : public Map
{
public:
	Location(std::string);
	~Location();
	void add(Map *);
	void display(std::string);

private:
	Location();
};

#endif