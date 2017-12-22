// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Soma de Ímpares Consecuti...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1158

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n,x,y;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
	scanf("%d %d", &x, &y);
	int soma = 0;
	for (int j = x; j <= x+y*2-1 ; j++)
	{                 
	if (j%2!=0)
	{
	soma+=j;
	}
	}
	printf("%d\n", soma);
	}
	return 0;
}
