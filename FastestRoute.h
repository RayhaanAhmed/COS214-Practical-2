#ifndef FASTESTROUTE_H
#define FASTESTROUTE_H
#include"RouteStrategy.h"

class FastestRoute : public RouteStrategy{
    public:
        void findRoute(Trip* trip);
        std::string name() const;
};

#endif 