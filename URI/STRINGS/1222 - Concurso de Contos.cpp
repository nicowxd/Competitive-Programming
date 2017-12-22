// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Concurso de Contos
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1222

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main (void)
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	int n, c, l;
	string w;

	cin >> n >> l >> c;

	while (!cin.eof())
	{
		int pg = 1;
		int lines = 1;
		int nchar = 0;
		
		for (int i = 0; i < n; i++)
		{
			cin >> w;

			if (nchar + w.length() <= c)
			{
				nchar += w.length() + 1;
				continue;
			}

			if (nchar + w.length() >= c)
			{
				lines++;
				nchar = w.length() + 1;
			
				if (lines > l)
				{
					pg++;
					lines = 1;
				}
			}	
		}
		cout << pg << endl;
		cin >> n >> l >> c;
	}

	return 0;
}
