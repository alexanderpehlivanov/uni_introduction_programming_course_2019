#include <iostream>

using namespace std;

int main()
{
	int n, number;

	cin >> n;
	cin >> number;

	int* arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = number % 10;
		number /= 10;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " "
	}

	delete[] arr;

	return 0;
}