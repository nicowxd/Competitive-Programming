// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Preenchimento de Vetor III
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1178

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	double x, N[100];
	scanf("%lf", &x);
	for(int i = 0; i < 100; i++)
	{
	N[i] = x;
	printf("N[%d] = %.4lf\n", i, N[i]);
	x/= 2.0;
	}
	return 0;
}
