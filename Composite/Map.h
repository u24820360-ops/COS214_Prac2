#ifndef MAP_H
#define MAP_H
#include <string>

class Map
{
public:
	Map(std::string);
	virtual ~Map();
	virtual void add(Map *) = 0;
	std::string getName();
	virtual void display(std::string indent="") = 0;

private:
	Map();
	std::string name;
};

#endif