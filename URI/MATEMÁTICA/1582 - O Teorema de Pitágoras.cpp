// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: O Teorema de Pitágoras
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1582

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	int x,y,z;
	while(scanf("%d %d %d", &x, &y, &z) != EOF)
	{
		if (x == hypot(y,z) || y == hypot(x,z) || z == hypot(x, y))
		{
			if (gcd(x,gcd(y,z)) == 1)
				printf("tripla pitagorica primitiva\n");
			else
				printf("tripla pitagorica\n");
		}
		else
			printf("tripla\n");
	}
	return 0;
}


