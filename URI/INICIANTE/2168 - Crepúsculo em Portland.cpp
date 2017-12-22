// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Crepúsculo em Portland
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2168

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n,v[123][123];
	scanf("%d", &n);
	
	for (int i = 0; i < n+1; i++)
		for (int j = 0; j < n+1; j++)
			scanf("%d", &v[i][j]);
	
	for (int i = 0; i < n; i++)
	{
		int ans = 0;
		for (int j = 0; j < n; j++)
		{		
			if (v[i][j] + v[i+1][j] + v[i][j+1] + v[i+1][j+1] >= 2)
				printf("S");
			else
				printf("U");
		}
		printf("\n");
	}

	return 0;
}
