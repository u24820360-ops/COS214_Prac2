#ifndef FASTEST_H
#define FASTEST_H

#include "RouteStrategy.h"

class Fastest : public RouteStrategy {
public:
    virtual void routing();
    virtual ~Fastest() {};
};

#endif