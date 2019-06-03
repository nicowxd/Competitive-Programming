#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int N, T, t;
	cin >> N >> T;
	cin >> t;
	
	ll ans = T, end = T;

	for (int i = 1; i < N; i++) {
		cin >> t;
		if (t <= end) {
			ans = ans + T - (end - t);
		}
		else
			ans += T;
		end = t + T;
	}

	cout << ans << endl;
    return 0;
}
