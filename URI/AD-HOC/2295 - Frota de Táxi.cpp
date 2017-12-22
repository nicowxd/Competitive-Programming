// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Frota de Táxi
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2295

#include <bits/stdc++.h>

using namespace std;

int main()
{

	double a, g, ra, rg;
	scanf("%lf %lf %lf %lf", &a, &g, &ra, &rg);

	if (ra/a > rg/g)
		printf("A\n");
	else
		printf("G\n");
	return 0;
}
