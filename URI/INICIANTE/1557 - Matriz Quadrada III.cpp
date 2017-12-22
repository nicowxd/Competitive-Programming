// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Matriz Quadrada III
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1557

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	
	while(scanf("%d", &n), n)
	{
		int v[n+1][n+1], digMaior = 0;

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				int start = 1;
				for (int k = 1; k < i; k++)
					start *= 2;
				if (j == 1)
					v[i][j] = start;
				else
					v[i][j] = v[i][j-1]*2;
				digMaior = max(digMaior, (int)log10(v[i][j])+1);
			}
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				if (j == 1)
				{
					int numDig = (int)log10(v[i][j])+1;
					for (int k = 0; k < digMaior-numDig; k++)
						printf(" ");
					printf("%d", v[i][j]);
				}
				else
				{
					int numDig = (int)log10(v[i][j])+1;
					for (int k = 0; k < digMaior-numDig+1; k++)
						printf(" ");
					printf("%d", v[i][j]);
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
