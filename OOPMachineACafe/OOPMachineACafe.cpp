#include <iostream>
#include <string>
#include <vector>

class ChooseCoffe
{
public:
	ChooseCoffe(std::string coffeName) : _coffeName(coffeName){

	}

	void CoffeBeenMaide()
	{
		std::cout << "Your Coffe is ready" << "\n";
	}

	bool NeedSomeCoffe()
	{
		bool quit = true;
		char input;
		do
		{
			std::cout << "you need to reload the coffe machine press \"R\"";
			std::cin >> input;
			if (input == 'R')
			{
				return true;
			}
		} while (quit);
	}

private:
	std::string _coffeName;
};


int main()
{
	bool quit = true;
	char input = 'y';
	int toChoose = 0;

	float inTheCoffe = 10.0f;

	auto expresso = ChooseCoffe("Expresso");
	auto longo = ChooseCoffe("Longo");
	auto capuccino = ChooseCoffe("Capuccino");

	std::vector<ChooseCoffe> coffe = { expresso, longo, capuccino };

	do
	{
		std::cout << "which coffe do you want?" << "\n" << "1 : Expresso" << "\n" << "2 : Longo" << "\n" << "3 : cappucino";
		std::cin >> toChoose;

		switch (toChoose)
		{
		case 1 :
			toChoose -= 1.0f;
			if (inTheCoffe != 0)
			{
				expresso.CoffeBeenMaide();
			}
			else
			{
				expresso.NeedSomeCoffe();
			}
			break;
		case 2 :
			
			break;
		case 3 : 
			break;
		default:
			break;
		}



		std::cout << "continue ? y/[other key]" << "\n";
		std::cin >> input;

		if (input != 'y')
		{
			quit = false;
		}

	} while (!quit);
	return 0;
}
