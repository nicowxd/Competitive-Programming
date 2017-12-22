#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool itsPrime(ll n)
{
	for (ll i = 2LL; i*i <= n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{

	ll n;
	scanf("%lld", &n);

	if (itsPrime(n))
		printf("N\n");
	else
		printf("S\n");
	return 0;
}
