#ifndef PLACE_H
#define PLACE_H

#include <string>
#include <vector>

class Place {
    public:
    virtual std::string getName() = 0;
    virtual void print(int depth) = 0;
    virtual ~Place(){};
};

class Location : public Place{
    public:
    Location(std::string name);
    void print(int depth);
    std::string getName();
    ~Location(){};
    private:
    std::string name;
};

class Region : public Place{
    public:
    Region(std::string name);
    void print(int depth);
    std::string getName();
    void add (Place* child);
    ~Region();
    private:
    std::string name;
    std::vector<Place*> children;
};

#endif