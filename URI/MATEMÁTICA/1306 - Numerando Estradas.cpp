// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Numerando Estradas
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1306

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, r, caso = 1;
	
	while(scanf("%d %d", &n, &r), (n or r))
	{
		
		if (r + 26*r < n)
			printf("Case %d: impossible\n", caso++);
		else
		{
			if (n <= r)
				printf("Case %d: 0\n", caso++);
			else
			{
				int k = (n - r);
				if (k % r)
					printf("Case %d: %d\n", caso++, (k/r)+1);
				else
					printf("Case %d: %d\n", caso++, k/r);
			}
		}
	}

	return 0;
}
