#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	int ans = 1;
	for (int x : a) {
		if (x >= ans)
			ans++;
	}
	cout << ans - 1 << endl;
	return 0;
}
