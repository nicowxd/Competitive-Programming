// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: PãodeQuejoSweeper
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2552

#include <bits/stdc++.h>

using namespace std;

const int dir[][2] = {1,0,-1,0,0,1,0,-1};

int main()
{

	int n, m;
	while(scanf("%d %d", &n, &m) != EOF)
	{
		int v[n][m];
	
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &v[i][j]);
		
		int c = 1;
		for (int i = 0; i < n; i++)
		{
			if (c > 1)
				printf("\n");
			c++;
			for (int j = 0; j < m; j++)
			{
				if (v[i][j] == 1)
					printf("9");
				else
				{
					int ans = 0;
					for (int d = 0; d < 4; d++)
					{
						int x = i + dir[d][0], y = j + dir[d][1];
						if (x == -1 or x == n or y == -1 or y == m) continue;
						if (v[x][y] == 0) continue;
						ans++;
					}
					printf("%d", ans);
				}
			}
		}
		printf("\n");
	}	
		
	return 0;
}
