// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Soma de Impares Consecuti...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1071

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int sum=0, val[3];
	for (int i = 0; i < 2; i++)
	{
	scanf("%d", &val[i]);
	}
	sort(val,val+2);
	for (int j = val[0]+1; j < val[1]; j++)
	{
	if (j%2 != 0)
	{
	sum+=j;
	}
	}
	printf("%d\n",sum);
	return 0;
}
