#ifndef TRIP_H
#define TRIP_H
#include<string>
#include<vector>
#include"RouteStrategy.h"

class Trip{
    private:
        std::string origin;
        std::string destination;
        RouteStrategy* strategy;
        std::vector<std::string> route;
        double estimatedCost;
    
    public:
        Trip(const std::string& origin, const std::string& destination, RouteStrategy* initialStrategy);
        ~Trip();
        void planRoute();
        void setStrategy(RouteStrategy* newStrategy);
        std::string getStrategyName() const;
        const std::string& getOrigin() const;
        const std::string& getDestination() const;
        void setRoute(const std::vector<std::string>& route);
        const std::vector<std::string>& getRoute() const;
        void setEstimatedCost(double cost);
        double getEstimatedCost() const;
        void printRoute() const;

};

#endif