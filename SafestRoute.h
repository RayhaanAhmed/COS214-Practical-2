#ifndef SAFESTROUTE_H
#define SAFESTROUTE_H
#include"RouteStrategy.h"

class SafestRoute : public RouteStrategy{
    public:
        void findRoute(Trip* trip);
        std::string name() const;
};

#endif