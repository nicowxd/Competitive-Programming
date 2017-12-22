// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ir e Vir
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1128

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi visited;

int dfs(int u, vector< vector<int> > &g)
{
	int cnt = 1;
	visited[u] = 1;
	
	for (int i = 0; i < (int) g[u].size(); i++)
	{
		int v = g[u][i];
		if (!visited[v])
			cnt += dfs(v, g);
	}

	return cnt;
}

int main()
{

	int n, m;
	vector< vector<int> > graph, graphT;
	while(scanf("%d %d", &n, &m), n or m)
	{
		graph.assign(n+1, vi());
		graphT.assign(n+1, vi());

		int u, v, p;
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d %d", &u, &v, &p);
			
			graph[u].push_back(v);
			graphT[v].push_back(u);

			if (p == 2)
			{
				graph[v].push_back(u);
				graphT[u].push_back(v);
			}
		}
		
		visited.assign(n+1, 0);
		int ans = dfs(1, graph);
		visited.assign(n+1, 0);
		int ans2 = dfs(1, graphT);

		if (ans < n)
			puts("0");
		else if (ans2 < n)
			puts("0");
		else
			puts("1");
	}
		
	return 0;
}
