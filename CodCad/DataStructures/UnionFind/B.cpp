#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100100;

int p[MAXN], r[MAXN], v[MAXN];

int findSet(int i)
{
	return (p[i] == i) ? i : (p[i] = findSet(p[i]));
}

bool isSameSet(int a, int b)
{
	return findSet(a) == findSet(b);
}

void unionSet(int a, int b)
{
	if (!isSameSet(a,b))
	{
		int x = findSet(a);
		int y = findSet(b);
		
		if (r[x] > r[y])
		{
			p[y] = x;
			v[x] += v[y];
		}
		else
		{
			p[x] = y;
			v[y] += v[x];
			if (r[x] == r[y])
				r[y]++;
		}
	}

}

int main()
{

	int n, m;
	while(scanf("%d %d", &n, &m), (n or m))
	{
		memset(r, 0, sizeof r);
		memset(p, 0, sizeof p);
		for (int i = 0; i < n; i++)
		{
			scanf("%d", v+i);
			p[i] = i;
		}
	
		int q, a, b, ans = 0;
		for (int i = 0; i < m; i++)
		{
			scanf("%d %d %d", &q, &a, &b);
			if (q == 1)
				unionSet(a-1, b-1);
			else
			{
				int x = findSet(0);
				if (findSet(a-1) == x and v[findSet(a-1)] > v[findSet(b-1)])
					ans++;
				if (findSet(b-1) == x and v[findSet(b-1)] > v[findSet(a-1)])
					ans++;
			}
		} 
		
		printf("%d\n", ans);
	}
	
	return 0;
}
