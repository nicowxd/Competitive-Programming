// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Dudu Faz Serviço
// Nível: 2
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1610

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;

#define white -1
#define black 1
#define gray 2

vector<vii> AdjList;

vi dfs_num;

bool dfs(int u)
{
	dfs_num[u] = gray;
	for (int i = 0; i < (int) AdjList[u].size(); i++)
	{
		ii v = AdjList[u][i];
		if (dfs_num[v.first] == white)
		{
			if (!dfs(v.first))
				return false;
		}
		else if (dfs_num[v.first] == gray)
			return false;
	}
	dfs_num[u] = black;
	return true;
}

int main()
{

	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		int n, m, u, v;
		scanf("%d %d", &n, &m);

		AdjList.assign(n, vii());
		dfs_num.assign(n, white);
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d", &u, &v);
			AdjList[u-1].push_back(ii(v-1, 1));
		}
		
		bool nocycle = true;

		for (int i = 0; i < n and nocycle; i++)
			nocycle = dfs(i);	

		if (!nocycle)
			printf("SIM\n");
		else
			printf("NAO\n");
	}
	return 0;
}
