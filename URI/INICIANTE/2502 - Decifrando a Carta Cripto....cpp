// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Decifrando a Carta Cripto...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2502

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int c, n;
	map<char, char> dec;
	while(scanf("%d %d", &n, &c) != EOF)
	{
		dec.clear();
		getchar();
		string x1, x2, ph;

		getline(cin, x1);
		getline(cin, x2);
		for (int i = 0; i < n; i++)
		{
			if (isalpha(x1[i]))
			{
				if (isalpha(x2[i]))
				{
					dec[x1[i]] = x2[i];
					dec[x2[i]] = x1[i];
					dec[x1[i]+32] = x2[i]+32;
					dec[x2[i]+32] = x1[i]+32;
				}
				else
				{
					dec[x1[i]] = x2[i];
					dec[x2[i]] = x1[i]+32;
					dec[x1[i]+32] = x2[i];
				}
			}
			else
			{
				if (isalpha(x2[i]))
				{
					dec[x1[i]] = x2[i]+32;
					dec[x2[i]] = x1[i];
					dec[x2[i]+32] = x1[i];
				}
				else
				{
					dec[x1[i]] = x2[i];
					dec[x2[i]] = x1[i];
				}
			}
		}
		for (int i = 0; i < c; i++)
		{
			getline(cin, ph);
			for (int j = 0; j < (int) ph.size(); j++)
			{
				if (dec.find(ph[j]) != dec.end())
					cout << dec[ph[j]];
				else
					cout << ph[j];
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
