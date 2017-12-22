// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Altura
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1566

#include <iostream>
#include <cstdio>
#include <algorithm> 

using namespace std;

int main()
{
	int nc,n,altura[3000010];
	scanf("%d", &nc);
	for (int i = 0; i < nc; i++)
	{
	scanf("%d", &n);
	for (int j = 0; j < n; j++)
	{
	scanf("%d", &altura[j]);
	}
	sort(altura,altura+n);
	for (int j = 0; j < n; j++)
	{
	if (j == n-1)
	{
	printf("%d\n", altura[j]);
	}
	else
	{
	printf("%d ", altura[j]);
	}
	}
	}
	return 0;
}
	
