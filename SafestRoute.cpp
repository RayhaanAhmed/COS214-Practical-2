#include<iostream>
#include<vector>
#include<string>
#include"SafestRoute.h"
#include"Trip.h"

void SafestRoute::findRoute(Trip* trip){
    std::cout << "Plotting the safest path from " << trip->getOrigin() << " to " << trip->getDestination() << ", staying on the safe paths" << std::endl;

    std::vector<std::string> route;
    route.push_back(trip->getOrigin());
    route.push_back("Ranger Checkpoint");
    route.push_back("Main Road Bridge");
    route.push_back(trip->getDestination());

    trip->setRoute(route);
    trip->setEstimatedCost(22.0); 
}

std::string SafestRoute::name() const{
    return "Safest";
}