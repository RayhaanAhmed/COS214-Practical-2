#include<iostream>
#include<string>
#include<vector>
#include "Trip.h"

Trip::Trip(const std::string& origin, const std::string& destination, RouteStrategy* initialStrategy) : origin(origin), destination(destination), strategy(initialStrategy), estimatedCost(0.0){

}

Trip::~Trip(){
    delete strategy;
}

void Trip::planRoute(){
    strategy->findRoute(this);
}

void Trip::setStrategy(RouteStrategy* newStrategy){
    if (newStrategy == strategy){ 
        return;
    }

    delete strategy;
    strategy = newStrategy;
    std::cout << "  [Route strategy switched to " << strategy->name() << "]" << std::endl;
}

std::string Trip::getStrategyName() const{
    return strategy->name();
}

const std::string& Trip::getOrigin() const{
     return origin; 
}

const std::string& Trip::getDestination() const{ 
    return destination; 
}

void Trip::setRoute(const std::vector<std::string>& route){
     this->route = route; 
}

const std::vector<std::string>& Trip::getRoute() const{ 
    return route; 
}

void Trip::setEstimatedCost(double cost){ 
    estimatedCost = cost; 
}

double Trip::getEstimatedCost() const{ 
    return estimatedCost; 
}

void Trip::printRoute() const{
    std::cout << "Route (" << getStrategyName() << ", est cost " << estimatedCost << "): ";

    for(size_t i = 0; i < route.size(); i++){
        std::cout << route[i];
        if(i + 1 < route.size()){
            std::cout << " -> ";
        }
    }
    std::cout << std::endl;
}