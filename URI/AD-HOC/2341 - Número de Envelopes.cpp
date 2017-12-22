// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Número de Envelopes
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2341

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k, x, v[1010] = {0}, ans = 1e9;

	scanf("%d %d", &n, &k);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		v[x]++;
	}

	for (int i = 1; i <= k; i++)
		ans = min(ans, v[i]);
	
	printf("%d\n", ans);
	return 0;
}
