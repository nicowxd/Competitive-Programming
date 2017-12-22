#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k, v[112345];
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++)
		scanf("%d", v+i);
	
	int s = v[k];
	bool fail = false;

	for (int i = k+1; i <= n and !fail; i++)
		if (v[i] != s)
			fail = true;
	if (fail)
		printf("-1\n");
	else
	{
		int ans = 0;
		for (int i = 1; i < k; i++)
		{
			if (v[i] != s)
				ans = i;
		}

		printf("%d\n", ans);
	}

	return 0;
}
