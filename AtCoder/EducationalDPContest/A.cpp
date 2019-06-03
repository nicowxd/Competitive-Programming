#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 5;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int N;
	cin >> N;

	vector<int> h(N);
	for (int i = 0; i < N; i++)
		cin >> h[i];
	
	vector<int> dp(N, INF);
	
	dp[0] = 0;

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j <= i + 2; j++) {
			if (j < N)
				dp[j] = min(dp[j], dp[i] + abs(h[j] - h[i]));
		}
	}

	cout << dp[N-1] << endl;
    return 0;
}

