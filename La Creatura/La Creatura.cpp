//La Creatura.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

#include "Monster.h"
#include "Attack.h"
#include "DiceRoll.h"

using namespace std;

int main()
{
	//attacks
	///Attack(string name, Weapon weapon, int damagePoints, DamageType damageType, int attackBonus);
	Attack SwordSlash("Sword Slash", (Weapon)Sword, 10, (DamageType)Cut, 3);
	Attack londonHandshake("Dagger Stab", (Weapon)Dagger, 5, (DamageType)Stab, 2);
	Attack magicAttack("Magic Attack", (Weapon)Staff, 20, (DamageType)Pshyc, 5);
	Attack rabbies("Poisonous Bite", (Weapon)Teeth, 40, (DamageType)Poison, 5);

	///Creature(string name,string desc, int health, vector<Attack>& _attack)
	vector<Attack> attacks{SwordSlash, londonHandshake, magicAttack, rabbies};
	Creature jim("Jim", "Just some guy", 100, attacks);

	DiceRoll(attacks[3]._attackBonus);
}
