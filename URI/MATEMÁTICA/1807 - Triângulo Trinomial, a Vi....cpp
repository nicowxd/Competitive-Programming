// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Triângulo Trinomial, a Vi...
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1807

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MOD 2147483647

ll fastExp(ll base, ll exp, ll m)
{
	ll ans = 1LL;

	base = base % m;
	while(exp)
	{
		if (exp & 1)
			ans = (ans * base) % m;
		base = (base * base) % m;
		exp >>= 1LL;
	}

	return ans % m;
}

int main()
{

	ll r;
	scanf("%lld", &r);

	printf("%lld\n", fastExp(3, r, MOD));
	return 0;
}
