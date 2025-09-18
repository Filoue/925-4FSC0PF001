#include <iostream>
#include <vector>
#include <string>

#include "ObjectClass.h"

int main()
{
	auto ennemy = Ennemy(100);
	auto dog = Dog(50, 40);
	auto knight = Knight(200);

	std::vector<Ennemy*> v;

	v.push_back(&dog);
	v.push_back(&knight);

	for (Ennemy* ennemy : v) {
		ennemy->Attack();
	}



	return 0;
}
