// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Números Apaixornados
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2290

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

	int n;
	
	while(scanf("%d", &n) != EOF && n)
	{
		ll x;
		unordered_map<ll, ll> num;
		
		for (int i = 0; i < n; i++)
		{
			scanf("%lld", &x);
			num[x]++;
		}
		
		ll ans[2];
		int i = 0;

		for (auto it = num.begin(); it != num.end(); it++)
		{
			if ((it->second)&1)
				ans[i++] = it->first;
		}

		if (ans[0] <= ans[1])
			printf("%lld %lld\n", ans[0], ans[1]);
		else
			printf("%lld %lld\n", ans[1], ans[0]);
	}

	return 0;
}
