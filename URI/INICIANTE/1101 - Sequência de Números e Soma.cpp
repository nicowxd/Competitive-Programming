// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequência de Números e Soma
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1101

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int val[3];
	while(scanf("%d %d", &val[0], &val[1]) != EOF && (val[0] != 0 && val[1] != 0))
	{
	int sum=0;
	sort(val,val+2);
	for (int i=val[0]; i <= val[1] ; i++)
	{
	printf("%d ", i);
	sum+=i;
	}
	printf("Sum=%d\n",sum);
	}
	return 0;
}
