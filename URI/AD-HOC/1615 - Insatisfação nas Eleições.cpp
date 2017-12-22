// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Insatisfação nas Eleições
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1615

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);
	
	while(t--)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		
		int cand[n+1], pv = m/2, x, venc = -1;

		memset(cand, 0, sizeof cand);
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &x);
			cand[x]++;
			if (cand[x] > pv)
				venc = x;
		}
		
		printf("%d\n", venc);
	}
	return 0;
}
