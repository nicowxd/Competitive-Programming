// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Colônia de Formigas
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1135

#include <bits/stdc++.h>

using namespace std;

#define MAXN 105000
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<vii> AdjList;
int level[MAXN], p[MAXN];

void dfs(int u)
{
	for (int i = 0; i < (int) AdjList[u].size(); i++)
	{
		ii v = AdjList[u][i];

		if (level[v.first] == -1)
		{
			level[v.first] = level[u] + 1;
			p[v.first] = u;

			dfs(v.first);
		}
	}
}

long long lca(int u, int v)
{
	long long ans = 0LL;
	while(u != v)
	{
		if (level[u] > level[v])
		{
			for (int i = 0; i < (int) AdjList[u].size(); i++)
			{
				ii k = AdjList[u][i];
				if (k.first == p[u])
					ans += k.second;
			}
			u = p[u];
		}
		else
		{
			for (int i = 0; i < (int) AdjList[v].size(); i++)
			{
				ii k = AdjList[v][i];
				if (k.first == p[v])
					ans += k.second;
			}
			v = p[v];
		}
	}
	return ans;
}

int main()
{

	int n, u, v, q;
	while(scanf("%d", &n), n)
	{
		AdjList.assign(n, vii());
		for (int i = 1; i < n; i++)
		{
			scanf("%d %d", &u, &v);
			AdjList[i].push_back(ii(u, v));
			AdjList[u].push_back(ii(i, v));
		}
		
		for (int i = 0; i <= n; i++)
			level[i] = p[i] = -1;
		
		level[0] = 0;
		dfs(0);

		scanf("%d", &q);
		for (int i = 0; i < q; i++)
		{
			scanf("%d %d", &u, &v);
			if (i == q-1)
				printf("%lld", lca(u, v));
			else
				printf("%lld ", lca(u, v));
		}
		printf("\n");
	}
	return 0;
}
