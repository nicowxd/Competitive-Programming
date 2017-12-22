// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Tipos de Triângulos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1045

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{	
	double a[5];
	for(int i = 0; i < 3; i++)
	{	
	scanf("%lf", &a[i]);
	}
	sort(a,a+3);
	if (a[2] >= a[1]+a[0])
	{
	printf("NAO FORMA TRIANGULO\n");
	return 0;
	}
	if (a[2]*a[2] == a[1]*a[1] + a[0]*a[0])
	{
	printf("TRIANGULO RETANGULO\n");
	}
	if (a[2]*a[2] > a[1]*a[1] +  a[0]*a[0])
	{
	printf("TRIANGULO OBTUSANGULO\n");
	}
	if (pow(a[2],2) < pow(a[1],2) + pow(a[0],2))
	{
	printf("TRIANGULO ACUTANGULO\n");
	}
	if (a[2] == a[1] && a[2] == a[0])
	{
	printf("TRIANGULO EQUILATERO\n");
	return 0;
	}
	if ((a[2] == a[1] || a[2] == a[0]) || (a[1] == a[0]))
	{
	printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}
		
