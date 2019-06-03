#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int n;
	cin >> n;


	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		vector<int> v(100, 0);
		int mn = 300;
		bool ok = true;
		for (int j = 0; j < (int) s.size(); j++) {
			int ascii = s[j] - 'a';
			v[ascii] = 1;
			mn = min(mn, ascii);
		}

		for (int j = mn; ok && j < mn + (int) s.size(); j++) {
			if (v[j] != 1)
				ok = false;
		}

		if (ok)
			cout << "Yes" << '\n';
		else
			cout << "No" << '\n';
	}

    return 0;
}
