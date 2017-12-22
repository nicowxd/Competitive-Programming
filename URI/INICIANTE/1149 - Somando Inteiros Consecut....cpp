// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Somando Inteiros Consecut...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1149

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int a,n,soma=0;
	scanf("%d %d", &a,&n);
	while(n<=0)
	{
	scanf("%d", &n);
	}
	for (int i = a; i < a+n; i++)
	{
	soma+=i;
	}
	printf("%d\n", soma);
	return 0;
}
