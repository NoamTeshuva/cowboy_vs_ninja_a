#include "YoungNinja.hpp"

namespace ariel{
YoungNinja::YoungNinja(string _name, Point _location) : Ninja(_name, _location) {
   this->name=_name;
   this->location=_location;
   this->Alive=true;
   this->speed=14;
   this->damageScore=100;
}

void YoungNinja::slash(Character * enemy) {
if(isAlive()!=true)
{
    return;
}
else 
enemy->hit(40);
}
YoungNinja::~YoungNinja() {}

void YoungNinja::move(Character * enemy)
{
    return;
}
int YoungNinja:: getDS()
{
    return damageScore;
}
void YoungNinja::hit(int amountOfDamage)
{
    if(damageScore<0)
    {
        Alive=false;
    }
    if(damageScore-amountOfDamage<0)
    {
        Alive=false;
    }
    else this->damageScore-=amountOfDamage;

    return;
}

double YoungNinja::distance(Character* other){
    return 2.0;
}

Point YoungNinja::getLocation()
{
    return this->location;
}

bool YoungNinja::isAlive()
{
    return this->Alive;
}

string YoungNinja::getName()
{
    return this->name;
}
void YoungNinja:: print()
{
    return;
}


}