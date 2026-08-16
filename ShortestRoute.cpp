#include<iostream>
#include<vector>
#include<string>
#include"ShortestRoute.h"
#include"Trip.h"

void ShortestRoute::findRoute(Trip* trip){
    std::cout << "Plotting the shortest path from " << trip->getOrigin() << " to " << trip->getDestination() << std::endl;
    std::vector<std::string> route;

    route.push_back(trip->getOrigin());
    route.push_back(trip->getDestination());

    trip->setRoute(route);
    trip->setEstimatedCost(10.0);
}

std::string ShortestRoute::name() const{
    return "Shortest";
}