#include <bits/stdc++.h>

using namespace std;

#define MAXN 1010

int s1[MAXN], s2[MAXN], tb[MAXN][MAXN];

int main()
{

	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++)
		scanf("%d", s1+i);
	for (int i = 1; i <= m; i++)
		scanf("%d", s2+i);

	for (int i = 0; i <= n; i++)
		tb[i][0] = 0;
	for (int i = 0; i <= m; i++)
		tb[0][i] = 0;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (s1[i] == s2[j])
				tb[i][j] = 1 + tb[i-1][j-1];
			else
				tb[i][j] = max(tb[i-1][j], tb[i][j-1]);
		}
	}

	printf("%d %d\n", n-tb[n][m], m-tb[n][m]);
	return 0;
}
