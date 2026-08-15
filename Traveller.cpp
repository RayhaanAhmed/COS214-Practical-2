#include<iostream>
#include<string>
#include"Traveller.h"

Travller::Traveller(const std::string& name, TravelMode* initialMode) : name(name), mode(initialMode), stamina(100), fuel(0), location("trail"){

}

Traveller::~Traveller(){
    delete mode;
}

void Traveller::move(){
    mode->move(this);
}

void Traveller::setMode(TravelMode* newMode){
    if(newMode == mode){
        return;
    }
    
    delete mode;
    mode = newMode;

    std::cout << "[" << name << "is now travelling by " << mode->name() << "]" << std::endl;

}

std::string Traveller::getModeName() const{
    return mode->name();
}

int Traveller::getStamina() const{
    return stamina;
}

int Traveller::getFuel() const{
    return fuel;
}

void Traveller::adjustStamina(int delta){
    stamina += delta;
    
    if(stamina < 0){
        stamina = 0;
    }

    if(stamina > 100){
        stamina = 100;
    }
}

void Traveller::adjustFuel(int delta){
    fuel += delta;

    if(fuel < 0){
        fuel = 0;
    }

    if(fuel > 100){
        fuel = 100;
    }
}

const std::string& Traveller::getLocation() const{
    return location;
}

void Traveller::setLocation(const std::string& location){
    this->location = location;
}

const std::string& Traveller::getName() const{
    return name;
}
