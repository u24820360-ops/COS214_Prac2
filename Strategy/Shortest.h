#ifndef SHORTEST_H
#define SHORTEST_H

#include "RouteStrategy.h"

class Shortest : public RouteStrategy {
public:
    virtual void routing();
    virtual ~Shortest() {};
};

#endif