#include "BiomeFactory.h"

Terrain* DesertFactory::createTerrain(){
    return new DesertTerrain();
}
NPC* DesertFactory::createNPC(){
    return new DesertNPC();
}
Obstacle* DesertFactory::createObstacle(){
    return new DesertObstacle();
}
std::string DesertFactory::getBiomeName(){ 
    return "Desert";
}


Terrain* OceanFactory::createTerrain(){
    return new OceanTerrain();
}
NPC* OceanFactory::createNPC(){
    return new OceanNPC();
}
Obstacle* OceanFactory::createObstacle(){
    return new OceanObstacle();
}
std::string OceanFactory::getBiomeName(){ 
    return "Ocean";
}