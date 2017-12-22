// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bolsa de Valores
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1932

#include <bits/stdc++.h>

using namespace std;

int N, C, memo[2][200000], P[200000];

int solve(int action, int day)
{
	if (day == N) return 0;
	if (memo[action][day] != -1) return memo[action][day];
	if (action)
		return memo[action][day] = max(solve(action, day+1), P[day]+ solve(0, day+1));

	return memo[action][day] = max(solve(action, day+1), -P[day]-C + solve(1, day+1));
}

int main()
{
	scanf("%d %d", &N, &C);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", P+i);
		memo[0][i] = memo[1][i] = -1;
	}
	
	printf("%d\n", solve(0,0));
	return 0;
}
