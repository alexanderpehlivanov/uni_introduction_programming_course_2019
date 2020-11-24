#include <iostream>
#include <string>

int main()
{
	const int maxSize = 20;

	std::string symbols;

	std::cin >> symbols;

	if (symbols.size() <= 20)
	{
		for (int i = 0; i < symbols.size(); ++i)
		{
			if (symbols[i] >= 'a' && symbols[i] <= 'z')
			{
				symbols[i] -= 32;
			}
		}

		std::cout << symbols << "\n";
	}
	else
	{
		std::cout << "-1";
	}

	return 0;
}