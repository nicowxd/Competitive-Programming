// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Preenchimento de Vetor II
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1177

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int T,N[1000],j=0;
	scanf("%d", &T);
	for(int i = 0; i < 1000; i++)
	{
	if(j > T-1)
	{
	j = 0;
	}
	printf("N[%d] = %d\n", i, j);
	j++;
	}
	return 0;
}
