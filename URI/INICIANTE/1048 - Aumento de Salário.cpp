// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Aumento de Salário
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1048

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{	
	double x,y;
	scanf("%lf", &x);
	if (x>=0 && x<=400.00)
	{
	y = x*1.15;
	printf("Novo salario: %.2lf\n", y);
	printf("Reajuste ganho: %.2lf\n", y-x);
	printf("Em percentual: 15 %\n");
	}
	if (x>=400.01 && x<=800.00)
	{
	y = x*1.12;
	printf("Novo salario: %.2lf\n", y);
	printf("Reajuste ganho: %.2lf\n", y-x);
	printf("Em percentual: 12 %\n");
	}
	if (x>=800.01 && x<=1200.00)
	{
	y = x*1.10;
	printf("Novo salario: %.2lf\n", y);
	printf("Reajuste ganho: %.2lf\n", y-x);
	printf("Em percentual: 10 %\n");
	}
	if (x>=1200.01 && x<=2000.00)
	{
	y = x*1.07;
	printf("Novo salario: %.2lf\n", y);
	printf("Reajuste ganho: %.2lf\n", y-x);
	printf("Em percentual: 7 %\n");
	}
	if(x>2000.00)
	{
	y = x*1.04;
	printf("Novo salario: %.2lf\n", y);
	printf("Reajuste ganho: %.2lf\n", y-x);
	printf("Em percentual: 4 %\n");
	}
	return 0;
}
	
	
	

