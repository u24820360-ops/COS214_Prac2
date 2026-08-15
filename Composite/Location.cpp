#include "Location.h"
using namespace std;
Location::Location(string name) :Map(name){}
Location::~Location() {}
void Location::add(Map *) {}
void Location::display(string indent)
{
	cout << indent << "L: " << getName() << endl;
}

