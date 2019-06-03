#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n, x, y;
	cin >> n >> x >> y;
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	int ans = 0;
	for (int i = 0; i < x; i++) {
		if (i == y)
			ans += (s[i] == '0');
		else
			ans += (s[i] == '1');
	}
	cout << ans << endl;
    return 0;
}
