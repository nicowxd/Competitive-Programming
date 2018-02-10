#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);

	for (int j = 1; j <= t; j++)
	{
		int n;
		scanf("%d", &n);
		
		int ans = 0, best, act = 0;
		
		for (int i = 1, x; i <= n; i++)
		{
			scanf("%d", &x);
			if (i == 1)
			{
				act++;
				ans = 1;
				best = x;
				continue;
			}
			if (x > best)
			{
				act = 1;
				ans = 1;
				best = x;
			}
			else if (x == best)
			{
				act++;
				ans = max(ans, act);
			}
			else
			{
				act = 0;
				continue;
			}
		}

		printf("Caso #%d: %d\n", j, ans);
	}
	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
