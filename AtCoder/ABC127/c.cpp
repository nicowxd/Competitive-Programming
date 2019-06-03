#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	int l, r, mx_l = -1, mn_r = INT_MAX;
	for (int i = 0; i < m; i++) {
		cin >> l >> r;
		if (l > mx_l) mx_l = l;
		if (r < mn_r) mn_r = r;
	}
	if (mn_r - mx_l + 1 > 0)
		cout << mn_r - mx_l + 1 << endl;
    else
		cout << 0 << endl;
	return 0;
}
