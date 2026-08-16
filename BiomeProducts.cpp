#include "BiomeProducts.h"

std::string DesertTerrain::describe(){
    return "Dry ground and dust clouds";
}
std::string DesertNPC::describe(){
    return "An arab wanders";
}
std::string DesertObstacle::describe(){
    return "Sand storm has suddenly approached!";
}


std::string OceanTerrain::describe(){
    return "Kilometers of water and coral beneath";
}
std::string OceanNPC::describe(){
    return "A sailor is nearby";
}
std::string OceanObstacle::describe(){
    return "You've been pulled towards a whirlpool!";
}