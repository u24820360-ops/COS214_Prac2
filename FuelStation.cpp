#include "FuelStation.h"
using namespace std;

FuelStation::FuelStation(Map *map) : MapDecorator(map) {}
FuelStation::~FuelStation()
{
	//nothing?
}

void FuelStation::display(string indent) {
    MapDecorator::display(indent);  // or feature->display(indent);
    cout << indent << "  [FuelStation]" << endl;
}

string FuelStation::getName()
{
	return "Fuel Station";
}