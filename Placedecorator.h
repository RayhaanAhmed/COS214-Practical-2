#ifndef PLACEDECORATOR_H
#define PLACEDECORATOR_H

#include "Place.h"
#include <string>

//decorator
class Placedecorator : public Place {
    public:
    Placedecorator (Place* wrapped );
    ~Placedecorator();
    void print(int depth);
    std::string getName();
    protected:
    Place* wrapped;
};
//Concrete decorator : Weather
class WeatherFeature : public Placedecorator {
    public: 
    WeatherFeature (Place* wrapped, std::string condition);
    void print(int depth);
    ~WeatherFeature(){};
    private:
    std::string condition;
};
//Concrete decorator : Toll
class TollFeature : public Placedecorator {
    public: 
    TollFeature (Place* wrapped,double fee);
    void print(int depth);
    ~TollFeature(){};
    private:
    double fee;
};
//Concrete decorator : Quest
class QuestFeature : public Placedecorator {
    public:
    QuestFeature(Place* wrapped, std::string questname);
    void print(int depth);
    ~QuestFeature(){};
    private:
    std::string questname;
};


#endif