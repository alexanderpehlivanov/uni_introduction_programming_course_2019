#include <iostream>
#include <cmath>

bool isPrime(int);

int main()
{
	int number, counter = 0;

	do
	{
		std::cin >> number;
		if (number < 0) break;
		if (isPrime(number)) ++counter;
	} while (true);

	std::cout << counter << "\n";

	return 0;
}

bool isPrime(int number)
{
	for (int i = 2; i <= sqrt(number); ++i)
	{
		if (number % i == 0) return false;
	}

	return true;
}