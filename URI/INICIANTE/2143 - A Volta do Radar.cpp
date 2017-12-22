// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: A Volta do Radar
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2143

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	while(scanf("%d", &t), t)
	{
		int x;
		for (int i = 0; i < t; i++)
		{
			scanf("%d", &x);
			if (x & 1)
				printf("%d\n", 2*(x-1) + 1);
			else
				printf("%d\n", 2*(x-2) + 2);
		}
	}	
	return 0;
}
