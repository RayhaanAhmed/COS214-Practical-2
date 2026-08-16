#include "Place.h"
#include <iostream>

//LEAF (Location):
Location::Location(std::string name) : name(name) {}

void Location::print(int depth){
    for (int i = 0; i<depth ; ++i) {
        std::cout<<" ";
    }
    std::cout << "- "<<name<<std::endl;

}

std::string Location::getName(){
    return name;
}

//COMPOSITE (Region):
Region::Region(std::string name) : name(name) {}

void Region::print(int depth){
    for (int i = 0; i<depth ; ++i) {
        std::cout<<" ";
    }
    std::cout << "[" <<name<< "]" <<std::endl;
    for (int i = 0 ; i< (int)children.size(); ++i ){
        children[i] -> print(depth + 1); //recursive traversal
    }
}

void Region::add(Place* child){
    children.push_back(child);
}

std::string Region::getName() {
    return name;
}

Region::~Region(){
    for (int i = 0 ; i< (int)children.size(); ++i ){
        delete children[i];
    }
}


