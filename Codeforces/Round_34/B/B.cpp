#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m;
	scanf("%d %d", &n, &m);
	
	int tvs[101];
	for (int i = 0; i < n; i++)
		scanf("%d", &tvs[i]);
	
	sort(tvs, tvs+n);
	int acc = 0, ans = 0;
	
	for (int i = 0; i < m; i++)
	{
		acc += tvs[i];
		if (acc < ans)
			ans = acc;
	}
	ans = abs(ans);
	printf("%d\n", ans);
	return 0;
}
