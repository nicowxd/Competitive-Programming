#include <bits/stdc++.h>

using namespace std;

#define MAXN 1010

int s1[MAXN], s2[MAXN], memo[MAXN][MAXN];

int lcs(int a, int b)
{
	if (memo[a][b] != -1)
		return memo[a][b];
	
	if (a == 0 or b == 0)
		return memo[a][b] = 0;
	
	if (s1[a] == s2[b])
		return 1+lcs(a-1, b-1);
	
	return memo[a][b] = max(lcs(a-1, b), lcs(a, b-1));
}

int main()
{
	
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		scanf("%d", s1+i);
	
	for (int i = 1; i <= m; i++)
		scanf("%d", s2+i);
	
	memset(memo, -1, sizeof memo);
	int ans = lcs(n, m);

	printf("%d %d\n", n-ans, m-ans);
	return 0;
}
