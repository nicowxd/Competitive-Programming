// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Escada do DINF
// Nível: 1
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2518

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(scanf("%d", &n) != EOF)
	{
		double h, c, l;
		scanf("%lf %lf %lf", &h, &c, &l);
	
		double ans = (l*n*hypot(h, c))/10000.0;
		
		printf("%.4lf\n", ans);
	}
	return 0;
}
