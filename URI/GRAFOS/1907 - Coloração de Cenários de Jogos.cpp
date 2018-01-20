#include <bits/stdc++.h>

using namespace std;

#define MAXN 1030

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

int n, m;
char mat[MAXN][MAXN];

void dfs (int i, int j)
{
	mat[i][j] = 'o';
	
	for (int k = 0; k < 4; k++)
	{
		int x = i + dx[k];
		int y = j + dy[k];

		if (x < 0 or x >= n or y < 0 or y >= m or mat[x][y] == 'o')
			continue;
		dfs(x, y);
	}
}

int main()
{

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%s", mat[i]);
	
	int ans = 0;

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++) 
		{
			if (mat[i][j] == '.') 
			{
				ans++;
				dfs(i, j);
			}
		}
	}
	
	printf("%d\n", ans);

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
