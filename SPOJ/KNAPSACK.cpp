#include <bits/stdc++.h>

using namespace std;

#define MAXN 2010

int w[MAXN], v[MAXN], dp[2][MAXN];

int main()
{

	int wt, n;

	scanf("%d %d", &wt, &n);
	
	for (int i = 1; i <= n; i++)
		scanf("%d %d", w+i, v+i);
	
	memset(dp, 0, sizeof dp);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= wt; j++)
		{
			dp[i&1][j] = dp[~i&1][j];
			if (w[i] <= j)
				dp[i&1][j] = max(dp[~i&1][j], v[i] + dp[~i&1][j-w[i]]);
		}
	}

	printf("%d\n", dp[n&1][wt]);


	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
