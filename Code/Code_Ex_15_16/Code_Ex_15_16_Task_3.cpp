#include <iostream>
#include <string>

int getLenght(const std::string&);

int main()
{
	std::string symbols;

	std::cin >> symbols;

	std::cout << getLenght(symbols);

	return 0;
}

int getLenght(const std::string& symbols)
{
	int symbolsCounter = 0;

	while (symbols[symbolsCounter] != '\0')
	{
		++symbolsCounter;
	}

	return symbolsCounter;
}