#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	
	if (n % 2)
		printf("-1");
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (i % 2)
				printf("%d ", i+1);
			else
				printf("%d ", i-1);
		}
	}
	printf("\n");
	return 0;
}
