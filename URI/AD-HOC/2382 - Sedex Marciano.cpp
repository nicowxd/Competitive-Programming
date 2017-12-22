// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sedex Marciano
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2382

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int l, a, p, r;
	scanf("%d %d %d %d", &l, &a, &p, &r);
		
	int diam = 4*r*r;
	int diag = l*l + a*a + p*p;
	if (diag <= diam)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}
