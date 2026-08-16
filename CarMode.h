#ifndef CARMODE_H
#define CARMODE_H
#include<string>
#include"TravelMode.h"

class CarMode : public TravelMode{
    public:
        void move(Traveller* traveller);
        std::string name() const;
};

#endif