#pragma once
#include <iostream>
#include <string>
#include<vector>

#include "DamageType.h"
#include "Attack.h"

using namespace std;

class Creature
{
public:
	Creature(string name,string desc, int health, vector<Attack>& _attack, int defenseScore);

	void Attacks(int modifier);
	void Heal();

private:
	string _name;
	string _description;
	int _health;

	vector<Attack> _attack;

	int _defenseScore;
};
