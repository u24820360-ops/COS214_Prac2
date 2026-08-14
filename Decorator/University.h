#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Map.h"
#include "MapDecorator.h"
#include <string>
#include <iostream>

class University : public MapDecorator
{
public:
    University(Map *);
    ~University();
    void display(std::string indent = "");
    std::string getName();

private:
    University();
};

#endif