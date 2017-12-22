#include <bits/stdc++.h>

using namespace std;

#define MAXN 1010

int v[MAXN], tb[MAXN];

int main()
{

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", v+i);
		tb[i] = 1;
	}
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < i; j++)
			if (v[j] <= v[i])
				tb[i] = max(tb[i], tb[j]+1);

	int ans = 0;
	for (int i = 0; i < n; i++)
		ans = max(ans, tb[i]);
	
	printf("%d\n", ans);

	return 0;
}
