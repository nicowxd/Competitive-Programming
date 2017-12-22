// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Escada Rolante
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1793

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, val[110];
	while(scanf("%d", &n), n)
	{
		int t = 10;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &val[i]);
			if (i > 0)
			{
				if (val[i] - val[i-1] >= 10)
					t+= 10;
				else
					t+= val[i] - val[i-1];
			}
		}
		printf("%d\n", t);
	}
	return 0;
}
		
