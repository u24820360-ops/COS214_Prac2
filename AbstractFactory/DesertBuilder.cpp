#include "DesertBuilder.h"

Biome* DesertBuilder::createBiome(){
    return new DesertBiome();
}
    
Obstacle* DesertBuilder::createObstacle(){
    return new DesertObstacle();
}
    
Npc* DesertBuilder::createNpc(){
    return new DesertNpc();
}