// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Despertar da Força
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2163

#include <bits/stdc++.h>

using namespace std;

const int dir[][2] = {1,0,-1,0,0,1,0,-1,-1,-1,-1,1,1,-1,1,1};

int main()
{

	int n, m, ansx = 0, ansy = 0;
	scanf("%d %d", &n, &m);
	
	int v[1234][1234];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &v[i][j]);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int ans = 0;
			for (int k = 0; k < 8; k++)
			{
				int x = i + dir[k][0], y = j + dir[k][1];
				if (x >= 0 and x <= n and y >= 0 and y <= m and v[i][j] == 42 and v[x][y] == 7)
					ans++;
			}
			if (ans == 8)
			{
				ansx = i+1;
				ansy = j+1;	
			}
		}
	}
			
	printf("%d %d\n", ansx, ansy);	
	return 0;
}
