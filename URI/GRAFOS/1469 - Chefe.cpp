// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Chefe
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1469

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vector<vi> AdjList;

int pos[61234], idade[61234], menor;

vi vis;

void dfs(int u)
{
	vis[u] = 1;
	for (int i = 0; i < (int) AdjList[u].size(); i++)
	{
		int v = AdjList[u][i];
		menor = min(menor, idade[v]);
		if (!vis[v])
			dfs(v);
	}
}

int main()
{

	int n, m, q, u, v;
	while(scanf("%d %d %d", &n, &m, &q) != EOF)
	{
		AdjList.assign(n, vi());
		for (int i = 0; i < n; i++)
		{
			scanf("%d", idade+i);
			pos[i] = i;
		}

		for (int i = 0; i < m; i++)
		{
			scanf("%d %d", &v, &u);
			AdjList[u-1].push_back(v-1);
		}

		char op;
		for (int i = 0; i < q; i++)
		{
			getchar();
			scanf("%c", &op);
			if (op == 'T')
			{
				scanf("%d %d", &u, &v);
				swap(idade[pos[u-1]], idade[pos[v-1]]);
				swap(pos[u-1], pos[v-1]);
			}
			else
			{
				scanf("%d", &u);
				vis.assign(n, 0);
				menor = 1e9;
				dfs(pos[u-1]);

				if (menor == 1e9)
					printf("*\n");
				else
					printf("%d\n", menor);
			}
		}
	}
	return 0;
}
