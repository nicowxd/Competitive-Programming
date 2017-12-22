#include <bits/stdc++.h>

using namespace std;

#define MAXN 2050

int n, w[MAXN], v[MAXN], memo[MAXN][MAXN];

int knap(int id, int wt)
{
	if (memo[id][wt] != -1)
		return memo[id][wt];

	if (id == n or wt <= 0)
		return memo[id][wt] = 0;
	
	if (w[id] <= wt)
		return memo[id][wt] = max(knap(id+1, wt), (v[id] + knap(id+1, wt-w[id])));

	return memo[id][wt] = knap(id+1, wt);
}

int main()
{

	int p;

	scanf("%d %d", &p, &n);

	for (int i = 0; i < n; i++)
		scanf("%d %d", w+i, v+i);

	memset(memo, -1, sizeof memo);
	printf("%d\n", knap(0, p));
	return 0;
}
