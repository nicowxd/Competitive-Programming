// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: D como em Daedalus
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2016

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m, c[5] = {1, 10, 100, 1000, 10000};
	scanf("%d %d", &n, &m);
	

	int ans = 0;
	for (int i = 0; i < m; i++)
	{
		int orc, sum = 0, ini, x;
		scanf("%d", &orc);
		
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			if (i == 0)
				ini = x;
			sum += x;
		}
		
		int chos = 0;
		for (int i = 0; i < 5; i++)
		{
			if (orc - sum >= 0)
			{
				if (orc >= sum-ini + c[i] and c[i] > ini)
					chos = c[i]-ini;
			}
			else
			{
				if (orc >= sum-ini + c[i])
					chos = c[i];
			}
		}
		ans += chos;
	}

	printf("%d\n", ans);
	return 0;
}
