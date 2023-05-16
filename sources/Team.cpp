#include "Team.hpp"

namespace ariel{
Team:: Team (Character* first){
this->leader=first;
this->howMany=1;
}
void Team ::add(Character* first ){return;}
void Team ::attack(Team* enemy){return; }
int Team ::stillAlive(){return 0;}
void Team ::print(){return;}
Team::~Team(){}

}