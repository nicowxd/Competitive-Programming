// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Filme
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1963

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	double a, b, res;
	scanf("%lf %lf", &a, &b);
	res = ((b - a)*100)/a;
	printf("%.2f%%\n", res);
	return 0;
}

