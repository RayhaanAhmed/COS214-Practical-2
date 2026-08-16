#ifndef TRAVELLER_H
#define TRAVELLER_H

#include<string>
#include"TravelMode.h"

class Traveller{
    private:
        std::string name;
        TravelMode* mode;
        int stamina;
        int fuel;
        std::string location;
    
    public:
        Traveller(const std::string& name, TravelMode* initialMode);
        ~Traveller();
        void move();
        void setMode(TravelMode* newMode);
        std::string getModeName() const;
        int getStamina() const;
        int getFuel() const;
        void adjustStamina(int delta);
        void adjustFuel(int delta);
        const std::string& getLocation() const;
        void setLocation(const std::string& location);
        const std::string& getName() const;
        
};

#endif