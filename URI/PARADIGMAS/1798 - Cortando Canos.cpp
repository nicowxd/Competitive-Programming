#include <bits/stdc++.h>

using namespace std;

int v[1010], w[1010], ans[2010];

int main()
{

	int n, t;
	scanf("%d %d", &n, &t);

	for (int i = 1; i <= n; i++)
		scanf("%d %d", w+i, v+i);
	
	memset(ans, 0, sizeof ans);

	for (int i = 1; i <= n; i++)
		for (int j = w[i]; j <= t; j++)
			ans[j] = max(ans[j], v[i] + ans[j-w[i]]);

	printf("%d\n", ans[t]);

	cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
	return 0;
}
