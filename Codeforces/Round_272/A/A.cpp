#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, ans;
	scanf("%d %d", &n, &m);
	int half = (n+1)/2;
	for (int i = half; i <= n; i++)
	{
		if (i % m == 0)
		{
			printf("%d\n", i);
			return 0;
		}
	}
	printf("-1\n");
	return 0;
}
		
