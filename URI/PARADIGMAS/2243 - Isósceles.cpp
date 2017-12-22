// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Isósceles
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2243

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	scanf("%d", &n);
	
	int h[51234], esq[51234], dir[51234];
	
	for (int i = 0; i < n; i++)
		scanf("%d", h+i);
	
	esq[0] = 1;
	for (int i = 1; i < n; i++)
		esq[i] = min(esq[i-1]+1, h[i]);

	dir[n-1] = 1;
	for (int i = n-2; i >= 0; i--)
		dir[i] = min(dir[i+1]+1, h[i]);

	int ans = 0;
	for (int i = 0; i < n; i++)
		ans = max(ans, min(esq[i], dir[i]));
	
	printf("%d\n", ans);
	return 0;
}
