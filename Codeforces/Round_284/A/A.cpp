#include <bits/stdc++.h>

using namespace std;

const int MAXN = 123456;

int main()
{

	int n, x, l[MAXN], r[MAXN];
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
		scanf("%d %d", l+i, r+i);

	int cur = 1, ans = 0, i = 0;

	while(cur <= r[n-1])
	{
		if (cur + x > l[i])
		{
			ans += r[i] - cur + 1;
			cur = r[i] + 1;
			i++;
		}
		else
			cur += x;
	}

	printf("%d\n", ans);
	return 0;
}
