// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bem-vindos e Bem-vindas a...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1847

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int x,y,w,z,a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	x = b-a;
	y = c-b;
	z = a-b;
	w = b-c;
	if (a > b && b <= c)
	{
	printf(":)\n");
	}
	else if (a > b && b > c && z > w)
	{
	printf(":)\n");
	}
	else if (a > b && b > c && w >= z)
	{
	printf(":(\n");
	}
	else if (b > a && b >= c)
	{
	printf(":(\n");
	}
	else if (b > a && c > b && y < x)
	{
	printf(":(\n");
	}
	else if (b > a && c > b && y >= x)
	{
	printf(":)\n");
	}
	else if (a == b && c > b)
	{
	printf(":)\n");
	}
	else
	{
	printf(":(\n");
	}
	return 0;
}
