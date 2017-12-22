#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
	return (b == 0 ? a : gcd(b, a%b));
}

int main()
{

	ll n, m;
	scanf("%lld %lld", &n, &m);

	for (ll i = m; i > 0; i--)
	{
		if (gcd(n, i) == 1)
		{
			printf("%lld\n", i);
			return 0;
		}
	}
	return 0;
}
