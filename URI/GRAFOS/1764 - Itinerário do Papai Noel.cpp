// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Itinerário do Papai Noel
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1764

#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vi taken;
vector<vii> AdjList;
priority_queue<ii> pq;

void process(int u)
{
	taken[u] = 1;
	for (int i = 0; i < (int) AdjList[u].size(); i++)
	{
		ii v = AdjList[u][i];
		if (!taken[v.first])
			pq.push(ii(-v.second, -v.first));
	}
}
int main()
{

	int n, m, u, v, w;
	while(scanf("%d %d", &n, &m), (n or m))
	{

		AdjList.assign(n, vii());
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d %d", &u, &v, &w);
			AdjList[u].push_back(ii(v, w));
			AdjList[v].push_back(ii(u, w));
		}
		
		taken.assign(n, 0);
		process(0);
		int mstCost = 0;
	
		while(!pq.empty())
		{
			ii front = pq.top(); pq.pop();
			u = -front.second, w = -front.first;
			if (!taken[u])
			{
				mstCost += w;
				process(u);
			}
		}

		printf("%d\n", mstCost);
	}
	return 0;
}
