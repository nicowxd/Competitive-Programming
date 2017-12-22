// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Justificador II
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1278

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c = 1;

	while(scanf("%d%*c", &n) && n)
	{
		int len = 0;
		string s[110];

		if (c++ > 1)
			printf("\n");
		for (int i = 0; i < n; i++)
		{
			string buff, aux;
			
			getline(cin, buff);
			stringstream ss;
			
			ss << buff;
			
			string aux2 = "";
			while(ss >> aux)
			{
				aux2 += aux;
				aux2 += ' ';
			}
			s[i] = aux2;
			len = max(len, (int) aux2.size() - 1);
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < len - ((int) s[i].size()-1); j++)
				printf(" ");
			for (int j = 0; j < (int) s[i].size() - 1; j++)
				cout << s[i][j];
			printf("\n");
		}
	}	

	return 0;
}
