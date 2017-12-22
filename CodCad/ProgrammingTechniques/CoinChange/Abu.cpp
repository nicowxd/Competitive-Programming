#include <bits/stdc++.h>

using namespace std;

#define MAXN 1010
#define INF 1e9

int main()
{

	int n, w, v[MAXN], tb[MAXN];
	scanf("%d %d", &n, &w);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);
	
	for (int i = 0; i < MAXN; i++)
		tb[i] = INF;
	tb[0] = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			if (j - v[i] >= 0)
				tb[j] = min(tb[j], 1+tb[j-v[i]]);
		}
	}

	if (tb[w] == INF)
		printf("N\n");
	else
		printf("S\n");
	return 0;
}
