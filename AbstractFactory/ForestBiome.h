#ifndef FORESTBIOME_H
#define FORESTBIOME_H

#include "Biome.h"

class ForestBiome : public Biome {
public:
    ForestBiome();
    virtual void generate();
    virtual ~ForestBiome() {};
};

#endif