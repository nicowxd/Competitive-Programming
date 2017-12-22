// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Frequência de Letras
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1255

#include <bits/stdc++.h>

using namespace std;

map<char, int> letras;
map<char, int>::iterator it;
int main()
{
	int n, maior;
	string frase;
	scanf("%d", &n);	
	getchar();

	for (int i = 0; i < n; i++)
	{
		getline(cin, frase);
		letras.clear();
		maior = 1;

		for (int i = 0; i < frase.size(); i++)
		{
			if (letras.find(tolower(frase[i])) != letras.end())
			{
				letras[tolower(frase[i])]++;
				if (letras[tolower(frase[i])] > maior)
					maior = letras[tolower(frase[i])];
			}
			else
			{
				if (frase[i] != ' ')
					letras[tolower(frase[i])] = 1;
			}	
		}
	
		for (it = letras.begin(); it != letras.end(); it++)
		{
			if ( (*it).second == maior)
				cout << (*it).first;
		}
		printf("\n");
	}
	return 0;
}	
