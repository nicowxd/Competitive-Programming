#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n;
	cin >> n;
	vector<int> v(n), c(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 0; i < n; i++)
		cin >> c[i];
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] - c[i] > 0)
			ans += v[i] - c[i];
	}
	cout << ans << endl;
    return 0;
}
