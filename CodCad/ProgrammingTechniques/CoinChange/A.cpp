#include <bits/stdc++.h>

using namespace std;

int memo[1010];

vector<int> v;

int change(int w)
{
	if (w == 0)
		return 1;
	if (w < 0)
		return 0;
	if (memo[w] != -1)
		return memo[w];
	
	for (int i = 0; i < (int) v.size(); i++)
		if (change(w-v[i]))
			return memo[w-v[i]] = 1;
	
	return memo[w] = 0;
}

int main()
{

	int n, w, x;
	scanf("%d %d", &n, &w);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		v.push_back(x);
	}
	
	memset(memo, -1, sizeof memo);

	if (change(w) == 1)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
