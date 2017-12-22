// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Robô Colecionador
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1121

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main()
{

	int n, m, s, tmpr, tmpc;
	char robo[105][105], face;
	string op;
	while(scanf("%d %d %d", &n, &m, &s), n || m || s)
	{
		int r, c, ans = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				cin >> robo[i][j];
				if (robo[i][j] == 'N' || robo[i][j] == 'S' || robo[i][j] == 'L' || robo[i][j] == 'O')
				{
					r = i;
					c = j;
					face = robo[i][j];
				}
			}
		
		cin >> op;
		for (int i = 0; i < s; i++)
		{
			if (op[i] == 'D')
			{
				if (face == 'N')
					face = 'L';
				else if (face == 'S')
					face = 'O';
				else if (face == 'L')
					face = 'S';
				else
					face = 'N';
			}
			else if (op[i] == 'E')
			{
				if (face == 'N')
					face = 'O';
				else if (face == 'S')
					face = 'L';
				else if (face == 'L')
					face = 'N';
				else
					face = 'S';
			}
			else
			{
				tmpr = r, tmpc = c;
				if (face == 'N')
					tmpr = r - 1;
				else if (face == 'S')
					tmpr = r + 1;
				else if (face == 'L')
					tmpc = c + 1;
				else
					tmpc = c - 1;
				
				if (tmpr >= 0 && tmpc >= 0 && tmpr < n && tmpc < m)
				{
					if (robo[tmpr][tmpc] != '#')
					{
						if (robo[tmpr][tmpc] == '*')
						{
							robo[tmpr][tmpc] = '.';
							ans++;
						}
						r = tmpr, c = tmpc;
					}
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
