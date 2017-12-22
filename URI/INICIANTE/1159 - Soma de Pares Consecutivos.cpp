// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Soma de Pares Consecutivos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1159

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x;
	while(scanf("%d", &x) != EOF && x)
	{
	int soma = 0;
	for (int i = x; i <= x+9 ; i++)
	{
	if (i%2 == 0)
	{
	soma+=i;
	}
	}
	printf("%d\n", soma);
	}
	return 0;
}
