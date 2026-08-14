#ifndef OCEANOBSTACLE_H
#define OCEANOBSTACLE_H

#include "Obstacle.h"

class OceanObstacle : public Obstacle {
public:
    OceanObstacle();
    virtual void generate();
    virtual ~OceanObstacle() {};
};

#endif