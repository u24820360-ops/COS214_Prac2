#ifndef ROUTESTRATEGY_H
#define ROUTESTRATEGY_H

#include <string>
#include <vector>
#include <iostream>
#include <map>

class RouteStrategy {
public:
    virtual void routing() = 0;
    virtual ~RouteStrategy() {};
};

#endif