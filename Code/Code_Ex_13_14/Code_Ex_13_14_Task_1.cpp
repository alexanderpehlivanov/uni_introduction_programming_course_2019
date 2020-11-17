#include <iostream>

int factorial(int);
bool validate(int);
void logValidation(bool);

int main()
{
	int number;
	std::cin >> number;

	if (validate(number))
	{
		std::cout << factorial(number) << "\n";
	}

	return 0;
}

int factorial(int number)
{
	if (number == 1) return 1;

	return number * factorial(number - 1);
}

bool validate(int number)
{
	if (number < 0)
	{
		logValidation(0);
		return 0; // false
	}
	else
	{
		if (number == 0)
		{
			logValidation(1);
			return 0;
		}
		else
		{
			return 1;
		}
	}
}

void logValidation(bool status)
{
	if (status)
	{
		std::cout << "0\n";
	}
	else
	{
		std::cout << "-1\n";
	}
}