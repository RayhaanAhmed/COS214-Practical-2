#ifndef SCENICROUTE_H
#define SCENICROUTE_H
#include"RouteStrategy.h"

class ScenicRoute : public RouteStrategy{
public:
    void findRoute(Trip* trip);
    std::string name() const;
};

#endif