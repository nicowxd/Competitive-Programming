#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(0);

	int N;
	cin >> N;

	vector<int> dp(3);

	for (int i = 0; i < N; i++) {
		vector<int> new_dp(3, 0);
		vector<int> c(3);
		for (int j = 0; j < 3; j++)
			cin >> c[j];
		
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (j != k)
					new_dp[k] = max(new_dp[k], dp[j] + c[k]);
			}
		}
		dp = new_dp;
	}

    cout << max({dp[0], dp[1], dp[2]}) << endl;
	
	return 0;
}
