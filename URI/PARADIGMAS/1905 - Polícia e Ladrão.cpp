#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

int mat[5][5];

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool bfs (int x, int y)
{
	queue<ii> q; q.push(ii(x, y));

	while(!q.empty())
	{
		ii p = q.front(); q.pop();
		mat[p.first][p.second] = 1;

		for (int i = 0; i < 4; i++)
		{
			int u = p.first + dx[i];
			int v = p.second + dy[i];
			
			if (u < 0 or u >= 5 or v < 0 or v >= 5 or mat[u][v] == 1)
				continue;
			if (u == 4 and v == 4)
				return true;
			else
				q.push(ii(u, v));
		}
	}

	return false;
}

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n = 5;
		
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &mat[i][j]);
		if (bfs(0, 0))
			puts("COPS");
		else
			puts("ROBBERS");
	}



	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
