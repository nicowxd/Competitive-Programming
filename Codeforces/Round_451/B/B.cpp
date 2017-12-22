#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, a, b;
	scanf("%d", &n);
	scanf("%d %d", &a, &b);

	for (int i = 0; i <= n/a; i++)
	{
		if ((n - (a*i)) % b == 0)
		{
			printf("YES\n");
			printf("%d %d\n", i, (n - (a*i))/b);
			return 0;
		}
	}

	printf("NO\n");
	return 0;
}
