#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, v[110];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", v+i);
	
	int g = 0;

	for (int i = 0; i < n; i++)
	{
		g = __gcd(g, v[i]);
	}

	printf("%d\n", g*n);
	return 0;
}
