#include <bits/stdc++.h>

using namespace std;

#define MAXN 2010

typedef pair<int, int> ii;

int sp[MAXN];
ii memo[MAXN][MAXN];
char s[MAXN];

ii operator +(const ii a, const ii b)
{
	return ii(a.first + b.first, a.second + b.second);
}

ii max(ii a, ii b)
{
	if (a.first != b.first)
		return a.first > b.first ? a : b;
	return a.second > b.second ? a : b;
}

ii solve(int l, int r)
{
	if (l == r)
		return memo[l][r] = ii(sp[l], 1);
	if (l + 1 == r)
		return memo[l][r] = s[l] == s[r] ? ii(sp[l] + sp[r], 2) : ii(sp[l] or sp[r], 1);
	if (memo[l][r] != ii(-1, -1))
		return memo[l][r];
	
	if (s[l] == s[r])
		return memo[l][r] =  max(ii(sp[l] + sp[r], 2) + solve(l+1, r-1), max(solve(l+1, r), solve(l, r-1)));
	return memo[l][r] = max(solve(l+1, r), solve(l, r-1));
}

int main()
{

	int n, len;
	scanf("%s", s);
	scanf("%d", &n);
	
	len = strlen(s);
	while(n--)
	{
		int foo;
		scanf("%d", &foo);
		sp[--foo] = 1;
	}
	
	for (int i = 0; i < len; i++)
		for (int j = 0; j < len; j++)
			memo[i][j] = ii(-1, -1);
	
	printf("%d\n", solve(0, len-1).second);

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
