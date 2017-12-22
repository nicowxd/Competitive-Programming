#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, s[1000];
	scanf("%d", &n);
	while(n--)
	{
		int r;
		scanf("%d", &r);
		for (int i = 0; i < r; i++)
			scanf("%d", &s[i]);
	
		int ans = 1e9;
		for (int i = 0; i < r; i++)
		{
			int sum = 0;
			for (int j = 0; j < r; j++)
			{
				sum += abs(s[i]-s[j]);
			}
			ans = min(ans, sum);
		}
		printf("%d\n", ans);
	}
	return 0;
}
