#include "Creature.h"

#include <iostream>
#include <string>
#include<vector>

using namespace std;

Creature::Creature(string name, string desc, int health, vector<Attack>& attack, int defenseScore)
	:_name(name), _description(desc), _health(health), _attack(attack), _defenseScore(defenseScore)
{

}

void Creature::Attacks(int modifier)
{
	//Dice Rolls
///Need to roll a 3D6 + modifier (3 rand num (1-6) & then add them together with the modifier) (lowest = 3, highest = 22)
	int nrDice = 3, nrSides = 6, result = 0;
	srand(time(NULL));

	for (int i = 0; i < nrDice; i++)
	{
		result += ((rand() % nrSides) + 1);
		//cout << result << endl;
	}

	result = result + modifier;
	cout << "Modifier : " << modifier << endl;
	cout << nrDice << "D" << nrSides << " = " << result << endl;
}

void Creature::Heal()
{

}
