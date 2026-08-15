#include<iostream>
#include<string>
#include"AirMode.h"
#include"FootMode.h"
#include"Traveller.h"


void AirMode::move(Traveller* traveller){
    std::cout << traveller->getName() << " flies high above the land. ";
    traveller->adjustFuel(-15);
    std::cout << "(fuel: " << traveller->getFuel() << ")" << std::endl;

    if(traveller->getFuel() <= 0){
        std::cout << "Fuel exhausted mid-flight, continuing on foot." << std::endl;
        traveller->setMode(new FootMode());
    }

}

std::string AirMode::name() const{
    return "Plane";
}