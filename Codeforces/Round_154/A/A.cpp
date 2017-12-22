#include <bits/stdc++.h>

using namespace std;

int main()
{

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	scanf("%d %d", &n, &m);

	if (n == m)
	{
		for (int i = 0; i < n+m; i++)
			printf("%c", i&1 ? 'B' : 'G');
	}
	else if (n > m)
	{
		for (int i = 0; i < 2*m; i++)
			printf("%c", i&1 ? 'G' : 'B');
		for (int i = 0; i < n-m; i++)
			printf("B");
	}
	else
	{
		for (int i = 0; i < 2*n; i++)
			printf("%c", i&1 ? 'B' : 'G');
		for (int i = 0; i < m-n; i++)
			printf("G");
	}
	printf("\n");
	return 0;
}
