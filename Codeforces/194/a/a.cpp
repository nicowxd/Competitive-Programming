#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 5;
const int MAXN = 55;
const int MAXK = 255;

int dp[MAXN][MAXK];
int N, K;

int solve(int n, int k) {
	if (dp[n][k] != -1)
		return dp[n][k];
	
	if (n == N) {
		if (k == 0)
			return 0;
		else 	
			return INF;
	}
	
	int ans2 = 0, ans3 = 0, ans4 = 0, ans5 = 0;
	for (int i = 2; i <= 5; i++) {
		if (i == 2)
			ans2 += 1 + solve(n + 1, k - i);
		else if (i == 3)
			ans3 += solve(n + 1, k - i);
		else if (i == 4)
			ans4 += solve(n + 1, k - i);
		else
			ans5 += solve(n + 1, k - i);
	
	}

	return dp[n][k] = min(ans2, min(ans3, min(ans4, ans5)));
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	cin >> N >> K;

	memset(dp, -1, sizeof dp);

	int ans = solve(0, K);
	cout << ans << endl;
    return 0;
}
