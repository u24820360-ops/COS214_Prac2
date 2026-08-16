#include "Location.h"
using namespace std;
Location::Location(string name, WorldBuilder* factory) :Map(name, factory){}
Location::~Location() {}
void Location::display(string indent)
{
	cout << indent << "L: " << getName() << endl;
}

