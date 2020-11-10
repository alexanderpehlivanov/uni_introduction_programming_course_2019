#include <iostream>
#include <cmath>

bool isPalidrom(int);
void printPolidroms(int, int);

int main()
{
    int start, end;
    std::cin >> start >> end;

    printPolidroms(start, end);

    return 0;
}

bool isPalidrom(int number)
{
    int counter = 0;
    int currentDigit, reverseNumber = 0, copyNumber = number;

    do
    {
        currentDigit = copyNumber % 10;
        reverseNumber = reverseNumber * 10 + currentDigit;
        copyNumber /= 10;
        ++counter;
    } while (copyNumber != 0);

    if (reverseNumber == number && counter >= 3)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void printPolidroms(int start, int end)
{
    for (int i = start; i < end; ++i)
    {
        if (isPalidrom(i))
        {
            std::cout << i << "\n";
        }
    }
}