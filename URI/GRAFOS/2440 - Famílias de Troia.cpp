// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Famílias de Troia
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2440

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vector<vi> AdjList;
vi vis;

void dfs(int u)
{
	vis[u] = 1;
	for (int i = 0; i < (int) AdjList[u].size(); i++)
	{
		int v = AdjList[u][i];
		if (!vis[v])
			dfs(v);
	}
}

int main()
{

	int n, m, u, v;
	scanf("%d %d", &n, &m);

	AdjList.assign(n+1, vi());
	vis.assign(n+1, 0);
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &u, &v);
		AdjList[u].push_back(v);
		AdjList[v].push_back(u);
	}

	int numCC = 0;
	
	for (int i = 1; i <= n; i++)
	{
		if (!vis[i])
		{
			dfs(i);
			numCC++;
		}
	}

	printf("%d\n", numCC);
	return 0;
}
