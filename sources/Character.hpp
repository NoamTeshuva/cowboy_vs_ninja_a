#pragma once
#include <string>
#include "Point.hpp"
using namespace std;
namespace ariel{
    
class Character {
protected:
    Point location;
    string name;
    bool Alive;
    int damageScore;

public:
    Character (string _name,Point _location );
    virtual bool isAlive();
    virtual double distance (Character* other);
    virtual void hit(int amountOfDamage);
    virtual string getName();
    virtual Point getLocation();
    virtual void print();
    void setName(string name);
    void setLocation(Point location);
    virtual int getDS();
};
}


