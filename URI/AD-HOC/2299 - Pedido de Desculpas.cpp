// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pedido de Desculpas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2299

#include <bits/stdc++.h>

using namespace std;

#define MAXN 1050

int c, f, v[MAXN], w[MAXN], memo[MAXN][MAXN];

int knap(int id, int wt)
{
	if (memo[id][wt] != -1)
		return memo[id][wt];
	
	if (id == f or wt <= 0)
		return memo[id][wt] = 0;
	
	if (w[id] <= wt)
		return memo[id][wt] = max(knap(id+1, wt), v[id] + knap(id+1, wt-w[id]));

	return memo[id][wt] = knap(id+1, wt);
}

int main()
{
	int teste = 1;
	while(scanf("%d %d", &c, &f), (c or f))
	{
		for (int i = 0; i < f; i++)
			scanf("%d %d", w+i, v+i);
		memset(memo, -1, sizeof memo);

		printf("Teste %d\n", teste++);
		printf("%d\n\n", knap(0, c));
	}
	return 0;
}
