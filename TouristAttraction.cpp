#include "TouristAttraction.h"
using namespace std;

TouristAttraction::TouristAttraction(Map *map) : MapDecorator(map) {}
TouristAttraction::~TouristAttraction()
{
	//nothing?
}

void TouristAttraction::display(string indent) {
    MapDecorator::display(indent);
    cout << indent << "  [TouristAttraction]" << endl;
}

string TouristAttraction::getName()
{
	return "Tourist Attraction";
}