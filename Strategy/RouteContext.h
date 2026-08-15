#ifndef ROUTECONTEXT_H
#define ROUTECONTEXT_H

#include "RouteStrategy.h"

class RouteContext {
private:
    RouteStrategy* strategy;
    RouteContext();

public:
    RouteContext(RouteStrategy* s);
    void setStrategy(RouteStrategy* s);
    void execute();
    virtual ~RouteContext();
};

#endif