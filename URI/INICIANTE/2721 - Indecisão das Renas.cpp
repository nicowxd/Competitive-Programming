// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Indecisão das Renas
// Nível: 3
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2721

#include <bits/stdc++.h>

using namespace std;

int main()
{

	int sum = 0, x;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &x);
		sum += x;
	}

	if (sum % 9 == 1)
		puts("Dasher");
	else if (sum % 9 == 2)
		puts("Dancer");
	else if (sum % 9 == 3)
		puts("Prancer");
	else if (sum % 9 == 4)
		puts("Vixen");
	else if (sum % 9 == 5)
		puts("Comet");
	else if (sum % 9 == 6)
		puts("Cupid");
	else if (sum % 9 == 7)
		puts("Donner");
	else if (sum % 9 == 8)
		puts("Blitzen");
	else
		puts("Rudolph");

	return 0;
}
