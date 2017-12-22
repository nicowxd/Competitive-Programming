// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Divisão da Nlogônia
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1091

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	while(scanf("%d", &k), k)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		int x, y;
		for (int i = 0; i < k; i++)
		{
			scanf("%d %d", &x, &y);
			if (x == n || y == m)
				printf("divisa\n");
			else if (x > n && y > m)
				printf("NE\n");
			else if (x > n && y < m)
				printf("SE\n");
			else if (x < n && y > m)
				printf("NO\n");
			else
				printf("SO\n");
		}
	}
	return 0;
}
