// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Desenhando Labirintos
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1076

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
vector<vi> AdjList;
vi seen;

int ans;

void dfs(int u)
{
	ans++;
	seen[u] = 1;
	for (int i = 0; i < (int) AdjList[u].size(); i++)
	{
		int k = AdjList[u][i];
		if (!seen[k])
			dfs(k);
	}
}

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n, m, a, u, v;
		scanf("%d", &n);
		scanf("%d %d", &m, &a);

		AdjList.assign(m, vi());
		seen.assign(m, 0);
		for (int i = 0; i < a; i++)
		{
			scanf("%d %d", &u, &v);
			AdjList[u].push_back(v);
			AdjList[v].push_back(u);
		}
		
		ans = -1;
		dfs(n);
		printf("%d\n", 2*ans);
	}
	return 0;
}
