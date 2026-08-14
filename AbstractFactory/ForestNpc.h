#ifndef FORESTNPC_H
#define FORESTNPC_H

#include "Npc.h"

class ForestNpc : public Npc {
public:
    ForestNpc();
    virtual void generate();
    virtual ~ForestNpc() {};
};

#endif