//La Creatura.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>

#include "Monster.h"
#include "Attack.h"

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

	//dice rolls
	///need to roll a 3D6 + modifier (3 rand & then add them togher with the modifier
	int nrDice = 1, nrSides = 6;
	srand(time(NULL));
	int result = 0;

	cout << "Enter number of die being used : ";
	cin >> nrDice;

	cout << "Enter the number of sides : ";
	cin >> nrSides;

	for (int i = 0; i < nrDice; i++)
	{
		result += ((rand() % nrSides) + 1);
		//cout << result << endl;
	}

	int modifier = attacks[3]._attackBonus;

	result = result + modifier;
	cout << "Modifier : " << modifier << endl;
	cout << nrDice << "D" << nrSides << " = " << result << endl;
}
