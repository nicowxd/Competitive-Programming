// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Componentes Conexos
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1082

#include <bits/stdc++.h>

	
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vi dfs_num;
vector<vii> AdjList;
set<char> cc;
void dfs(int u)
{
	dfs_num[u] = 1;
	cc.insert(u + 'a');
	for (int k = 0; k < (int) AdjList[u].size(); k++)
	{
		ii v = AdjList[u][k];
		if (dfs_num[v.first] == 0)
			dfs(v.first);
	}
}

int main()
{

	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		int v, e;
		char vtx1, vtx2;	
		scanf("%d %d", &v, &e);
		AdjList.assign(v, vii());
		for (int j = 0; j < e; j++)
		{
			getchar();
			scanf("%c %c", &vtx1, &vtx2);
			AdjList[vtx1 - 'a'].push_back(ii(vtx2 - 'a', 0));
			AdjList[vtx2 - 'a'].push_back(ii(vtx1 - 'a', 0));
		}
		
		printf("Case #%d:", i);
		int numCC = 0;
		dfs_num.assign(v, 0);
		
		for (int j = 0; j < v; j++)
		{
			if (dfs_num[j] == 0)
			{
				cc.clear();
				printf("\n");
				dfs(j);
				for (set<char>::iterator it = cc.begin(); it != cc.end(); it++)
					cout << (*it) <<",";
				numCC++;
			}
		}
		
		printf("\n%d connected components\n\n", numCC);
	}
	return 0;
}
