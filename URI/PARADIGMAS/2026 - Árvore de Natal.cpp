// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Árvore de Natal
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2026

#include <bits/stdc++.h>

using namespace std;

#define MAXN 120

int p, w, W[MAXN], v[MAXN], memo[MAXN][MAXN];

int knap (int id, int w)
{
	if (id == p)
		return 0;
	if (memo[id][w] != -1)
		return memo[id][w];
	if (W[id] > w)
		return memo[id][w] = knap(id+1, w);
	return memo[id][w] = max(knap(id+1, w), v[id]+knap(id+1, w-W[id]));
}

int main()
{

	int g;
	scanf("%d", &g);

	for (int i = 1; i <= g; i++)
	{
		memset(memo, -1, sizeof memo);
		scanf("%d%d", &p, &w);
		for (int j = 0; j < p; j++)
			scanf("%d %d", v+j, W+j);
		
		printf("Galho %d:\nNumero total de enfeites: %d\n\n", i, knap(0, w));
	}
	return 0;
}
