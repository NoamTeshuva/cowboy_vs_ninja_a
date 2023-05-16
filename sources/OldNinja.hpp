#pragma once
#include "Ninja.hpp"

namespace ariel {
    class OldNinja : public Ninja {
    public:
        OldNinja(string _name, Point _location);
        ~OldNinja();
    void move (Character* enemy)override;
    void slash(Character* enemy) override;
     void hit (int amountOfDamage) override;
    bool isAlive() override;
    double distance (Character* other)override;
    string getName()override;
    Point getLocation() override;
    void print()override;
    int getDS()override;

    };

}
