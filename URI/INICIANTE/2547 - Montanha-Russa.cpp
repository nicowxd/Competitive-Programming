// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Montanha-Russa
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2547

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, amin, amax;
	while(scanf("%d %d %d", &n, &amin, &amax) != EOF)
	{
		int x, ans = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			if (x >= amin and x <= amax)
				ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
