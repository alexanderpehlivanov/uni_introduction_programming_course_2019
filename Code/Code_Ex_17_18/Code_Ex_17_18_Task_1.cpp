#include <iostream>

void selectionSort(int* const, const int&, bool(*)(int&, int&, bool), bool = false);
void swap(int&, int&);
bool compare(int&, int&, bool = false);

int main()
{
	int arr[5] = { 50, 11, 60, 35, 1 };

	selectionSort(arr, 5, compare, false);

	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";

	return 0;
}
void selectionSort(int* const arr, const int& arr_size, bool(*compare)(int& left, int& right, bool isMax), bool isMax)
{
	int i, j, index;

	for (i = 0; i < arr_size - 1; ++i)
	{
		index = i;

		for (j = i + 1; j < arr_size; ++j)
		{
			if (compare(arr[j], arr[index], isMax))
			{
				index = j;
			}
		}

		swap(arr[index], arr[i]);
	}
}

void swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}

bool compare(int& left, int& right, bool isMax)
{
	return isMax ? left > right : left < right;
}