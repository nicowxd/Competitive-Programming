#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n, k, v[212345], sum = 0, ans = 1;
	scanf("%d %d", &n, &k);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", v+i);
		if (i <= k)
			sum += v[i];
	}
	
	int acc = sum;
	for (int i = k+1; i <= n; i++)
	{
		acc = (acc - v[i-k]) + v[i];
		if (sum > acc)
		{
			sum = acc;
			ans = (i - k) + 1;
		}
	}
	
	printf("%d\n", ans);

	return 0;
}
