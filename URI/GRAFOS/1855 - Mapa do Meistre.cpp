// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Mapa do Meistre
// Nível: 2
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1855

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int r, c, nr, nc;
	char mapa[105][105];
	scanf("%d", &c);	
	scanf("%d", &r);
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			cin >> mapa[i][j];
	nr = nc = 0;
	char arr = mapa[0][0];	
	while(1)
	{
		if (arr == '>')
			nc++;
		else if (arr == '<')
			nc--;
		else if (arr == 'v')
			nr++;
		else
			nr--;
		
		if (nr < 0 || nc < 0 || nr >= r || nc >= c)
		{
			printf("!\n");
			break;
		}
		else
		{
			if (mapa[nr][nc] == '*')
			{
				printf("*\n");
				break;
			}
			else if (mapa[nr][nc] == '.')
				mapa[nr][nc] = 'p';
			else if (mapa[nr][nc] == 'p')
			{
				printf("!\n");
				break;
			}
			else
			{
				arr = mapa[nr][nc];
				mapa[nr][nc] = 'p';
			}
		}
	}
		
	return 0;
}
