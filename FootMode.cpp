#include<iostream>
#include<string>
#include"TravelMode.h"
#include"FootMode.h"
#include"BoatMode.h"
#include"Traveller.h"

void FootMode::move(Traveller* traveller){
    std::cout << traveller->getName() << "walks cautiously along the path.";
    traveller->adjustStamina(-5);
    std::cout << "(stamina: " << traveller->getStamina() << ")" << std::endl;

    if(traveller->getLocation() == "water" && traveller->getStamina() > 20){
        std::cout << "The water ahead calls for a boat " << std::endl;
        traveller->setMode(new BoatMode());
    }

}

std::string FootMode::name() const{
    return "Foot";
}