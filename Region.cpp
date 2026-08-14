#include "Region.h"
using namespace std;

Region::Region(string name) : Map(name) {}

Region::~Region()
{
	for (Map* child : children)
		delete child;
	children.clear();
}

void Region::add(Map *map)
{
	this->children.push_back(map);
}

void Region::display(string indent)
{
	cout << indent << "R: " << getName() << endl;
	for (Map* child : children)
		child->display(indent + "\t");   // deeper each level
}