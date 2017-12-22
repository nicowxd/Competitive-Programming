#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n, a[1010];
		scanf("%d", &n);

		for (int i = 0; i < n; i++)
			scanf("%d", a+i);
		
		int ans = 0;
		for (int i = 1; i < n; i++)
		{
			int cnt = 0;
			for (int j = 0; j < i; j++)
			{
				if (a[j] <= a[i])
					cnt++;
			}
			ans += cnt;
		}

		printf("%d\n", ans);
	}
	
	return 0;
}
