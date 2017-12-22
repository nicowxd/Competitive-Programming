#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, a, b, c;
	scanf("%d %d %d %d", &n, &a, &b, &c);

	int ans = 0;
	for (int i = 0; i <= (n/a); i++)
	{
		for (int j = 0; j <= (n/b); j++)
		{
			int k = (n - i*a - j*b) / c;
			if (k < 0) continue;
			if (i*a + j*b + k*c == n)
				ans = max(ans, i+j+k);
		}
	}

	printf("%d\n", ans);
	return 0;
}
