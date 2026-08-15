#ifndef AIRMODE_H
#define AIRMODE_H
#include<string>
#include"TravelMode.h"

class AirMode : public TravelMode{
    public:
        void move(Traveller* traveller);
        std::string name() const;
};

#endif