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
	string cons = "";
	for (int i = 0; i <= x; i++) {
		if (i == y || i == x)
			cons += '1';
		else 
			cons += '0';
	}
	int ans = 0;
	for (int i = 0; i < x; i++) {
		ans += (s[i] != cons[i]);
	}
	cout << ans << endl;
    return 0;
}
