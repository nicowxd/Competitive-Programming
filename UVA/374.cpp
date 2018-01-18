#include <bits/stdc++.h>

using namespace std;

int fastExp(int base, int exp, int mod)
{
	int ans = 1;
	base = base % mod;

	while(exp)
	{
		if (exp&1)
			ans = (ans*base)%mod;
		base = (base*base) % mod;
		exp >>= 1;
	}

	return ans;
}

int main()
{
	int b, p, m;
	
	while(scanf("%d", &b) != EOF)
	{
		scanf("%d", &p);
		scanf("%d", &m);

		printf("%d\n", fastExp(b, p, m));
	}

	return 0;
}
