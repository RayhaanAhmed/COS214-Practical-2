#ifndef BOATMODE_H
#define BOATMODE_H
#include<string>
#include"TravelMode.h"

class BoatMode : public TravelMode{
    public:
        void move(Traveller* traveller);
        std::string name() const;
};

#endif