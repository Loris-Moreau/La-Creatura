#pragma once
#include <iostream>
#include <string>
#include<vector>

#include "DamageType.h"
#include "Weapon.h"

using namespace std;

class Attack
{
public:
	Attack(string name, Weapon weapon, int damagePoints, DamageType damageType, int attackBonus);

	int _attackBonus = 0;

private:
	string _name;

	Weapon _weapon;

	int _damagePoints;

	DamageType _damageType;
};
