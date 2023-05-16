#pragma once    
#include "Point.hpp"
#include "Character.hpp"

namespace ariel{
class Ninja : public Character {
protected:
    int speed;

public:
    Ninja(string name, Point location);
    virtual void move(Character * enemy);
    virtual void slash(Character * enemy); 
    
};
}
