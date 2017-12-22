// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Idades
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1154

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x,y=0,cont=0;
	while(scanf("%d", &x) != EOF && x > 0)
	{
	cont = cont + x;
	y++;
	}                            
	printf("%.2f\n", (float) cont/y);
	return 0;
} 
