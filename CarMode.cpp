#include<iostream>
#include<string>
#include"CarMode.h"
#include"FootMode.h"
#include"AirMode.h"
#include"Traveller.h"
#include"TravelMode.h"


void CarMode::move(Traveller* traveller){
    std::cout << traveller->getName() << "drives on land. ";
    traveller->adjustFuel(-10);
    std::cout << "(fuel: " << traveller->getFuel() << ")" << std::endl;

    if(traveller->getFuel() <= 0){
        std::cout << "Fuel exhausted mid-drive, continuing on foot." << std::endl;
        traveller->setMode(new FootMode());
    }

    if(traveller->getLocation() == "desert" /*or city not sure which terrain youll pick Ray*/ && traveller->getFuel() >= 30){
        std::cout << "Taking off.\n";
        traveller->setMode(new AirMode());
        return;
    }

}

std::string CarMode::name() const{
    return "Car";
}