#include <iostream>
#include "Cowboy.hpp"

namespace ariel{
Cowboy::Cowboy(string _name, Point _location) : Character(_name, _location) {
    this->name = _name;
    this->location = _location;
    this->bullets=6;
    this->damageScore=110;
    this->Alive=true;
}

Cowboy ::~Cowboy()
{
cout << " delete from memory" << endl;
}

bool Cowboy::hasboolets() {
return true;
}

void Cowboy::shoot(Character* enemy) {
    if (this->Alive!=true||this->bullets!=0)
    {
        return;
    }
    this->bullets-=bullets;
    enemy->hit(10);
}

void Cowboy::hit(int amountOfDamage)
{
    return;
}

double Cowboy::distance(Character* other){
    return 2.0;
}

Point Cowboy::getLocation()
{
    return this->location;
}

bool Cowboy::isAlive()
{
    return this->Alive;
}

string Cowboy::getName()
{
    return this->name;
}
void Cowboy:: print()
{
    return;
}

int Cowboy:: getDS()
{
    return damageScore;
}

}

