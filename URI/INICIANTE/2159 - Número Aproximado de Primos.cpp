// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Número Aproximado de Primos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2159

#include <bits/stdc++.h>

using namespace std;

int main()
{

	double n;
	scanf("%lf", &n);
	
	double p = n/log(n);
	double m = 1.25506*p;
	
	printf("%.1lf %.1lf\n", p, m);
	return 0;
}
