#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, x, a = 0, b = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x == 1)
			a ^= (1 << 0);
		else
			a ^= (1 << 0), b ^= (1 << 0);
	}

	printf("%d\n%d\n", a, b);
	return 0;
}
