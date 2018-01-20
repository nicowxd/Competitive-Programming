#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f
#define MAXN 55

int v[MAXN], memo[MAXN][MAXN];

int minCut (int l, int r)
{
	if (l + 1 == r)
		return 0;
	if (memo[l][r] != -1)
		return memo[l][r];
	int ans = INF;

	for (int i = l+1; i < r; i++)
		ans = min(ans, minCut(i, r) + minCut(l, i) + (v[r] - v[l]));
	
	return memo[l][r] = ans;
}
int main()
{

	int l;

	while(scanf("%d", &l), l)
	{
		int n;
		scanf("%d", &n);
		v[0] = 0;

		for (int i = 1; i <= n; i++)
			scanf("%d", v+i);
		
		v[++n] = l;
		
		memset(memo, -1, sizeof memo);
		printf("The minimum cutting is %d.\n", minCut(0, n));
	}
	
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
