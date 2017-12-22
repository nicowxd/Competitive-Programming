// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Luzes de Natal
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2718

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);

	while(n--)
	{
		long long x;
		scanf("%lld", &x);
	
		int ans = 0;
		
		for (int i = 0; i <= 49; i++)
		{
			int j = i;
			while (x & (1LL << j))
				j++;
			ans = max(ans, j-i);
		}
		
		printf("%d\n", ans);
	}

	return 0;
}
