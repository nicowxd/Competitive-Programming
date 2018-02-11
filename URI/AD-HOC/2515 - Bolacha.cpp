#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5 + 10;

int main()
{

	int n, v[MAXN];

	while(scanf("%d", &n) != EOF)
	{
		int sum = 0;

		for (int i = 0, x; i < n; i++)
		{
			scanf("%d", v + i);
			sum += v[i];
		}
		
		int acc = 0, ans = 0;
		for (int i = 0; i < n; i++)
		{
			acc += v[i];
			ans = max(ans, min(acc, sum - acc));
		}

		printf("%d %d\n", ans, sum - ans);
	}

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
