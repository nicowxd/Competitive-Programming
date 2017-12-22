// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Substituição em Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1172

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x[20];
	for(int i=0; i<10; i++)
	{
	scanf("%d", &x[i]);
	if (x[i] <= 0)
	{
	printf("X[%d] = 1\n", i);
	}
	else
	{
	printf("X[%d] = %d\n", i, x[i]);
	}
	}
	return 0;
}
