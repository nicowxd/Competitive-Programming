// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Roteadores
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1774

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

	int r, c, u, v, w;
	scanf("%d %d", &r, &c);

	AdjList.assign(r+1, vii());
	for (int i = 0; i < c; i++)
	{
		scanf("%d %d %d", &u, &v, &w);
		AdjList[u].push_back(ii(v, w));
		AdjList[v].push_back(ii(u, w));
	}
	
	taken.assign(r+1, 0);
	process(1);
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
	return 0;
}
