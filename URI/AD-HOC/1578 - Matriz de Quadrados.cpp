// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Matriz de Quadrados
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1578

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c = 4, numEsp; 
	long long unsigned int v[40][40], maior[40] = {0LL};
	scanf("%d", &n);
	
	while(n--)
	{
		if (c > 4)
			printf("\n");
		memset(maior, 0LL, sizeof maior);
		int m;
		scanf("%d", &m);
		
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				scanf("%llu", &v[i][j]);
				v[i][j]*=v[i][j];
			}
		}
		
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (v[j][i] > maior[i])
					maior[i] = v[j][i];
			}
		}
		
		printf("Quadrado da matriz #%d:\n", c++);
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int numEspMaior, numEspAtual, numEsp;
				if (maior[j] > 0)
				{
					numEspMaior = ((int)log10(maior[j])+1);
					if (v[i][j] > 0)
						numEspAtual = ((int)log10(v[i][j])+1);
					else
						numEspAtual = 1;

					numEsp = numEspMaior - numEspAtual;
					for (int k = 0; k < numEsp; k++)
						printf(" ");
				}
				else
				{	
					numEspMaior = 1;
					if (v[i][j] > 0)
						numEspAtual = ((int)log10(v[i][j])+1);
					else
						numEspAtual = 1;
					numEsp = numEspMaior - numEspAtual;
					for (int k = 0; k < numEsp; k++)
						printf(" ");
				}
				if (j == m-1)
					printf("%llu\n", v[i][j]);
				else
					printf("%llu ", v[i][j]);
			}
		}
	}
	return 0;
}
