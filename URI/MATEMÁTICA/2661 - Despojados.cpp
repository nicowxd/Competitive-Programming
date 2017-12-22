// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Despojados
// Nível: 5
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2661

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bitset<1000010> bs;
vector<int> primes;

void sieve(ll n)
{
	bs.set();
	bs[0] = bs[1] = 0;

	for (ll i = 2; i <= n; i++)
	{
		if (bs[i])
		{
			for (ll j = i*i; j <= n; j += i)
				bs[j] = 0;
			primes.push_back((int)i);
		}
	}
}

ll numDiffPF(ll n)
{
	if (n == 1 or n == 2)
		return 1LL;
	int tam = (int) primes.size();
	ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
	while (PF * PF <= n)
	{
		if (n % PF == 0)
			ans++;
		while(n % PF == 0)
			n /= PF;
		if (PF_idx == tam - 1)
			break;
		else
			PF = primes[++PF_idx];
	}
	if (n != 1)
		ans++;
	return ans;
}

int main()
{

	ll n;
	scanf("%lld", &n);
	
	ll k = sqrt(n);
	sieve(k);
	
	ll t = numDiffPF(n);
	if (t <= 1)
		puts("0");
	else
	{
		ll ans = 1LL;
		for (int i = 0; i < t; i++)
			ans *= 2LL;
		printf("%lld\n", ans - numDiffPF(n) - 1LL);
	}
	return 0;
}
