#include <iostream>

int power(int, int);
bool validate(int);
void logValidation();

int main()
{
	int number, powerVariable;
	std::cin >> number >> powerVariable;

	if (validate(number) && validate(powerVariable))
	{
		std::cout << power(number, power(powerVariable, powerVariable)) << "\n";
	}

	return 0;
}

int power(int number, int powerVariable)
{
	if (powerVariable == 1) return number;

	return number * power(number, powerVariable - 1);
}

bool validate(int number)
{
	if (number < 0)
	{
		logValidation();
		return 0; // false
	}
	else
	{
		return 1;
	}
}

void logValidation()
{
	std::cout << "Negative numbers are not allowed\n";
}