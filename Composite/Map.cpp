#include "Map.h"
using namespace std;
Map::Map(string name) :name(name) {}
Map::~Map() {}
string Map::getName()  {return this->name;}