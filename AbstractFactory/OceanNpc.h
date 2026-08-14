#ifndef OCEANNPC_H
#define OCEANNPC_H

#include "Npc.h"

class OceanNpc : public Npc {
public:
    OceanNpc();
    virtual void generate();
    virtual ~OceanNpc() {};
};

#endif