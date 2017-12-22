#include <bits/stdc++.h>

using namespace std;

const int MAXN = 123456;

int n, m, v[MAXN], p[MAXN];

int bsearch(int x)
{
	int l = 0, r = n;
	while(r - l > 1)
	{
		int mid = (l+r)/2;
		if (v[mid] <= x)
			l = mid;
		else
			r = mid;
	}
	return p[l];
}

int main()
{

	int x;
	scanf("%d %d", &n, &m);

	v[0] = 0;
	for (int i = 0; i < n-1; i++)
		scanf("%d", &v[i+1]);
	for (int i = 0; i < n; i++)
		scanf("%d", &p[i]);

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &x);
		printf("%d ", bsearch(x));
	}
	printf("\n");
	return 0;
}
