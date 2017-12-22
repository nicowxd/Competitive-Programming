#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, ans = 0, h[33], g[33];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &h[i], &g[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (i != j && h[i] == g[j])
				ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
		
