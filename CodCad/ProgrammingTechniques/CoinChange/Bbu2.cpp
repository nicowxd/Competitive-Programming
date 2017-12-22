#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1010;

int main()
{

	int n, m, v[MAXN], tb[MAXN][MAXN];
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);

	memset(tb, 0, sizeof tb);

	for (int j = 0; j <= m; j++)
	{
		if (j >= v[0])
			tb[0][j] = 1 + tb[0][j-v[0]];
	}
	
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (j >= v[i])
				tb[i][j] = min(tb[i-1][j], 1 + tb[i][j-v[i]]);
			else
				tb[i][j] = tb[i-1][j];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= m; j++)
			printf("%d ", tb[i][j]);
		printf("\n");
	}
	if (tb[n-1][m] < 10)
		puts("S");
	else
		puts("N");
	return 0;
}
