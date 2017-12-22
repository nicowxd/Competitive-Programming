// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Par ou Ímpar
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1074

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x,y;
	scanf("%d", &x);
	while(x--)
	{
	scanf("%d", &y);
	if (y%2==0 && y>0)
	{
	printf("EVEN POSITIVE\n");
	}
	if (y%2==0 && y<0)
	{
	printf("EVEN NEGATIVE\n");
	}
	if (y%2 != 0 && y>0)
	{
	printf("ODD POSITIVE\n");
	}
	if (y%2 != 0 && y<0)
	{
	printf("ODD NEGATIVE\n");
	}
	if (y==0)
	{
	printf("NULL\n");
	}
	}
	return 0;
}
