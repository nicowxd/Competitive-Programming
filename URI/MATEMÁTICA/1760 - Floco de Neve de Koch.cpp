// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Floco de Neve de Koch
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1760

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n;
	double a, ans;
	while(scanf("%d", &n) != EOF)
	{
		a = (n*n*sqrt(3))/4.0;
		ans = 8.0*a/5.0;
		printf("%.2f\n", ans);
	}
	return 0;
}

