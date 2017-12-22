// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: OBI URI
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2062

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	string word;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		cin >> word;
		if ((int) word.size() == 3)
		{
			if (word[0] == 'O' && word[1] == 'B')
			{
				if (i == n)
					cout << "OBI\n";
				else
					cout << "OBI ";
			}
			else if (word[0] == 'U' && word[1] == 'R')
			{
				if (i == n)
					cout << "URI\n";
				else
					cout << "URI ";
			}
			else
			{
				if (i == n)
					cout << word << endl;
				else
					cout << word << " ";
			}
		}
		else
		{
			if (i == n)
				cout << word << endl;
			else
				cout << word << " ";
		}
	}
	return 0;
}
