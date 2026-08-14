#ifndef BIOME_H
#define BIOME_H

#include <string>
#include <iostream>

using namespace std;

class Biome {
public:
    virtual ~Biome() {};
    virtual void generate() = 0;
};

#endif