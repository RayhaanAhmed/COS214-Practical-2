#ifndef BIOMEPRODUCTS_H
#define BIOMEPRODUCTS_H
 
#include <string>

//abstract products (abstarct class)
class Terrain {
    public:
    virtual std::string describe() = 0;
    virtual ~Terrain(){};
};
class NPC {
    public:
    virtual std::string describe() = 0;
    virtual ~NPC(){};
};
class Obstacle{
    public:
    virtual std::string describe() = 0;
    virtual ~Obstacle(){};
};

//concrete products(desert)
class DesertTerrain : public Terrain {
    public:
    std::string describe();
    ~DesertTerrain(){};
};
class DesertNPC: public NPC {
    public:
    std::string describe();
    ~DesertNPC(){};
};
class DesertObstacle: public Obstacle {
    public:
    std::string describe();
    ~DesertObstacle(){};
};

//concrete products(Ocean)
class OceanTerrain : public Terrain {
    public:
    std::string describe();
    ~OceanTerrain(){};
};
class OceanNPC: public NPC {
    public:
    std::string describe();
    ~OceanNPC(){};
};
class OceanObstacle: public Obstacle {
    public:
    std::string describe();
    ~OceanObstacle(){};
};


#endif