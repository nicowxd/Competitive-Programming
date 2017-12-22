// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Escala de Cinza
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2630

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d%*c", &t);

	for (int i = 1; i <= t; i++)
	{
		int x, ans;
		string op;
		cin >> op;
		
		if (op == "min")
		{
			ans = 1e9;
			for (int j = 0; j < 3; j++)
			{
				scanf("%d", &x);
				ans = min(ans, x);
			}
		}
		else if (op == "max")
		{
			ans = 0;
			for (int j = 0; j < 3; j++)
			{
				scanf("%d", &x);
				ans = max(ans, x);
			}
		}
		else if (op == "mean")
		{
			ans = 0;
			for (int j = 0; j < 3; j++)
			{
				scanf("%d", &x);
				ans += x;
			}
			ans/=3;
		}
		else
		{
			int r, g, b;
			scanf("%d %d %d", &r, &g, &b);
			ans = 0.3*r + 0.59*g + 0.11*b;
		}

		printf("Caso #%d: %d\n", i, ans);
	}
	return 0;
}
