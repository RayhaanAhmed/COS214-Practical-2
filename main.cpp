#include "Traveller.h"
#include "FootMode.h"
#include "CarMode.h"
#include "BoatMode.h"
#include "AirMode.h"

#include "Trip.h"
#include "ShortestRoute.h"
#include "FastestRoute.h"
#include "ScenicRoute.h"
#include "SafestRoute.h"

#include "Place.h"
#include "Placedecorator.h"

#include "BiomeFactory.h"

int main() {
    // State
    Traveller t("Rayhaan", new FootMode());
    t.setLocation("water");
    t.move();
    t.setMode(new CarMode());
    t.move();
    t.setMode(new BoatMode());
    t.move();
    t.setMode(new AirMode());
    t.move();

    // Strategy
    Trip trip("Oasis", "Coastal Village", new ShortestRoute());
    trip.planRoute();
    trip.printRoute();
    trip.setStrategy(new FastestRoute());
    trip.planRoute();
    trip.printRoute();
    trip.setStrategy(new ScenicRoute());
    trip.planRoute();
    trip.printRoute();
    trip.setStrategy(new SafestRoute());
    trip.planRoute();
    trip.printRoute();

    // Composite
    Region* world = new Region("World");
    Region* sahara = new Region("Sahara");
    sahara->add(new Location("Oasis"));
    sahara->add(new Location("Dune Camp"));
    world->add(sahara);
    world->add(new Location("Coastal Village"));
    world->print(0);

    // Decorator
    Place* p = new Location("Trade Oasis");
    p = new WeatherFeature(p, "sandstorm");
    p = new TollFeature(p, 5.0);
    p = new QuestFeature(p, "find the lost caravan");
    p->print(0);

    // Abstract Factory
    BiomeFactory* desert = new DesertFactory();
    Terrain* dt = desert->createTerrain();
    NPC* dn = desert->createNPC();
    Obstacle* dob = desert->createObstacle();

    BiomeFactory* ocean = new OceanFactory();
    Terrain* ot = ocean->createTerrain();
    NPC* on = ocean->createNPC();
    Obstacle* oob = ocean->createObstacle();

    // cleanup
    delete world;
    delete p;
    delete dt;
    delete dn;
    delete dob;
    delete desert;
    delete ot;
    delete on;
    delete oob;
    delete ocean;

    return 0;
}