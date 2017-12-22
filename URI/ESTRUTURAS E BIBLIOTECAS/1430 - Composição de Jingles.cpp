// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Composição de Jingles
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1430

#include <bits/stdc++.h>

using namespace std;

int main (void)
{
	char seq[1000];
	map <char, float> notes;

	notes['W'] = 1;
	notes['H'] = .5;
	notes['Q'] = 1/4.0;
	notes['E'] = 1/8.0;
	notes['S'] = 1/16.0;
	notes['T'] = 1/32.0;
	notes['X'] = 1/64.0;

	while (cin >> seq, strlen(seq) > 1)
	{
		int correts = 0;
		char *ptr = strtok (seq, "/");

		while (ptr != NULL)
		{
			float total = 1;
			while (*ptr)
			{
				total -= notes[*ptr];
				ptr++;
			}

			correts += total == 0;
			ptr = strtok(NULL, "/");
		}

		cout << correts << endl;
	}
	
	return 0;
}

