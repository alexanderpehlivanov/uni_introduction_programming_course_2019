#include <iostream>
#include <cmath>

bool isPrime(int);
void findTwoPrimePairs(int, int);

int main()
{
    int start, end;
    std::cin >> start >> end;

    findTwoPrimePairs(start, end);

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

void findTwoPrimePairs(int start, int end)
{
    int firstPrime;
    bool isFirstPrimeFound = false;

    for (int i = start; i < end; ++i)
    {
        if (isFirstPrimeFound && isPrime(i) && i - firstPrime == 2)
        {
            std::cout << firstPrime << " " << i << "\n";
            return;
        }
        else
        {
            if (isPrime(i))
            {
                firstPrime = i;
                isFirstPrimeFound = true;
            }
        }
    }
}