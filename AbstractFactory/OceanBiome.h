#ifndef OCEANBIOME_H
#define OCEANBIOME_H

#include "Biome.h"

class OceanBiome : public Biome {
public:
    OceanBiome();
    virtual void generate();
    virtual ~OceanBiome() {};
};

#endif