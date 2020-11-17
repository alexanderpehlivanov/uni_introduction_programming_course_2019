#include <iostream>

int average();
bool validate(int);
void logValidation();

int main()
{
	std::cout << average() << "\n";

	return 0;
}

int average()
{
	int number = 0, counter = 0, sum = 0;

	do
	{
		std::cin >> number;
		if (number < 0) break;
		sum += number;
		++counter;
	} while (true);

	return sum / counter;
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