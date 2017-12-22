#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, h, m, ans = 1, v[1500] = {0};
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &h, &m);

		int tot = h*60 + m;
		v[tot]++;

		ans = max(ans, v[tot]);
	}

	printf("%d\n", ans);
	return 0;
}
