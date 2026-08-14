#ifndef DESERTBIOME_H
#define DESERTBIOME_H

#include "Biome.h"

class DesertBiome : public Biome {
public:
    DesertBiome();
    virtual void generate();
    virtual ~DesertBiome() {};
};

#endif