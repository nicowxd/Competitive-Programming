#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> del(n);
	int cnt = 0;
	for (int i = 1; i < n;) {
		if (s[i] == s[i-1]) {
			del[i] = 1;
			cnt++;
			i++;
		}
		else
			i+=2;
	}
	if ((n - cnt) % 2 == 0) {
		cout << cnt << endl;
		for (int i = 0; i < n; i++)
			if (del[i] == 0)
				cout << s[i];
		cout << endl;
	} else {
		cout << cnt + 1 << endl;
		string ans = "";
		for (int i = 0; i < n; i++) {
			if (del[i] == 0)
				ans += s[i];
		}
		ans.pop_back();
		cout << ans << endl;
	}
    return 0;
}
