#include "Character.hpp"
#include <iostream>
namespace ariel{
// Constructor
Character::Character(string _name, Point _location)
 : name(_name), location(_location), Alive(true), damageScore(0) {}

// Check if the character is alive
bool Character::isAlive() {
    return Alive;
}

// Calculate the distance between this character and another character
double Character::distance(Character* other) {
    return location.distance(other->location);
}

// Inflict damage to the character
void Character::hit(int amountOfDamage) {
    damageScore += amountOfDamage;
    if (damageScore >= 100) {
        Alive = false;
    }
}

// Get the name of the character
string Character::getName() {
    return name;
}

// Get the location of the character
Point Character::getLocation() {
    return location;
}

// Print the character's information
void Character::print() {
    cout << "Name: " << name << endl;
    // cout << "Location: (" << location.getX() << ", " << location.getY() << ")" << endl;
    cout << "Damage Score: " << damageScore << endl;
}

// Set the name of the character
void Character::setName(string name) {
    this->name = name;
}

// Set the location of the character
void Character::setLocation(Point location) {
    this->location = location;
}

int Character :: getDS()
{
    return 0;
}

}