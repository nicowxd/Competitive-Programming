// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Conta
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1866

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x,y;
	scanf("%d", &x);
	for(int i = 0; i < x; i++)
	{
	scanf("%d", &y);
	if (y%2 == 0)
	{
	printf("0\n");
	}
	else
	{
	printf("1\n");
	}
	}
	return 0;
}
