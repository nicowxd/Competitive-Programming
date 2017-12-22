// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ginástica
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2664

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define MOD 1000000007

int t, m, n; 
ll memo[100001][51];

ll calc(int last, int i)
{
	int ans = 0;
	if (memo[last][i] != -1)
		return memo[last][i];
	if (i == t)
		return memo[last][i] = 1LL;
	if (last == m)
	{
		ans += calc(last+1, i+1)%MOD;
		return memo[last][i] = ans;
	}
	if (last == n)
	{
		ans += calc(last-1, i+1)%MOD;
		return memo[last][i] = ans;
	}
	ans += (calc(last+1, i+1)%MOD + calc(last-1, i+1)%MOD)%MOD;
	return memo[last][i] = ans;
}
int main()
{
	scanf("%d %d %d", &t, &m, &n);
	memset(memo, -1, sizeof memo);
	
	ll tight = (2LL*calc(m, 1))%MOD;
	
	ll nottight = 0LL;
	for (int i = m+1; i <= n-1; i++)
		nottight += calc(i, 1)%MOD;
	
	//printf("tight = %lld\n", tight);
	//printf("not tight = %lld\n", nottight);
	printf("%lld\n", (tight + nottight)%MOD);
	return 0;
}
