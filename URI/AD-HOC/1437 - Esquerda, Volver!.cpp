// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Esquerda, Volver!
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1437

#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int x, y;
	string cmd;
	while(scanf("%d", &x) && x)
	{
		y = 0;
		cin >> cmd;
		for (int i = 0; i < x; i++)
		{
			if (cmd[i] == 'D')
			{
				y = (y + 1)%4;
			}
			else
			{
				y--;
				if (y < 0)
				{
					y+=4;
				}
			}
		}

		if (y == 0)
		{
			printf("N\n");
		}
		else if (y == 1)
		{
			printf("L\n");
		}
		else if (y == 2)
		{
			printf("S\n");
		}
		else
		{
			printf("O\n");
		}
	}
	return 0;
}

