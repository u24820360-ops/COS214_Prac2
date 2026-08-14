#include "OceanBuilder.h"

Biome* OceanBuilder::createBiome(){
    return new OceanBiome();
}
    
Obstacle* OceanBuilder::createObstacle(){
    return new OceanObstacle();
}
    
Npc* OceanBuilder::createNpc(){
    return new OceanNpc();
}