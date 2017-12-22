// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Intervalo 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1072

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x, y, in=0, out=0;
	scanf("%d", &x);
	while(x--)
	{
	scanf("%d", &y);
	if (y>= 10 && y<= 20)
	{
	in++;
	}
	else
	{
	out++;
	}
	}
	printf("%d in\n", in);
	printf("%d out\n", out);
	return 0;
}
