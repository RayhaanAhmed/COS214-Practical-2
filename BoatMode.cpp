#include<iostream>
#include<string>
#include"TravelMode.h"
#include"FootMode.h"
#include"BoatMode.h"
#include"Traveller.h"

void BoatMode::move(Traveller* traveller){
    std::cout << traveller->getName() << " paddles across the ocean.";
    traveller->adjustStamina(-8);
    std::cout << "(stamina: " << traveller->getStamina() << ")" << std::endl;

    if(traveller->getStamina() <= 0){
        std::cout << "Exhausted from rowing, continue on foot" << std::endl;
        traveller->setMode(new FootMode());
    }

}

std::string BoatMode::name() const{
    return "Boat";
}