// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Matriz Quadrada IV
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1827

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n) != EOF)
	{
		int v[n+1][n+1];
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((n & 1) and i == (n/2) and j == (n/2))
					printf("4");
				else if ((i >= (n/3) and i <= n-1-(n/3)) and (j >= (n/3) and j <= n-1-(n/3)))
					printf("1");
				else if (i == j)
					printf("2");
				else if (i == n-1-j)
					printf("3");
				else
					printf("0");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
