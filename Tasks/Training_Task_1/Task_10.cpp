#include <iostream>

int main()
{
	short int optionValue;

	std::cout << "Berlin is the capital of ?\n";
	std::cout << "1. China\n";
	std::cout << "2. Germany\n";
	std::cout << "3. Russia\n";
	std::cout << "Choose a number between 1 - 3: ";
	std::cin >> optionValue;
	std::cout << "\n";

	if (optionValue == 2)
	{
		std::cout << "Which is the biggest continent?\n";
		std::cout << "1. Africa\n";
		std::cout << "2. Asia\n";
		std::cout << "3. North America\n";
		std::cout << "Choose a number between 1 - 3: ";
		std::cin >> optionValue;
		std::cout << "\n";

		if (optionValue == 2)
		{
			std::cout << "Favorite russian drink?\n";
			std::cout << "1. Wine\n";
			std::cout << "2. Rakia\n";
			std::cout << "3. Vodka\n";
			std::cout << "Choose a number between 1 - 3: ";
			std::cin >> optionValue;
			std::cout << "\n";

			if (optionValue == 3)
			{
				std::cout << "You won! Congrats!\n";
			}
			else
			{
				std::cout << "Try Again\n";
			}
		}
		else
		{
			std::cout << "Try Again\n";
		}
	}
	else
	{
		std::cout << "Try Again\n";
	}

	system("PAUSE");
	return 0;
}