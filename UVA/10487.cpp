#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, caso = 1;

	while(scanf("%d", &n) && n)
	{
		int v[1010], m, x;
		
		for (int i = 0; i < n; i++)
			scanf("%d", v+i);

		scanf("%d", &m);

		printf("Case %d:\n", caso++);
		for (int i = 0; i < m; i++)
		{
			scanf("%d", &x);
			
			int best = 1e9, ans;
			for (int j = 0; j < n; j++)
			{
				for (int k = j+1; k < n; k++)
				{
					if (abs(x - (v[j] + v[k])) < best)
					{
						best = abs(x - (v[j] + v[k]));
						ans = v[j] + v[k];
					}
				}
			}
			printf("Closest sum to %d is %d.\n", x, ans);
		}
	}				

	return 0;
}
