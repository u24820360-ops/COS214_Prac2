#ifndef CITYBIOME_H
#define CITYBIOME_H

#include "Biome.h"

class CityBiome : public Biome {
public:
    CityBiome();
    virtual void generate();
    virtual ~CityBiome() {};
};

#endif