#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, y, z, n, ax = 0, ay = 0, az=0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d %d", &x, &y, &z);
		ax+=x, ay += y, az += z;
	}
	if (ax == 0 && ay == 0 && az == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
