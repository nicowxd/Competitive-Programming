// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sentença Dançante
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1234

#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	int aux;
	string sent;
	while(getline(cin, sent))
	{
	aux = 0;
	for (int i = 0; i < sent.size(); i++)
	{
	if (isalpha(sent[i]))
	{
	if (aux % 2 == 0)
		sent[i] = toupper(sent[i]);
	else
		sent[i] = tolower(sent[i]);
	aux++;
	}
	}
	cout << sent << endl;
	}
	return 0;
}
	
