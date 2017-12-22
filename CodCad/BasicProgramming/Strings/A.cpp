#include <iostream>

using namespace std;

int main()
{
	string numero;
	cin >> numero;
	
	for (int i = 0; i < (int) numero.size(); i++)
	{
		if (numero[i] == 'A' or numero[i] == 'B' or numero[i] == 'C')
			cout << 2;
		else if (numero[i] == 'D' or numero[i] == 'E' or numero[i] == 'F')
			cout << 3;
		else if (numero[i] == 'G' or numero[i] == 'H' or numero[i] == 'I')
			cout << 4;
		else if (numero[i] == 'J' or numero[i] == 'K' or numero[i] == 'L')
			cout << 5;
		else if (numero[i] == 'M' or numero[i] == 'N' or numero[i] == 'O')
			cout << 6;
		else if (numero[i] == 'P' or numero[i] == 'Q' or numero[i] == 'R' or numero[i] == 'S')
			cout << 7;
		else if (numero[i] == 'T' or numero[i] == 'U' or numero[i] == 'V')
			cout << 8;
		else if (numero[i] == 'W' or numero[i] == 'X' or numero[i] == 'Y' or numero[i] == 'Z')
			cout << 9;
		else
			cout << numero[i];
	}
	cout << "\n";
	return 0;
}
