#include <iostream>
#include <string>

#include "DiceFunctions.h"


void InitDice()
{
    srand(time(nullptr));
}

int RollTheDice() 
{
    return 1 + rand() % 6;
}

int SortTheDIce(int d1, int d2, int d3)
{
	int storeTempDice = 0;

	if (d1 < d3)
	{
		storeTempDice = d1;

		d1 = d3;
		d3 = storeTempDice;
	}

	if (d1 < d2)
	{
		storeTempDice = d1;

		d1 = d2;
		d2 = storeTempDice;
	}

	if (d2 < d3)
	{
		storeTempDice = d2;

		d2 = d3;
		d3 = storeTempDice;
	}

	std::string resultDice1 = std::to_string(d1);
	std::string resultDice2 = std::to_string(d2);
	std::string resultDice3 = std::to_string(d3);

	std::string resultDice = resultDice1 + resultDice2 + resultDice3;

	return std::stoi(resultDice);
}

int Combinaison(int dices)
{
	switch (dices)
	{
	case 421:
		std::cout << "10 jetons" << "\n";
		return 10;
		break;
	case 111:
		std::cout << "7 jetons" << "\n";
		return 7;
		break;
	case 611:
	case 666:
		std::cout << "6 jetons" << "\n";
		return 6;
		break;
	case 511:
	case 555:
		std::cout << "5 jetons" << "\n";
		return 5;
		break;
	case 411:
	case 444:
		std::cout << "4 jetons" << "\n";
		return 4;
		break;
	case 311:
	case 333:
		std::cout << "3 jetons" << "\n";
		return 3;
		break;
	case 211:
	case 222:
	case 654:
	case 543:
	case 432:
	case 321:
		std::cout << "2 jetons" << "\n";
		return 2;
		break;
	default:
		return 0;
		break;
	}
}