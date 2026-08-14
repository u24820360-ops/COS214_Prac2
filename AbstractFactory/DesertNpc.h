#ifndef DESERTNPC_H
#define DESERTNPC_H

#include "Npc.h"

class DesertNpc : public Npc {
public:
    DesertNpc();
    virtual void generate();
    virtual ~DesertNpc() {};
};

#endif