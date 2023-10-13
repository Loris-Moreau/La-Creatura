#pragma once
#include <iostream>

using namespace std;

void DiceRoll(int modifier)
{
	//Dice Rolls
	///Need to roll a 3D6 + modifier (3 rand num (1-6) & then add them together with the modifier) (lowest = 3, highest = 22)
	int nrDice = 3, nrSides = 6, result = 0;
	srand(time(NULL));// this reads the time up to the miliSec so that you don't get the same dice result all the time

	/*cout << "Enter number of die being used : ";
	cin >> nrDice;

	cout << "Enter the number of sides : ";
	cin >> nrSides;*/

	for (int i = 0; i < nrDice; i++)
	{
		result += ((rand() % nrSides) + 1);
		//cout << result << endl;
	}

	result = result + modifier;
	cout << "Modifier : " << modifier << endl;
	cout << nrDice << "D" << nrSides << " = " << result << endl;
};
