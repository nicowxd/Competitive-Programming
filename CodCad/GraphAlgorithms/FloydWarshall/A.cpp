#include <cstdio>
#include <algorithm>

using namespace std;

#define INF 1e9

int main()
{

	int n, m, u, v, w, dist[101][101];
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			dist[i][j] = INF;
		dist[i][i] = 0;
	}

	for (int i = 0; i < m; i++)
	{
		scanf("%d %d %d", &u, &v, &w);
		dist[u][v] = w;
		dist[v][u] = w;
	}

	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
	
	int minDist, ans = 1e9;
	for (int i = 0; i < n; i++)
	{
		int minDist = 0;
		for (int j = 0; j < n; j++)
			minDist = max(dist[i][j], minDist);
		ans = min(ans, minDist);
	}

	printf("%d\n", ans);
	return 0;
}
