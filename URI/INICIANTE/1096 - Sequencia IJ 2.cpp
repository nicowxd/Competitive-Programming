// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequencia IJ 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1096

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int i=1,j;
	for (int k1 = 0; k1< 5; k1++)
	{
	j = 7;
	for(int k2 = 0; k2 < 3; k2++)
	{
	printf("I=%d J=%d\n", i, j);
	j--;
	}
	i+=2;
	}
	return 0;
} 

