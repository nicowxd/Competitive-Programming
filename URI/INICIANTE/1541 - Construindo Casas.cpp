// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Construindo Casas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1541

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int a, b, c;
	while(scanf("%d", &a), a)
	{
		scanf("%d %d", &b, &c);
		double x = 100.0 / c;
		double ans = trunc(sqrt(a*b*x));
		printf("%.0lf\n", ans);
	}
	return 0;
}
