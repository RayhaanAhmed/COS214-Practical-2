#include<iostream>
#include<vector>
#include<string>
#include"FastestRoute.h"
#include"Trip.h"

void FastestRoute::findRoute(Trip* trip){
    std::cout << "Plotting the fastest path from " << trip->getOrigin() << " to " << trip->getDestination() << " via land" << std::endl;

    std::vector<std::string> route;
    route.push_back(trip->getOrigin());
    route.push_back("Road Junction");
    route.push_back(trip->getDestination());

    trip->setRoute(route);
    trip->setEstimatedCost(6.0);
}

std::string FastestRoute::name() const{
    return "Fastest";
}