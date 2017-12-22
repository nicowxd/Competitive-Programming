// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jogo de Varetas
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1366

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	while(scanf("%d", &n), n)
	{
		int ans = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%*d %d", &k);	
		 	ans+= k/2;
		}
		ans/=2;
		printf("%d\n", ans);
	}
	return 0;
}
