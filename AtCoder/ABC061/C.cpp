#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	ll n, k;
	cin >> n >> k;

	ll a, b;
	map<ll, ll> freq;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		freq[a] += b;
	}
	
	for (auto it : freq) {
		k -= it.second;
		if (k <= 0) {
			cout << it.first << endl;
			break;
		}
	}

    return 0;
}
