// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Funções
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1555

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int rafael(int x, int y)
{
	int r;
	r = pow(3*x, 2) + pow(y,2);
	return r;
}

int beto(int x, int y)
{
	int b;
	b = 2*pow(x,2) + pow(5*y, 2);
	return b;
}

int carlos(int x, int y)
{
	int c;
	c = -100*x + pow(y,3);
	return c;
}

int main()
{
	int n, a, b;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &a, &b);
		if (rafael(a,b) > beto(a,b) && rafael(a,b) > carlos(a,b))
			printf("Rafael ganhou\n");
		else if (beto(a,b) > rafael(a,b) && beto(a,b) >= carlos(a,b))
			printf("Beto ganhou\n");
		else
			printf("Carlos ganhou\n");
	}
	return 0;
}
