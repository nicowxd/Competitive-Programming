#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vector<vi> AdjList;
vi vis, level, d;
int stop = 0;

void dfs(int u, int s)
{
	stop = max(stop, s);
	vis[u] = 1;
	level[s]++;
	d[u] = s;
	for (int i = 0; i < AdjList[u].size(); i++)
	{
		int v = AdjList[u][i];
		if (!vis[v])
			dfs(v, s+1);
	}
}

int main()
{

	int n, m, u;
	scanf("%d %d", &n, &m);
	AdjList.assign(n+1, vi());
	vis.assign(n+1, 0);
	level.assign(n+1, 0);
	d.assign(n+1, 0);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &u);
		AdjList[u].push_back(i);
	}
	
	dfs(0, 0);
	int v[stop+1];
	memset(v, 0, sizeof v);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &u);
		v[d[u]]++;
	}

	for (int i = 1; i <= stop; i++)
		printf("%.2lf ", (100.00*v[i])/level[i]);
	
	printf("\n");
	return 0;
}
