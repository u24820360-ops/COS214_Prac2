#ifndef TOURISTATTRACTION_H
#define TOURISTATTRACTION_H

#include "Map.h"
#include "MapDecorator.h"
#include <string>
#include <iostream>

class TouristAttraction : public MapDecorator
{
public:
    TouristAttraction(Map *);
    ~TouristAttraction();
    void display(std::string indent = "");
    std::string getName();

private:
    TouristAttraction();
};

#endif