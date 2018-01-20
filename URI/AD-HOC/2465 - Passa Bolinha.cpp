#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};

int main()
{

	int n, x, y, mat[110][110], vis[110][110] = {0};

	scanf("%d", &n);
	scanf("%d %d", &x, &y);
	x--; y--;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	
	int ans = 1;
	queue<ii> q; q.push(ii(x, y));
	vis[x][y] = 1;

	while(!q.empty())
	{
		ii p = q.front(); q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			int u = p.first + dx[i];
			int v = p.second + dy[i];
		
			if (u < 0 or u >= n or v < 0 or v >= n)
				continue;
			if (mat[p.first][p.second] <= mat[u][v] and !vis[u][v])
			{
				ans++;
				q.push(ii(u, v));
				vis[u][v] = 1;
			}
		}
	}

	printf("%d\n", ans);
	
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
