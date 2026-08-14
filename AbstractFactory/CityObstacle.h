#ifndef CITYOBSTACLE_H
#define CITYOBSTACLE_H

#include "Obstacle.h"

class CityObstacle : public Obstacle {
public:
    CityObstacle();
    virtual void generate();
    virtual ~CityObstacle() {};
};

#endif