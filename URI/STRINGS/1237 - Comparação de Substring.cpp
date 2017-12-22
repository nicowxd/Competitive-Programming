// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Comparação de Substring
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1237

#include <bits/stdc++.h>

using namespace std;

int lcs (string x, string y)
{
	int ans = 0, c, xtam = (int) x.size(), ytam = (int) y.size();
	for (int i = 0; i < xtam; i++)	
	{
		for (int j = 0; j < ytam; j++)
		{
			if (x[i] == y[j])
			{
				c = 1;
				for (int k = 1; k + i < xtam, k + j < ytam; k++)
				{
					if (x[k+i] == y[k+j])
						c++;
					else
						break;
				}
				if (c > ans)
					ans = c;
			}
		}
	}
	return ans;
}

int main()
{

	string a, b;
	while(getline(cin, a) and getline(cin, b))
	{
		printf("%d\n", lcs(a, b));
	}
	return 0;
}
