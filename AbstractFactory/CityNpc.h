#ifndef CITYNPC_H
#define CITYNPC_H

#include "Npc.h"

class CityNpc : public Npc {
public:
    CityNpc();
    virtual void generate();
    virtual ~CityNpc() {};
};

#endif