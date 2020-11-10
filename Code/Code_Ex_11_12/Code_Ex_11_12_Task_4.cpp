#include <iostream>
#include <cmath>

bool isPalidrom(int);

int main()
{
    int number;
    std::cin >> number;

    std::cout << isPalidrom(number) << "\n";

    return 0;
}

bool isPalidrom(int number)
{
    int currentDigit, reverseNumber = 0, copyNumber = number;

    do
    {
        currentDigit = copyNumber % 10;
        reverseNumber = reverseNumber * 10 + currentDigit;
        copyNumber /= 10;
    } while (copyNumber != 0);

    if (reverseNumber == number)
    {
        return true;
    }
    else
    {
        return false;
    }
}