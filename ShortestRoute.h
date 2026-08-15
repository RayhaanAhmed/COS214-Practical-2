#ifndef SHORTESTROUTE_H
#define SHORTESTROUTE_H
#include"RouteStrategy.h"

class ShortestRoute : public RouteStrategy{
    public:
        void findRoute(Trip* trip);
        std::string name() const;
};

#endif