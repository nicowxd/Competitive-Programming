#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MOD = 1e9 + 7;

ll fastExp (ll base, int exp)
{
	ll ans = 1LL;

	while(exp)
	{
		if (exp&1)
			ans = (ans * base) % MOD;
		base = (base * base) % MOD;
		exp >>= 1;
	}

	return ans;
}
	
int main()
{
	char s[1010];

	while(scanf("%s", s) != EOF)
	{
		int len = strlen(s);
		ll ans = 0LL;
		
		for (int i = len-1; i >= 0; i--)
			ans += (s[i] - 'A')*fastExp(26, (len-1)-i);
		ans %= MOD;
		printf("%lld\n", ans);
	}


	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
