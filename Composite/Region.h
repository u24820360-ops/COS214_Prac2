#ifndef REGION_H
#define REGION_H
#include <string>
#include <vector>
#include <iostream>
#include "Map.h"

class Region : public Map
{
public:
	Region(std::string);
	~Region();
	void add(Map *);
	void display(std::string);
	std::vector<Map*> getChildren();

private:
std::vector<Map*> children;
	Region();
};

#endif