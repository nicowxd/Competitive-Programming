// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Brincando com Conjuntos
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2222

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);	
	
	while(t--)
	{
		int n, mi, q, op, x, y;
		scanf("%d", &n);
		
		unsigned long long int v[n], xij, res;	
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &mi);
			v[i] = 0ULL;
			for (int j = 0; j < mi; j++)
			{
				scanf("%llu", &xij);
				v[i] |= (1ULL << xij);
			}
		}
		
		scanf("%d", &q);
		for (int i = 0; i < q; i++)
		{
			int ans = 0;
			scanf("%d %d %d", &op, &x, &y);
			if (op == 1)
				res = v[x-1] & v[y-1];
			else
				res = v[x-1] | v[y-1];
			for (int j = 1; j <= 60; j++)
			{
				if (res & (1ULL << j))
					ans++;
			}
			printf("%d\n", ans);
		}
	}		
	return 0;
}
