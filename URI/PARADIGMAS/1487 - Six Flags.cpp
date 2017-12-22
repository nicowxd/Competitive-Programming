// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Six Flags
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1487

#include <bits/stdc++.h>

using namespace std;

#define MAXN 130
#define MAXL 630

int n, memo[MAXN][MAXL], v[MAXN], w[MAXN];

int knap(int idx, int wt)
{
	if (memo[idx][wt] != -1)
		return memo[idx][wt];
	if (idx == n or wt <= 0)
		return 0;
	if (wt - w[idx] >= 0)
		return memo[idx][wt] = max(knap(idx+1, wt), v[idx] + knap(idx, wt-w[idx]));
	return memo[idx][wt] = knap(idx+1, wt);
}

int main()
{

	int l, t = 1;
	while(scanf("%d %d", &n, &l), n)
	{
		memset(memo, -1, sizeof memo);
		for (int i = 0; i < n; i++)
			scanf("%d %d", w+i, v+i);
		printf("Instancia %d\n", t++);
		printf("%d\n\n", knap(0, l));
	}
	return 0;
}
