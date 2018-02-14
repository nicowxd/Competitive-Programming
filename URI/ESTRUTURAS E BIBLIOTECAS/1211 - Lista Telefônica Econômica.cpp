#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

int main()
{
	int n;
	string s[MAXN];

	while(cin >> n)
	{
		int ans = 0;

		for (int i = 0; i < n; i++)
			cin >> s[i];

		sort(s, s + n);
		
		for (int i = 1; i < n; i++)
		{
			int sz = (int) s[i].size();
			
			for (int j = 0; j < sz and s[i-1][j] == s[i][j]; j++)
				ans++;
		}
		cout << ans << endl;
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
