#include "OldNinja.hpp"
namespace ariel{
OldNinja::OldNinja(string _name, Point _location) : Ninja(_name, _location) {
   this->name=_name;
   this->location=_location;
   this->Alive=true;
   this->speed=8;
   this->damageScore=140;
}

OldNinja::~OldNinja() {}

int OldNinja:: getDS()
{
    return damageScore;
}

void OldNinja::slash(Character * enemy) {
if(isAlive()!=true)
{
    return;
}
else 
enemy->hit(40);
}

void OldNinja::move(Character * enemy)
{
    return;
}
void OldNinja::hit(int amountOfDamage)
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

double OldNinja::distance(Character* other){
    return 2.0;
}

Point OldNinja::getLocation()
{
    return this->location;
}

bool OldNinja::isAlive()
{
    return this->Alive;
}

string OldNinja::getName()
{
    return this->name;
}
void OldNinja:: print()
{
    return;
}
}