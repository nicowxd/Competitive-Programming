#include <bits/stdc++.h>

using namespace std;

#define MAXN 1010

int v[MAXN], sv[MAXN], memo[MAXN][MAXN];

int lcs(int a, int b)
{
	if (memo[a][b] != -1)
		return memo[a][b];
	if (a == 0 or b == 0)
		return memo[a][b] = 0;
	if (sv[a] == v[b])
		return 1 + lcs(a-1, b-1);
	return memo[a][b] = max(lcs(a-1, b), lcs(a, b-1));
}

int main()
{
	int n;
	scanf("%d", &n);

	memset(memo, -1, sizeof memo);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", v+i);
		sv[i] = v[i];
	}

	sort(sv+1, sv+n+1);

	printf("%d\n", lcs(n, n));
	return 0;
}
