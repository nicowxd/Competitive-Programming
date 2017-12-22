// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequencia IJ 1
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1095

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

	int i = 1;
	for (int j = 60; j>=0; j-=5)
	{
	printf("I=%d J=%d\n", i, j);
	i+=3;
	}
	return 0;
}
