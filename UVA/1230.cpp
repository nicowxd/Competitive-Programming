#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fastExp(ll base, ll exp, ll m)
{
    ll ans = 1LL;
    
    base = base % m;
    while(exp)
    {
        if (exp & 1)
             ans = (ans * base)% m;
        base = (base * base)%m;
        exp >>= 1;
    }
    return ans;
}


int main()
{

	int n;
	ll x, y, m;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%lld %lld %lld", &x, &y, &m);
		printf("%lld\n", fastExp(x, y, m));
	}

	scanf("%d", &n);
	return 0;
}
