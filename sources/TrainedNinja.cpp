#include "TrainedNinja.hpp"

namespace ariel{
TrainedNinja::TrainedNinja(string _name, Point _location) : Ninja(_name, _location) {
   this->name=_name;
   this->location=_location;
   this->Alive=true;
   this->speed=12;
   this->damageScore=120;
}
TrainedNinja::~TrainedNinja() {}


int TrainedNinja:: getDS()
{
    return damageScore;
}
void TrainedNinja::slash(Character * enemy) {
if(isAlive()!=true)
{
    return;
}
else 
enemy->hit(40);
}

void TrainedNinja::move(Character * enemy)
{
    return;
}
void TrainedNinja::hit(int amountOfDamage)
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

double TrainedNinja::distance(Character* other){
    return 2.0;
}

Point TrainedNinja::getLocation()
{
    return this->location;
}

bool TrainedNinja::isAlive()
{
    return this->Alive;
}

string TrainedNinja::getName()
{
    return this->name;
}
void TrainedNinja:: print()
{
    return;
}
}