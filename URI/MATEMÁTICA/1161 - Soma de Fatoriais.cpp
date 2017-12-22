// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Soma de Fatoriais
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1161

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fat (ll x)
{
	if (x == 0LL)
		return 1LL;
	return x * fat(x-1LL);
}

int main()
{


	ll n, m;

	while(scanf("%lld %lld", &n, &m) != EOF)
	{	
		printf("%lld\n", fat(n) + fat(m));
	}
	return 0;
}
