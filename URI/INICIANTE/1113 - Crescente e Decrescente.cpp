// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Crescente e Decrescente
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1113

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x,y;
	while(scanf("%d %d", &x, &y) != EOF && x != y)
	{
	if (x > y)
	{
	printf("Decrescente\n");
	}
	else
	{
	printf("Crescente\n");
	}
	}
	return 0;
}	
