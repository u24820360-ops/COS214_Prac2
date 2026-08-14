#ifndef NETHERNPC_H
#define NETHERNPC_H

#include "Npc.h"

class NetherNpc : public Npc {
public:
    NetherNpc();
    virtual void generate();
    virtual ~NetherNpc() {};
};

#endif