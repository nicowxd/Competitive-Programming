#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MOD = 998244353;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	sort(b.rbegin(), b.rend());
	vector<ll> c(n);
	for (int i = 0; i < n; i++)
		c[i] = 1LL*a[i] * (i + 1) * (n - i);
	sort(c.begin(), c.end());
	ll ans = 0;
	for (int i = 0; i < n; i++)
		ans = (ans + (c[i] % MOD * 1LL * b[i])% MOD) % MOD;
	cout << ans << endl;
	return 0;
}
