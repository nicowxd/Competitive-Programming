#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		ll n, mn = LONG_MAX, mx = 0LL;
		cin >> n;
		vector<ll> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		ll target = v[0] * v[n - 1];
		vector<ll> factors;
		for (ll i = 2; i <= sqrt(target); i++) {
			if (target % i == 0) {
				factors.push_back(i);
				if (i != target / i)
					factors.push_back(target / i);
			}
		}
		sort(factors.begin(), factors.end());
		bool ok = true;
		for (int i = 0; i < n && ok; i++) {
			if (v[i] != factors[i])
				ok = false;
		}
		if (ok)
			cout << target << endl;
		else
			cout << -1 << endl;
	}
    return 0;
}
