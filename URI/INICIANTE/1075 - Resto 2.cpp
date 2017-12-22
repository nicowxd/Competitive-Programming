// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Resto 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1075

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int N;
	scanf("%d", &N);
	for(int i=1; i<=10000; i++)
	{
	if (i%N == 2)
	{
	printf("%d\n", i);
	}
	}
	return 0;
}
