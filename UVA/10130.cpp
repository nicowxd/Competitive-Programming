#include <bits/stdc++.h>

using namespace std;

int memo[1010][40], P[1010], W[1010], n;

int solve(int id, int w)
{
	if (id == n || w == 0) return 0;
	if (memo[id][w] != -1) return memo[id][w];
	if (W[id] > w) return memo[id][w] = solve(id+1, w);	
	return memo[id][w] = max(solve(id+1, w), P[id] + solve(id+1, w- W[id]));
}
int main()
{
	int t, G, MW;
	scanf("%d", &t);
	while(t--)
	{
		memset(memo, -1, sizeof memo);
		int ans = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d %d", &P[i], &W[i]);
		
		scanf("%d", &G);
		for(int i = 0; i < G; i++)
		{
			scanf("%d", &MW);
			ans+= solve(0, MW);
		}
		
		printf("%d\n", ans);
	}
	return 0;
}
