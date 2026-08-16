#include<iostream>
#include<vector>
#include<string>
#include"ScenicRoute.h"
#include"Trip.h"

void ScenicRoute::findRoute(Trip* trip){
    std::cout << "Plotting a scenic path from " << trip->getOrigin() << " to " << trip->getDestination() << ", taking in the views" << std::endl;

    std::vector<std::string> route;
    route.push_back(trip->getOrigin());
    route.push_back("Hilltop Viewpoint");
    route.push_back("Riverside Trail");
    route.push_back(trip->getDestination());

    trip->setRoute(route);
    trip->setEstimatedCost(18.0);
}

std::string ScenicRoute::name() const{
    return "Scenic";
}