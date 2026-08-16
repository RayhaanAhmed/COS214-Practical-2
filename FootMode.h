#ifndef FOOTMODE_H
#define FOOTMODE_H
#include<string>
#include"TravelMode.h"

class FootMode : public TravelMode{
    public:
        void move(Traveller* traveller);
        std::string name() const;
};

#endif