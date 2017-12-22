// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Números Ímpares
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1067

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x;
	scanf("%d", &x);
	for(int i = 1; i<=x; i+=2)
	{
	printf("%d\n", i);
	}
	return 0;
}
