#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, m, x, minC = 1e9, maxC = 0, minW = 1e9;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		maxC = max(x, maxC);
		minC = min(x, minC);
	}

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		minW = min(minW, x);
	}
	
	if (max(2*minC, maxC) < minW)
		printf("%d\n", max(2*minC, maxC));
	else
		printf("-1\n");
	return 0;
}
