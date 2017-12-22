// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jogatina UFPR
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2543

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, i;
	while(scanf("%d %d", &n, &i) != EOF)
	{
		int ans = 0, k, l;
		for (int j = 0; j < n; j++)
		{
			scanf("%d %d", &k, &l);
			if (k == i and l == 0)
				ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
