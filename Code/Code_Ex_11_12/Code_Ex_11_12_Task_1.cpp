#include <iostream>
#include <cmath>

bool isPrime(int);

int main()
{
    int number;
    std::cin >> number;

    return 0;
}

bool isPrime(int number)
{
    for (int i = 2; i <= std::sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}