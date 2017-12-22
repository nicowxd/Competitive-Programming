// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Imposto Real
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2666

#include <bits/stdc++.h>

using namespace std;

vector< vector< pair<int, int> > > adj;

int imp[10010], c;

int dfs(int u, int parent, int w)
{
	int ans = 0;
	for (int i = 0; i < (int) adj[u].size(); i++)
	{
		int v = adj[u][i].first;
		int d = adj[u][i].second;

		if (v == parent)
			continue;
		ans += d + dfs(v, u, d);
	}

	int x = imp[u];
	ans += (x/c + (x%c ? 1 : 0))*2*w-w;
	imp[parent] += imp[u];
	imp[u] = 0;
	return ans;
}

int main()
{
	
	int n;
	scanf("%d %d", &n, &c);

	adj.resize(n+1);
	for (int i = 0; i < n; i++)
		scanf("%d", imp+i);
	
	int a, b, w;
	for (int i = 1; i < n; i++)
	{
		scanf("%d %d %d", &a, &b, &w);
		adj[a-1].push_back(make_pair(b-1, w));
		adj[b-1].push_back(make_pair(a-1, w));
	}

	printf("%d\n", dfs(0, 0, 0));

	return 0;
}
