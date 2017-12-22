// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tipos Analógimôn
// Nível: 2
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2562

#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vi vis;
vector<vii> Adj;

int ans;

int dfs(int s)
{
	vis[s] = 1;
	for (int i = 0; i < (int) Adj[s].size(); i++)
	{
		ii q = Adj[s][i];
		if (vis[q.first] == 0)
		{
			ans++;
			dfs(q.first);
		}
	}
	return ans;
}	

int main()
{

	int n, m, a, b;
	while(scanf("%d %d", &n, &m) != EOF)
	{
		Adj.assign(n, vii());
		vis.assign(n, 0);
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d", &a, &b);
			Adj[a-1].push_back(ii(b-1, 1));
			Adj[b-1].push_back(ii(a-1, 1));
		}
		
		int s;
		scanf("%d", &s);
		
		ans = 1;
		printf("%d\n", dfs(s-1));
	}
	return 0;
}
