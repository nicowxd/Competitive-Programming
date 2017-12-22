#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vector<vii> AdjList;
vi dfs_num;

void dfs(int u)
{
	dfs_num[u] = 1;
	for (int i = 0; i < (int) AdjList[u].size(); i++)
	{
		ii v = AdjList[u][i];
		if (dfs_num[v.first] == 0)
			dfs(v.first);
	}
}

int main()
{
	
	int n, m, x, y;
	scanf("%d %d", &n, &m);
	AdjList.assign(n, vii());
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d", &x, &y);
		AdjList[x-1].push_back(ii(y-1, 1));
		AdjList[y-1].push_back(ii(x-1, 1));
	}
	
	int ans = 0;
	dfs_num.assign(n, 0);

	for (int i = 0; i < n; i++)
	{
		if (dfs_num[i] == 0)
			ans++, dfs(i);
	}
	
	printf("%d\n", ans);
	return 0;
}
