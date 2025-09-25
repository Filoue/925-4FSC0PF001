#include <iostream>
#include <string>

#include "MenuMonster.h"


int main()
{

	bool quit = false;
	int monster = 0;
	int action = 0;

	std::string monsterName;

	std::cout << "choose your Monster :\n" << "Troll : 0\n" << "Elf : 1\n" << "Dragon : 2\n" << "Humain : 3\n" << "Orcs : 4\n" << "kayoux : 5\n";
	std::cin >> monster;
	Monster chosenMonster = static_cast<Monster>(monster);

	std::cout << "which name have your " << ChooseClass(chosenMonster);
	std::getline(std::cin, monsterName);

	do
	{
		std::cout << "what do you want to do " << monsterName << "?\n" << "Attack : 0\n" << "Protect : 1\n" << "Heal : 2\n" << "Quit : 3\n";
		std::cin >> action;
		Attack attackChosen = static_cast<Attack>(action);

		std::cout << monsterName << " " << ChooseAttack(attackChosen) << "\n";

		if (attackChosen == Attack::QUIT)
			quit = true;

	} while (!quit);

}
