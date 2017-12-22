// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Quadrado de Pares
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1073

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x;
	scanf("%d", &x);
	for(int i = 2; i <= x; i+=2)
	{
	printf("%d^2 = %d\n", i, i*i);
	}
	return 0;
}

