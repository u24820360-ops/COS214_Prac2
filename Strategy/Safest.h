#ifndef SAFEST_H
#define SAFEST_H

#include "RouteStrategy.h"

class Safest : public RouteStrategy {
public:
    virtual void routing();
    virtual ~Safest() {};
};

#endif