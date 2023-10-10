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
	Attack punch("Punch",					  (Weapon)NULL, 2,   (DamageType)Bludgeoning, 5);
	Attack SwordSlash("Sword Slash",		  (Weapon)Sword, 10, (DamageType)Cut,		  3);
	Attack londonHandshake("Dagger Stab",	  (Weapon)Dagger, 5, (DamageType)Stab,		  2);
	Attack magicPAttack("Magic Psych Attack", (Weapon)Staff, 20, (DamageType)Pshyc,		  4);
	Attack magicDAttack("Magic Drain Attack", (Weapon)Staff, 20, (DamageType)Drain,		  4);
	Attack rabbies("Poisonous Bite",		  (Weapon)Teeth, 35, (DamageType)Poison,	  5);
	Attack manSlaughter("Gun Wound",		  (Weapon)Gun,  90, (DamageType)Burn,		  0);

	vector<Attack> attacks{punch, SwordSlash, londonHandshake, magicPAttack, magicDAttack, rabbies, manSlaughter};
	///Creature(string name,string desc, int health, vector<Attack>& _attack)
	Creature jim("Jim", "Just some guy", 100, attacks);

	DiceRoll(attacks[3]._attackBonus);
}
