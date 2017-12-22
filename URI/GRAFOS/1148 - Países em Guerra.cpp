// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Países em Guerra
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1148

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1e9

int n, e;
vector<vii> AdjList;

int djikstra(int u, int v)
{
	vi dist(n, INF); 
	dist[u] = 0;

	priority_queue< ii, vector<ii>, greater<ii> > pq; 
	pq.push(ii(0, u));
	
	while(!pq.empty())
	{
		ii front = pq.top();
		pq.pop();

		int d = front.first, k = front.second;
		if (d > dist[k])
			continue;
		
		for (int i = 0; i < (int) AdjList[k].size(); i++)
		{
			ii m = AdjList[k][i];
			if (dist[k] + m.second < dist[m.first])
			{
				dist[m.first] = dist[k] + m.second;
				pq.push(ii(dist[m.first], m.first));
			}
		}
	}
	
	return dist[v];
}
	

int main()
{

	int x, y, w, q;
	while(scanf("%d %d", &n, &e), (n or e))
	{
		
		AdjList.assign(n, vii());
		for (int i = 0; i < e; i++)
		{
			bool has = false;
			scanf("%d %d %d", &x, &y, &w);
			AdjList[x-1].push_back(ii(y-1,w));
			for (int j = 0; j < (int) AdjList[y-1].size() and !has; j++)
			{
				if (AdjList[y-1][j].first == x-1)
				{
					AdjList[y-1][j].second = 0;
					has = true;
				}
			}
			if (has)
			{
				for (int j = 0; j < (int) AdjList[x-1].size(); j++)
				{
					if (AdjList[x-1][j].first == y-1)
						AdjList[x-1][j].second = 0;
				}
			}
		}
		
		scanf("%d", &q);
		for (int i = 0; i < q; i++)
		{
			scanf("%d %d", &x, &y);
			if (djikstra(x-1, y-1) == INF)
				printf("Nao e possivel entregar a carta\n");
			else
				printf("%d\n", djikstra(x-1,y-1));
		}
		printf("\n");
	}
	return 0;
}
