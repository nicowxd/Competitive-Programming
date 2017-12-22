#include <bits/stdc++.h>

using namespace std;

#define INF 1e9

int memo[1010];
vector<int> v;

int change(int w)
{
	if (memo[w] != -1)
		return memo[w];
	if (w == 0)
		return 0;
	
	int menor = 1e9;

	for (int i = 0; i < (int) v.size(); i++)
	{
		if (v[i] > w)
			continue;
		
		int j = change(w - v[i]);
		
		if (j < menor)
			menor = j;
	}

	if (menor == 1e9)
		menor = 1e9;
	else
		menor = menor + 1;
	memo[w] = menor;
	return menor;
	
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
	int ans = change(w);

	if (ans < 10)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}
