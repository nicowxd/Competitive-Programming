// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Motoboy
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1286

#include <bits/stdc++.h>

using namespace std;

#define MAX 50

int n, valor[MAX], peso[MAX], memo[MAX][MAX];

int pedidos(int id, int w)
{
	if (w == 0 || id == n) return 0;
	if (memo[id][w] != -1) return memo[id][w];
	if (peso[id] > w) return memo[id][w] = pedidos(id+1, w);
	return memo[id][w] = max(pedidos(id+1, w), valor[id] + pedidos(id+1, w -peso[id]));
} 

int main()
{
	while(scanf("%d", &n), n)
	{
		memset(memo, -1, sizeof memo);
		int p, ans;
		scanf("%d", &p);
		for (int i = 0; i < n; i++)
			scanf("%d %d", &valor[i], &peso[i]);
		
		ans = pedidos(0, p);
		
		printf("%d min.\n", ans);
	}
	return 0;
}
