#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[200];

	scanf("%d", &n);

	for (int i = 0; i < 2*n; i++)
		scanf("%d", v + i);
	
	sort(v, v+(2*n));
	
	int ans = 1e9;
	for (int i = 0; i < 2*n; i++)
	{
		for (int j = 0; j < 2*n; j++)
		{
			if (i == j)
				continue;
			int sum = 0, cn = 0, past;

			for (int k = 0; k < 2*n; k++)
			{
				if (k == i or k == j)
					continue;
				if (cn&1)
					sum += (v[k] - past);
				else
					past = v[k];
				cn++;
			}

			ans = min(ans, sum);
		}
	}

	printf("%d\n", ans);

	return 0;
}
