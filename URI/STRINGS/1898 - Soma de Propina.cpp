// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Soma de Propina
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1898

#include <iostream>
#include <cstdio>
#include <cctype>
#include <cstdlib>

using namespace std;

string readNum (string line, int iniPos)
{
	string number;
	int maxlen = 18;
	while (iniPos < line.length() and number.length() < maxlen)
	{
		if (isdigit(line[iniPos])) number += line[iniPos];
		if (line[iniPos] == '.') number += line[iniPos], maxlen = number.length() + 2;
		iniPos++;
	}

	return number;
}

int main (void)
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	string line, cpf, num1, num2;
	int i = 0;

	cin >> line;

	while (cpf.length() != 11)
	{
		if (isdigit(line[i])) cpf += line[i];
		i++;
	}

	num1 = readNum (line, i);
	cin >> line;
	num2 = readNum (line, 0);

	printf ("cpf %s\n%.2lf\n", cpf.c_str(), atof (num1.c_str()) + atof (num2.c_str()));

	return 0;
}
