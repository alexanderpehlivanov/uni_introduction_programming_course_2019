#include <iostream>
#include <cmath>

void primeFactors(int, int = 2);

int main()
{
    int number;
    std::cin >> number;

    primeFactors(number);

    return 0;
}

void primeFactors(int number, int divider)
{
    if (number % divider == 0)
    {
        std::cout << divider << " ";
        primeFactors(number / divider, divider);
    }
    else
    {
        if (divider < number)
        {
            primeFactors(number, divider + 1);
        }
    }
}