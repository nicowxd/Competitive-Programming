// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Desvio de Rota
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1123

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define INF 1e9

int main()
{
	int n, m, c, k;
	vector<vii> AdjList;
	
	while(scanf("%d %d %d %d", &n, &m, &c, &k), n || m || c || k)
	{
	
		AdjList.assign(n, vii());
		for (int i = 0; i < m; i++)
		{

			int u, v, p;
			scanf("%d %d %d", &u, &v, &p);
		
			if (u >= c && v >= c)
			{
				AdjList[u].push_back(ii(v, p));
				AdjList[v].push_back(ii(u, p));
			}
		
			if (u >= c && v < c)
			{
				AdjList[u].push_back(ii(v, p));
			}
	
			if (u < c && v >= c)
			{
				AdjList[v].push_back(ii(u, p));
			}

			if ((u < c && v < c) && abs(u-v) == 1)
			{
				AdjList[u].push_back(ii(v, p));
				AdjList[v].push_back(ii(u, p));
			}
		}
	
		vi dist(n, INF); dist[k] = 0;
  		priority_queue< ii, vector<ii>, greater<ii> > pq; pq.push(ii(0, k));

       		while (!pq.empty()) 
		{
			ii front = pq.top(); pq.pop(); 
			int d = front.first, u = front.second;

    			if (d > dist[u]) continue; 
    			for (int j = 0; j < (int)AdjList[u].size(); j++) 
			{
				ii v = AdjList[u][j];  
				if (dist[u] + v.second < dist[v.first]) 
				{
					dist[v.first] = dist[u] + v.second;    
		 			pq.push(ii(dist[v.first], v.first));
				}
		 	} 
		}
		printf("%d\n", dist[c-1]);
	}
	return 0;
}
		
