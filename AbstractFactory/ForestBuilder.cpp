#include "ForestBuilder.h"

Biome* ForestBuilder::createBiome(){
    return new ForestBiome();
}
    
Obstacle* ForestBuilder::createObstacle(){
    return new ForestObstacle();
}
    
Npc* ForestBuilder::createNpc(){
    return new ForestNpc();
}