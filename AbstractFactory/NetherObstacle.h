#ifndef NETHEROBSTACLE_H
#define NETHEROBSTACLE_H

#include "Obstacle.h"

class NetherObstacle : public Obstacle {
public:
    NetherObstacle();
    virtual void generate();
    virtual ~NetherObstacle() {};
};

#endif