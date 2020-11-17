#include <iostream>

void swap(int&, int&);

int main()
{
	int firstNumber, secondNumber;

	std::cin >> firstNumber >> secondNumber;

	swap(firstNumber, secondNumber);

	std::cout << firstNumber << " " << secondNumber << "\n";

	return 0;
}

void swap(int& firstNumber, int& secondNumber)
{
	int temp;

	temp = firstNumber;
	firstNumber = secondNumber;
	secondNumber = temp;
}