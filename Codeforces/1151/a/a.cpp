#include <bits/stdc++.h>

using namespace std;

const int INF = (int) 1e9 + 10;

const int gen[4] = {0, 2, 19, 6};
string s;

int qty_op(int idx)
{
	int ans = 0;

	for (int i = 0; i < 4; i++) {
		int letter = s[idx + i] - 'A';
		int op = min((letter - gen[i] + 26) % 26, (gen[i] - letter + 26) % 26);
		ans += op;
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int n, cur, ans = INF;

	cin >> n;
	cin >> s;

	for (int i = 0; i < n - 3; i++) {
		cur = qty_op(i);
		if (cur < ans) ans = cur;
	}

	cout << ans << endl;
    return 0;
}
