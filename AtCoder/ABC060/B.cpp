#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	ll a, b, c;
	cin >> a >> b >> c;
	
	ll x = c % b;
	for (int i = 1; i <= 1000000; i++) {
		if ((a * i % b) == x) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;

    return 0;
}
