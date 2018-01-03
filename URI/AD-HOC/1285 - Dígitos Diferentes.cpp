#include <bits/stdc++.h>

using namespace std;

bool rep (int k)
{
	int v[10] = {0};

	while(k)
	{
		v[k%10]++;
		k /= 10;
	}

	for (int i = 0; i <= 9; i++)
	{
		if (v[i] > 1)
			return true;
	}
	
	return false;
}

int main()
{

	int n, m;

	while(scanf("%d %d", &n, &m) != EOF)
	{
		int ans = 0;

		for (int i = n; i <= m; i++)
		{
			if (!rep(i))
				ans++;
		}

		printf("%d\n", ans);
	}

	return 0;
}
