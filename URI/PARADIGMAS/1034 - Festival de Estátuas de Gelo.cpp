// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Festival de Estátuas de Gelo
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1034

#include <bits/stdc++.h>

using namespace std;

#define INF 1000000000

int main()
{

	int t, v[26], memo[1005000];
	scanf("%d", &t);

	while(t--)
	{
		int n, m;
		scanf("%d %d", &n, &m);

		for (int i = 0; i < n; i++)
			scanf("%d", v+i);
		
		memo[0] = 0;

		for (int i = 1; i <= m; i++)
		{
			int menor = INF;
			for (int j = 0; j < n; j++)
				if (i >= v[j])
					menor = min(menor, memo[i-v[j]]);
			memo[i] = menor + 1;
		}
		printf("%d\n", memo[m]);
	}

	return 0;
}
