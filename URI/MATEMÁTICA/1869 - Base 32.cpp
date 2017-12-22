// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Base 32
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1869

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	unsigned long long int decimalNumber;
	char base[33] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V'};
	int index = 0;

	while(std::cin >> decimalNumber and decimalNumber)
	{
		string tresNumber = "";
		int rest;
		do
		{

			rest = decimalNumber % 32;

			tresNumber += base[rest];
			decimalNumber /= 32;
		} while (decimalNumber != 0);

		reverse(tresNumber.begin(), tresNumber.end());
	
		cout << tresNumber;

		std::cout << "\n";
	}
	std::cout << "0\n";
	return 0;
}
