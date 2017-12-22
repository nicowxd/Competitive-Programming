// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequências Crescentes
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1146

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{                                   
	int x;
	while(scanf("%d", &x) != EOF && x)
	{
	for (int i = 1; i <= x; i++)
	{
	if (i == x)
	{
	printf("%d\n", i);
	break;
	}
	printf("%d ", i);
	}
	}
	return 0;
}
