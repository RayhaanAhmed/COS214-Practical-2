#ifndef TRAVELMODE_H
#define TRAVELMODE_H
#include<string>

class Traveller;

class TravelMode{
    public:
        virtual void move(Traveller* traveller) = 0;
        virtual std::string name() const = 0;
        virtual ~TravelMode();
};

#endif