#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bitset<13000000> bs;
vector<ll> primes;

void sieve(int n)
{
	bs.set();
	bs[0] = bs[1] = 0;

	for (ll i = 2; i <= n; i++)
	{
		if (bs[i])
		{
			for (ll j = i*i; j <= n; j+=i)
				bs[j] = 0;
			primes.push_back(i);
		}
	}
}

int main()
{
	sieve(12500000);
	ll n;
	scanf("%lld", &n);
	printf("%lld\n", primes[n-1LL]);
	return 0;
}
