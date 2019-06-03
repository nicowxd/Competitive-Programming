#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAXN = 102;
const int MAXW = 1e5 + 10;

ll dp[MAXN][MAXW];

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);
	
	int N, W;
	cin >> N >> W;
	
	vector<int> w(N + 1), v(N + 1);
	for (int i = 1; i <= N; i++)
		cin >> w[i] >> v[i];
	
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= W; j++) {
			dp[i][j] = dp[i-1][j];
			if (j >= w[i])
				dp[i][j] = max(dp[i][j], v[i] + dp[i - 1][j - w[i]]);
		}
	}

	cout << dp[N][W] << endl;
		
    return 0;
}
