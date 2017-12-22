#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, val, ans[110];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &val);
		ans[val] = i;
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", ans[i]);
	}
	printf("\n");
	return 0;
} 
