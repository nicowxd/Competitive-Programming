// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Detetive Watson
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1533

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, val[1010], max, id;
	while(scanf("%d", &n), n)
	{
		max = 0;
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &val[i]);
			if (val[i] > max)
			{
				max = val[i];
				id = i;
			}
		}
		val[id] = 0;
		max = 0;
		for (int i = 1; i <= n; i++)
		{
			if (val[i] > max)
			{
				max = val[i];
				id = i;
			}
		}
		printf("%d\n", id);
	}
	return 0;
}


