// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Distância Hamming
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2289

#include <bits/stdc++.h>

using namespace std;

int main()
{

	unsigned long long int x, y;

	while(scanf("%llu %llu", &x, &y) and (x or y))
	{	
		int ans = 0;

		for (int i = 0; i <= 63; i++)
		{
			if ((x & (1LLU << i)) != (y & (1LLU << i)))
				ans++;
		}

		printf("%d\n", ans);
	}

	return 0;
}
