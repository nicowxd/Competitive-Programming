#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, f[55],ans = 1e9;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
		scanf("%d", &f[i]);

	sort(f, f+m);

	for (int k = 0; k < m-n+1; k++)
		ans = min(ans,f[k+n-1]-f[k]);
	printf("%d\n", ans);
	return 0;
}
