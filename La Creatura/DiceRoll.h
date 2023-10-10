#pragma once
#include <iostream>

using namespace std;

void DiceRoll(int modifier)
{
	//Dice Rolls
	///Need to roll a 3D6 + modifier (3 rand num (1-6) & then add them together with the modifier)
	int nrDice = 3, nrSides = 6, result = 0;
	srand(time(NULL));

	cout << "Enter number of die being used : ";
	cin >> nrDice;

	cout << "Enter the number of sides : ";
	cin >> nrSides;

	for (int i = 0; i < nrDice; i++)
	{
		result += ((rand() % nrSides) + 1);
		//cout << result << endl;
	}

	//int modifier = attacks[3]._attackBonus;

	result = result + modifier;
	cout << "Modifier : " << modifier << endl;
	cout << nrDice << "D" << nrSides << " = " << result << endl;
};
