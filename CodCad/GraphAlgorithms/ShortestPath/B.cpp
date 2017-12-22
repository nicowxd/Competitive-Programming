#include <bits/stdc++.h>

using namespace std;

#define INF 1e9
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<vii> AdjList;

int main()
{

	int n, m, u, v, b;
	scanf("%d %d", &n, &m);

	AdjList.assign(n+2, vii());
	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %d", &u, &v, &b);
		AdjList[u].push_back(ii(v, b));
		AdjList[v].push_back(ii(u, b));
	}
	
	vi dist(n+2, INF); dist[0] = 0;

	priority_queue< ii, vector<ii>, greater<ii> > pq; pq.push(ii(0, 0));
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

	printf("%d\n", dist[n+1]);
	return 0;
}
