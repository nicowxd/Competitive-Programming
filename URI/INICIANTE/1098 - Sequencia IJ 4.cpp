// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequencia IJ 4
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1098

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	double j;
	for(double i= 0; i <= 20; i+=2)
	{
	j=i+10;                   
	for (int k = 0; k < 3; k++)
	{
	if (i==0 || i==10 || i == 20)
	{
	printf("I=%d J=%d\n", (int)i/10, (int)j/10);
	}
	else
	{
	printf("I=%.1f J=%.1f\n", i/10,j/10);
	}
	j+=10;
	}
	}
	return 0;
}
