// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Handebol
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1715

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, ans = 0, sum, gol;
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &gol);
			if (gol > 0)
				sum++;
		}
		if (sum == m)
			ans++;
	}
	printf("%d\n", ans);
	return 0;
}	
	
	
