// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jogo da Memória
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2470

#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define MAXN 50200
#define MAXL 17

typedef vector<int> vi;

vector<vi> AdjList;
int anc[MAXN][MAXL], p[MAXN], level[MAXN], c[MAXN], par[MAXN];

void dfs(int u)
{
	for (int i = 0; i < (int) AdjList[u].size(); i++)
	{
		int v = AdjList[u][i];
		if (level[v] == -1)
		{
			p[v] = u;
			level[v] = level[u] + 1;
			
			dfs(v);
		}
	}
}

int lca (int u, int v)
{
	if (level[u] < level[v])
		swap(u, v);
	
	int dist = level[u] - level[v];
	while(dist > 0)
	{
		int up = log2(dist);
		u = anc[u][up];
		dist -= (1 << up);
	}

	if (u == v) return u;

	for (int i = MAXL-1; i >= 0; i--)
	{
		if (anc[u][i] != -1 and anc[u][i] != anc[v][i])
		{
			u = anc[u][i];
			v = anc[v][i];
		}
	}
	return p[u];
}	

int main()
{

	int n, u, v, x;
	scanf("%d", &n);

	AdjList.assign(n+1, vi());	
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		if (c[x])
		{
			par[i] = c[x];
			par[c[x]] = i;
		}
		c[x] = i;
	}
	
	for (int i = 1; i < n; i++)
	{
		scanf("%d %d", &u, &v);
		AdjList[u].push_back(v);
		AdjList[v].push_back(u);
	}

	for (int i = 0; i < MAXN; i++)
		p[i] = level[i] = -1;

	for (int i = 0; i < MAXN; i++)
		for (int j = 0; j < MAXL; j++)
			anc[i][j] = -1;

	level[1] = 0;
	dfs(1);
	
	for (int i = 1; i <= n; i++)
		anc[i][0] = p[i];

	for (int j = 1; j < MAXL; j++)
	{
		for (int i = 1; i <= n; i++)
		{
			if (anc[i][j-1] != -1)
				anc[i][j] = anc[ anc[i][j-1] ][j-1];
		}
	}
	long long ans = 0LL;
	for (int i = 1; i <= n; i++)
		ans += (long long) (level[i] + level[par[i]] - 2*level[ lca(i, par[i]) ]);

	printf("%lld\n", ans/2);
	return 0;
}
