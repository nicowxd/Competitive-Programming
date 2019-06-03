#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 1e5 + 5;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	ll n;
	cin >> n;

	set<ll> st;
	for (ll i = 1; i <= MAXN; i++)
		st.insert((i*i + i) / 2);
    for (ll x : st) {
		if (st.find(n - x) != st.end()) {
			cout << "YES" << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;
	return 0;
}
