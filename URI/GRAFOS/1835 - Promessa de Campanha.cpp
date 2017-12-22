// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Promessa de Campanha
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1835

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;

vi vis;
vector<vi> AdjList;

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

	int t;
	scanf("%d", &t);

	for (int j = 1; j <= t; j++)
	{
		int n, m, u, v;
		scanf("%d", &n);
		scanf("%d", &m);
		
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

		int ans = numCC - 1;
		if (ans == 0)
			printf("Caso #%d: a promessa foi cumprida\n", j);
		else
			printf("Caso #%d: ainda falta(m) %d estrada(s)\n", j, ans);
	}

	return 0;
}
