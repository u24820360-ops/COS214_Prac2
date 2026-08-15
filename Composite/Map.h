#ifndef MAP_H
#define MAP_H
#include <string>
#include <vector>

class Map
{
public:
	Map(std::string);
	virtual ~Map();
	virtual void add(Map *) = 0;
	std::string getName();
	virtual void display(std::string indent="") = 0;
	virtual std::vector<Map*> getChildren();

	

private:
	Map();
	std::string name;
};

#endif