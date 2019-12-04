#include <iostream>

using namespace std;

void getNumberDigits(int);
int numberSize(int);

int main()
{
	int number;

	cin >> number;

	getNumberDigits(number);

	return 0;
}

void getNumberDigits(int number)
{
	const int arrSize = numberSize(number);

	int* arr = new int[arrSize];

	for (int i = 0; i < arrSize; ++i)
	{
		arr[i] = number % 10;
		number /= 10;
	}

	for (int i = 0; i < arrSize; ++i)
	{
		cout << arr[i] << " ";
	}

	for (int i = arrSize - 1; i >= 0; --i)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;
}

int numberSize(int number)
{
	int size = 0;

	do
	{
		number /= 10;
		++size;
	} while (number != 0);

	return size;
}