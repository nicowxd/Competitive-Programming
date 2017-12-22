// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Vende-se
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2433

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, k, v[123456];
	scanf("%d %d", &n, &k);
	
	for (int i = 0; i < n; i++)
		scanf("%d", v + i);
	
	sort(v, v+n);
	
	int best = v[n-k-1] - v[0];
	for (int i = 1; i <= k; i++)
		best = min(best, v[i+n-k-1] - v[i]);
	
	printf("%d\n", best);
	return 0;
}
