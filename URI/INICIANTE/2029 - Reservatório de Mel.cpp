// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Reservatório de Mel
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2029

#include <bits/stdc++.h>

using namespace std;

int main()
{
	double v, d, pi = 3.14;
	while(scanf("%lf %lf", &v, &d) != EOF)
	{
		double area = pi*(d/2)*(d/2);
		double altura = v/area;
		printf("ALTURA = %.2lf\nAREA = %.2lf\n", altura, area);
	}
	return 0;
}
