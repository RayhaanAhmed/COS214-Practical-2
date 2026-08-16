#ifndef BIOMEFACTORY_H
#define BIOMEFACTORY_H
 
#include "BiomeProducts.h"
#include <string>

//abstract factory
class BiomeFactory {
    public:
    virtual Terrain* createTerrain() = 0;
    virtual NPC* createNPC() = 0;
    virtual Obstacle* createObstacle() = 0;
    virtual std::string getBiomeName() = 0;
    virtual ~BiomeFactory(){};
};
//concrete factories
class DesertFactory : public BiomeFactory {
    public:
    Terrain* createTerrain();
    NPC* createNPC();
    Obstacle* createObstacle();
    std::string getBiomeName();
    ~DesertFactory(){};
};
class OceanFactory : public BiomeFactory {
    public:
    Terrain* createTerrain();
    NPC* createNPC();
    Obstacle* createObstacle();
    std::string getBiomeName();
    ~OceanFactory(){};
};


#endif