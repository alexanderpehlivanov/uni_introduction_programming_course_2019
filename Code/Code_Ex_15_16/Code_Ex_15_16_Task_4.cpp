#include <iostream>
#include <string>

void copyString(const std::string&, std::string&);

int main()
{
	std::string copyFromSymbols;
	std::string copyToSymbols;

	std::cin >> copyFromSymbols;

	copyString(copyFromSymbols, copyToSymbols);

	std::cout << copyFromSymbols << " ? " << copyToSymbols << "\n";

	return 0;
}



void copyString(const std::string& copyFrom, std::string& copyTo)
{
	const int copyFromSize = copyFrom.size();

	copyTo.resize(copyFromSize);

	for (int i = 0; i < copyFromSize; ++i)
	{
		copyTo[i] = copyFrom[i];
	}
}