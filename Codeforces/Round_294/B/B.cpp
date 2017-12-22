#include <bits/stdc++.h>

using namespace std;

int main()
{


	int n, x;
	scanf("%d", &n);

	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		sum1 += x;
	}
	
	for (int i = 0; i < n-1; i++)
	{
		scanf("%d", &x);
		sum2 += x;
	}

	printf("%d\n", sum1 - sum2);
	
	sum1 = 0;

	for (int i = 0; i < n-2; i++)
	{
		scanf("%d", &x);
		sum1 += x;
	}

	printf("%d\n", sum2 - sum1);
	return 0;
}
