// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Seis Números Ímpares
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1070

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x;
	scanf("%d", &x);
	for(int i=0;i<6;i++)
	{
	if (x%2 != 0)
	{
	printf("%d\n", x);
	}
	else
	{
	x = x+1;
	printf("%d\n", x);
	}
	x+=2;
	}
	return 0;
}
