#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[1010], sum[2000000], caso = 1;

	while(scanf("%d", &n) && n)
	{
		int m, x, cnt = 0;
		for (int i = 0; i < n; i++)
			scanf("%d", v+i);

		scanf("%d", &m);
		
		for (int i = 0; i < n; i++)
			for (int j = i + 1; j < n; j++)
				sum[cnt++] = v[i] + v[j];
		
		sort(sum, sum + cnt);
		printf("Case %d:\n", caso++);
		
		while(m--)
		{
			scanf("%d", &x);

			int k = 1;
			while(abs(x - sum[k-1]) >= abs(x - sum[k]) and k < cnt)
				k++;
			printf("Closest sum to %d is %d.\n", x, sum[k-1]);
		}
	}
	
	return 0;
}
