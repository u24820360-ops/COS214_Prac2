#include "NetherBuilder.h"

Biome* NetherBuilder::createBiome(){
    return new NetherBiome();
}
    
Obstacle* NetherBuilder::createObstacle(){
    return new NetherObstacle();
}
    
Npc* NetherBuilder::createNpc(){
    return new NetherNpc();
}