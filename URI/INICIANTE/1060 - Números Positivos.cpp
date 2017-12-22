// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Números Positivos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1060

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x=0;
	float y;
	for (int i=0; i<6; i++)
	{
	scanf("%f", &y);
	if (y > 0)
	{
	x++;
	}
	}
	printf("%d valores positivos\n", x);
}
