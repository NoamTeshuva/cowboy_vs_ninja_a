#pragma once
#include <string>
#include "Character.hpp"
#include "Ninja.hpp"
#include "YoungNinja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "Cowboy.hpp"
#include "Point.hpp"



using namespace std;

namespace ariel
{
class Team{
protected:
    int howMany=0;
    Character* leader;

public:
Team (Character* first);
void add(Character* other );
void attack(Team* enemy);
int stillAlive();
void print();
~Team();

};


class team2 :public Team{

};

class SmartTeam : public Team{




};



}



































