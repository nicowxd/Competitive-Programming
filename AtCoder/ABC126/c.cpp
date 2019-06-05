#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n, k;
	cin >> n >> k;
	double ans = 0.0;
	for (int i = 1; i <= n; i++) {
		double cnt = 1.0;
		for (int j = i; j < k; j *= 2)
			cnt *= 0.5;
		ans += (1.0/n) * cnt;
	}
	cout.precision(10);
	cout << ans << endl;
    return 0;
}
