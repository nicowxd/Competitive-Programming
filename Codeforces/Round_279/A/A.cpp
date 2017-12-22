#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x;
	vector<int> a[4];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &x);
		a[x].push_back(i);
	}
	int teams = min(a[1].size(), min(a[2].size(), a[3].size()));
	printf("%d\n", teams);
	for (int i = 0; i < teams; i++)
	{
		printf("%d %d %d\n", a[1][i], a[2][i], a[3][i]);
	}
	return 0;
}
