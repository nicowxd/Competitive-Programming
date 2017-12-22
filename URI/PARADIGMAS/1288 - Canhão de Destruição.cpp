// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Canhão de Destruição
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1288

#include <bits/stdc++.h>

using namespace std;

#define MAX 150

int x[MAX], w[MAX], k, dp[MAX][MAX];

int knap(int id, int p)
{
	if (p <= 0 || id == k)
		return 0;
	if (dp[id][p] != -1)
		return dp[id][p];
	if (w[id] > p)
		return dp[id][p] = knap(id+1, p);
	return max(knap(id+1, p), x[id] + knap(id+1, p-w[id]));
}

int main()
{
	
	int n;
	scanf("%d", &n);
	
	while(n--)
	{
		memset(dp, -1, sizeof dp);
		scanf("%d", &k);
		for (int i = 0; i < k; i++)
			scanf("%d %d", &x[i], &w[i]);
		
		int c, r, ans;
		scanf("%d", &c);
		scanf("%d", &r);
			
		ans = knap(0, c);
		
		if (ans >= r)
			printf("Missao completada com sucesso\n");
		else
			printf("Falha na missao\n");
	}

	return 0;
}
