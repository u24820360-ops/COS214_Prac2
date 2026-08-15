#include "University.h"
using namespace std;

University::University(Map *map) : MapDecorator(map) {}
University::~University()
{
	//nothing?
}

void University::display(string indent) {
    MapDecorator::display(indent);
    cout << indent << "  [University]" << endl;
}

string University::getName()
{
	return "University";
}