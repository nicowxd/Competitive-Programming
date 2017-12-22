#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, fat = 1, x;
	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
		fat *= i;

	int cnt = fat/n;
	int v[5000][n], res[n];
	
	for (int i = 0; i < fat-1; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &x);
			v[j][x]++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (v[i][j] != cnt)
				res[i] = j;
		}
	}
	for (int i = 0; i < n; i++)
		printf("%d ", res[i]);		
	printf("\n");
	return 0;
}
