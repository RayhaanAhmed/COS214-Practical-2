#ifndef ROUTESTRATEGY_H
#define ROUTESTRATEGY_H
#include<string>

class Trip;

class RouteStrategy{
public:
    virtual void findRoute(Trip* trip) = 0;
    virtual std::string name() const = 0;
    virtual ~RouteStrategy();
};

#endif