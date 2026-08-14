#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <string>
#include <iostream>

using namespace std;

class Obstacle {
public:
    virtual ~Obstacle() {};
    virtual void generate() = 0;
};

#endif