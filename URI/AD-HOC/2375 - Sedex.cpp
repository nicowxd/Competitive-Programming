// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sedex
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2375

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n, a, l, p;
	scanf("%d", &n);
	scanf("%d %d %d", &a, &l, &p);
	
	if (a >= n and l >= n and p >= n)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
