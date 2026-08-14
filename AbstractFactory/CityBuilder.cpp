#include "CityBuilder.h"

Biome* CityBuilder::createBiome(){
    return new CityBiome();
}
    
Obstacle* CityBuilder::createObstacle(){
    return new CityObstacle();
}
    
Npc* CityBuilder::createNpc(){
    return new CityNpc();
}