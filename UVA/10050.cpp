#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n, p, v[4000];
		scanf("%d", &n);
		scanf("%d", &p);

		for (int i = 0; i < p; i++)
			scanf("%d", v+i);
		
		int ans = 0;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < p; j++)
			{
				if ((i+1) % v[j] == 0 and (i % 7 != 5) and (i % 7 != 6))
				{
					ans++;
					break;
				}
			}
		}

		printf("%d\n", ans);
	}

	return 0;
}
