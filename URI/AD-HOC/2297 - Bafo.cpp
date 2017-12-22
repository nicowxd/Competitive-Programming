// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bafo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2297

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c = 1;
	while(scanf("%d", &n), n)
	{
		printf("Teste %d\n", c++);
		int a = 0, b = 0, x, y;
		for (int i = 1; i <= n; i++)
		{
			scanf("%d %d", &x, &y);
			a += x;
			b += y;
		}
		if (a > b)
			printf("Aldo\n\n");
		else
			printf("Beto\n\n");
	}

	return 0;
}
