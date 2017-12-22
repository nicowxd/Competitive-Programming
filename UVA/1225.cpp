#include <bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	scanf("%d", &t);

	while(t--)
	{
		int n, v[10] = {0};

		scanf("%d", &n);
		
		for (int i = 1; i <= n; i++)
		{
			int x = i;
			while(x)
			{
				v[x%10]++;
				x /= 10;
			}
		}

		printf("%d", v[0]);
		for (int i = 1; i < 10; i++)
			printf(" %d", v[i]);
		printf("\n");
	}

	return 0;
}
