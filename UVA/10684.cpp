#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(scanf("%d", &n), n)
	{
		int sum = 0, ans = 0, bet;
		bool flag = true;
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &bet);
			sum+= bet;
			ans = max(ans, sum);
			if (sum < 0)
			{
				sum = 0;
				flag = false;
			}
		}
		if (ans == 0 && !flag)
			printf("Losing streak.\n");
		else
			printf("The maximum winning streak is %d.\n", ans);
	}
	return 0;
}
