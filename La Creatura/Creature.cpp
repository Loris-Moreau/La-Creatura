#include "Creature.h"

#include <iostream>
#include <string>
#include<vector>

using namespace std;

Creature::Creature(string name, string desc, int health, vector<Attack>& attack)
	:_name(name), _description(desc), _health(health), _attack(attack)
{

}

void Creature::Attacks()
{

}

void Creature::Heal()
{

}