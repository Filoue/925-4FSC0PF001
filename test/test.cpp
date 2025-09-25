// test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <ranges>

void InitSeed()
{
	srand(time(nullptr));
}

int Tirage()
{
	return 1 + rand() % 1000;
}

void bubbleSort(std::vector<int>& v)
{
	int n = v.size();

	for (int i = 1; i < n - 1; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (v[j] > v[j + 1]) {
				std::swap(v[j], v[j + 1]);
			}
		}
	}
	
}

int main()
{
	int random = 0;
	std::vector<int> vec;

	InitSeed();

	for (int i = 0; i < 100; i++)
	{
		random = Tirage();
		vec.push_back(random);
	}
	
	bubbleSort(vec);

	for (int i = 0; i < vec.size(); i++)
	{
		std::cout << vec.at(i) << "\n";
	}


}
