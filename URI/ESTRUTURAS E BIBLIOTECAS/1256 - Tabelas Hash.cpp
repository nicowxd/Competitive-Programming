// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tabelas Hash
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1256

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k[201];
	int hash[201][201];
	scanf("%d", &n);
	
	int aux = 0;
	while(n--)
	{
		if (aux > 0)
			printf("\n");
		aux++;
		memset(k, 0, sizeof k);
		
		int m, c, x;
		scanf("%d %d", &m, &c);
		for (int i = 0; i < c; i++)
		{
			scanf("%d", &x);
			hash[x%m][k[x%m]] = x;
			k[x%m]++;
		}
		
		for (int i = 0; i < m; i++)
		{
			printf("%d -> ", i);
			for (int j = 0; j < k[i]; j++)
				printf("%d -> ", hash[i][j]);
			printf("\\\n");
		}
	}
			
			
	return 0;
}
