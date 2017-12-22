#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k, v[110];
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++)
		scanf("%d", v+i);
	
	int arya = 0, sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (v[i] >= 8)
		{
			sum += 8;
			arya += (v[i] - 8);
		}
		else
		{
			if (v[i] + arya <= 8)
			{
				sum += (arya + v[i]);
				arya = 0;
			}
			else if (v[i] + arya > 8)
			{
				sum += 8;
				arya -= 8;
			}
		}
		
		if (sum >= k)
		{
			printf("%d\n", i);
			return 0;
		}
	}

	printf("-1\n");
	return 0;
}
