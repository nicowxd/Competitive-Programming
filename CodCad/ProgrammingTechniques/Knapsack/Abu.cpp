#include <bits/stdc++.h>

using namespace std;

#define MAXN 2050

int p, n, v[MAXN][2], reachable[MAXN][MAXN];

int main()
{
	scanf("%d %d", &p, &n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", &v[i][0], &v[i][1]);

	for (int w = 0; w <= p; w++)
		if (w - v[0][0] >= 0)
			reachable[0][w] = v[0][1];
	
	for (int i = 1; i < n; i++)
	{
		for (int w = 0; w <= p; w++)
		{
				if (w - v[i][0] >= 0)
					reachable[i][w] = max(reachable[i-1][w], v[i][1] + reachable[i-1][w - v[i][0]]);
				else
					reachable[i][w] = reachable[i-1][w];
		}
	}
	
	printf("%d\n", reachable[n-1][p]);

	return 0;
}
