#pragma once
#include "Character.hpp"


namespace ariel{
class Cowboy : public Character{
private: 
    int bullets;
public: 
    Cowboy(string name ,Point location);
    ~Cowboy();
    void shoot ( Character* enemy);
    bool hasboolets();
    void reload();
    void hit (int amountOfDamage) override;
    bool isAlive() override;
    double distance (Character* other)override;
    string getName()override;
    Point getLocation() override;
    void print()override;
    int getDS()override;
};
}