#include "Placedecorator.h"
#include <iostream>

//Placedecorator (Decorator)
Placedecorator::Placedecorator(Place* wrapped) : wrapped(wrapped){}

Placedecorator::~Placedecorator(){
    delete wrapped;
}

void Placedecorator::print(int depth){
    wrapped -> print(depth);
}

std::string Placedecorator::getName() {
    return wrapped->getName();
}

//WeatherFeature (Concrete Decorator)
WeatherFeature::WeatherFeature (Place* wrapped, std::string condition):
Placedecorator(wrapped) , condition(condition) {}

void TollFeature::print(int depth) {
    Placedecorator::print(depth);
    for (int i = 0; i < depth + 1; ++i){
        std::cout << "  ";
    }
    std::cout << " toll fee: " << fee << std::endl;
}

//QuestFeature (Concrete Decorator)
QuestFeature::QuestFeature(Place* wrapped, std::string questname) :
Placedecorator(wrapped), questname(questname) {}

void QuestFeature::print(int depth) {
    Placedecorator::print(depth);
    for (int i = 0; i < depth + 1; ++i){
        std::cout << "  ";
    }
    std::cout << " quest available: " << questname << std::endl;
}
