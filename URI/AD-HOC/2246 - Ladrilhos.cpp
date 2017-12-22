// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ladrilhos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2246

#include <bits/stdc++.h>

using namespace std;

const int dir[][2] = {1, 0, -1, 0, 0, 1, 0, -1};

int h, l, v[201][201];
bool vis[201][201];

int dfs(int i, int j)
{
	int start = v[i][j], total = 1, cnt;
	vis[i][j] = 1;
	
	for (int d = 0; d < 4; d++)
	{
		int x = i + dir[d][0], y = j + dir[d][1];
		
		if (x == -1 or x == h or y == -1 or y == l or vis[x][y]) 
			continue;
		
		if (v[x][y] != start) 
			continue;
		else
			cnt = dfs(x, y);
		total += cnt;
	}

	return total;
}



int main()
{

	scanf("%d %d", &h, &l);

	for (int i = 0; i < h; i++)
		for (int j = 0; j < l; j++)
			scanf("%d", &v[i][j]);
	
	int ans = 1e9;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if (!vis[i][j])
				ans = min(ans, dfs(i, j));
		}
	}
	
	printf("%d\n", ans);
	return 0;
}
