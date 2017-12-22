#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
	return (b == 0 ? a : gcd(b, a%b));
}

ll lcm(ll a, ll b)
{
	return a * (b/gcd(a, b));
}

int main()
{

	ll a, b, c, d;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

	ll den = lcm(b,d);
	ll num = (den/b)*a + (den/d)*c;
	ll ans = gcd(num, den);

	printf("%lld %lld\n", num/ans, den/ans);

	return 0;
}
