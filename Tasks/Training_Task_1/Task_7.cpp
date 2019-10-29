#include <iostream>

int main()
{
	int a, b;
	bool areNumbersSimple = 1;

	std::cin >> a >> b;

	for (int i = 2; i <= a / 2 && i < 10; ++i)
	{
		if (a % i == 0)
		{
			areNumbersSimple = 0;
			break;
		}
	}

	for (int i = 2; i <= b / 2 && i < 10; ++i)
	{
		if (b % i == 0)
		{
			areNumbersSimple = 0;
			break;
		}
	}

	if (areNumbersSimple)
	{
		std::cout << a << " and " << b << " are both simple\n\n";
	}
	else
	{
		std::cout << a << " and " << b << " are not both simple\n\n";
	}

	system("PAUSE");
	return 0;
}