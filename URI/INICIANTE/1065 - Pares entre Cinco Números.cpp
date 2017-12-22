// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Pares entre Cinco Números
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1065

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x,cont=0;
	for (int i = 0; i < 5; i++)
	{
	scanf("%d", &x);
	if (x%2==0)
	{
	cont++;
	}
	}
	printf("%d valores pares\n", cont);
	return 0;
}
