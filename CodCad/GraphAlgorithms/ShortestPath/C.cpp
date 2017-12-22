#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<vii> AdjList;

int main()
{

	int n, m, c, k, u, v, w;
	while(scanf("%d %d %d %d", &n, &m, &c, &k), (n or m or c or k))
	{
		AdjList.assign(n, vii());
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d %d", &u, &v, &w);
			if (u < c and v < c)
			{
				if (abs(u-v) == 1)
				{
					if (u < v)
						AdjList[u].push_back(ii(v, w));
					else
						AdjList[v].push_back(ii(u, w));
				}
				else
					continue;
			}
			else if (u < c and v >= c)
				AdjList[v].push_back(ii(u, w));
			else if (u >= c and v < c)
				AdjList[u].push_back(ii(v, w));
			else
			{
				AdjList[u].push_back(ii(v, w));
				AdjList[v].push_back(ii(u, w));
			}
		}
		vi dist(n, INF); dist[k] = 0;
		priority_queue< ii, vector<ii>, greater<ii> > pq; pq.push(ii(0, k));

		while(!pq.empty())
		{
			ii front = pq.top(); pq.pop();
			int d = front.first, u = front.second;
			if (d > dist[u]) continue;

			for (int i = 0; i < (int) AdjList[u].size(); i++)
			{
				ii v = AdjList[u][i];
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
