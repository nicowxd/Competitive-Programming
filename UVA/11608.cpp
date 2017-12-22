#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, c = 1;

	while(scanf("%d", &n) and n >= 0)
	{
		int sum[13] = {0}, act;
		sum[0] = n;
		
		for (int i = 1, x; i <= 12; i++)
			scanf("%d", sum + i);
		
		printf("Case %d:\n", c++);
		act = sum[0];
		for (int i = 1, x; i <= 12; i++)
		{
			scanf("%d", &x);
			if (act >= x)
			{
				printf("No problem! :D\n");
				act -= x;
			}
			else
				printf("No problem. :(\n");
			act += sum[i];
		}
	}

	return 0;
}
