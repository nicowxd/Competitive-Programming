#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3005;

int dp[MAXN][MAXN];

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	string s, t;
	cin >> s >> t;
		
	int len_s = (int) s.size();
	int len_t = (int) t.size();
	
	memset(dp, 0, sizeof dp);

	for (int i = 1; i <= len_s; i++) {
		for (int j = 1; j <= len_t; j++) {
			if (s[i - 1] == t[j - 1])
				dp[i][j] = 1 + dp[i - 1][j - 1];
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	int i = len_s, j = len_t;
	string ans = "";

	while(i && j) {
		if (dp[i][j] == dp[i - 1][j])
			i--;
		else if (dp[i][j] == dp[i][j - 1])
			j--;
		else {
			ans += s[i - 1];
			i--, j--;
		}
	}
	
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
    return 0;
}
