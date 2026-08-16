#ifndef FUELSTATION_H
#define FUELSTATION_H

#include "Map.h"
#include "MapDecorator.h"
#include <string>
#include <iostream>

class FuelStation : public MapDecorator
{
public:
    FuelStation(Map*);
    ~FuelStation();
    void display(std::string indent = "");
    std::string getName();

private:
    FuelStation();
};

#endif