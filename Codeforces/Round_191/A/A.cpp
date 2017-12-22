#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, ones = 0, v[110] = {0};
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		ones += x;
		if (x == 0)
			v[i] = 1;
		else
			v[i] = -1;
	}

	int sum = 0, ans = -1;
	for (int i = 0; i < n; i++)
	{
		if (sum + v[i] >= 0)
		{
			sum += v[i];
			ans = max(ans, sum);
		}
		else
			sum = 0;
	}

	printf("%d\n", ans+ones);
	return 0;
}
