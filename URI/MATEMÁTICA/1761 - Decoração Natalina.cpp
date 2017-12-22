// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Decoração Natalina
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1761

#include <iostream>
#include <cstdio>
#include <cmath>

#define PI 3.141592654
using namespace std;

int main()
{
	double a,b,c;
	while(scanf("%lf %lf %lf", &a, &b, &c) != EOF)
	{
		printf("%.2lf\n", (tan(a*PI/180)*b+c)*5);
	}
	return 0;
}

