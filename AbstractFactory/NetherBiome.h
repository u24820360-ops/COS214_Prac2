#ifndef NETHERBIOME_H
#define NETHERBIOME_H

#include "Biome.h"

class NetherBiome : public Biome {
public:
    NetherBiome();
    virtual void generate();
    virtual ~NetherBiome() {};
};

#endif