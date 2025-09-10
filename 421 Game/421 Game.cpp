#include <iostream>

#include "DiceFunctions.h"

int main()
{
	// Player One
	int p1Token;
	int p1Score = 21;

	int p1Dice1;
	int p1Dice2;
	int p1Dice3;

	int p1Dices;

	// Player Two
	int p2Token;
	int p2Score = 21;

	int p2Dice1;
	int p2Dice2;
	int p2Dice3;

	int p2Dices;

	InitDice();

	char exitOrNot = 'n';
	do
	{
		//lancer de dés pour les 2 joueur.
		p1Dice1 = RollTheDice();
		p1Dice2 = RollTheDice();
		p1Dice3 = RollTheDice();

		p2Dice1 = RollTheDice();
		p2Dice2 = RollTheDice();
		p2Dice3 = RollTheDice();

		//triage des dés
		p1Dices = SortTheDIce(
			p1Dice1, 
			p1Dice2, 
			p1Dice3);
		p2Dices = SortTheDIce(
			p2Dice1, 
			p2Dice2, 
			p2Dice3);

		std::cout << p1Dices << "\n";
		std::cout << p2Dices << "\n";

		p1Token = Combinaison(p1Dices);
		p2Token = Combinaison(p2Dices);

		std::cout << p1Token << " jetons J1" << "\n";
		std::cout << p2Token << " jetons J2" << "\n";

		std::cout << "wanna stop the game? (y/n)" << "\n";
		std::cin >> exitOrNot;

	} while (exitOrNot != 'y');
}