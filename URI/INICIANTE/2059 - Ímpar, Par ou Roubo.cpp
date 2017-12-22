// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ímpar, Par ou Roubo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2059

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int p, j1, j2, r, a;
	scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);
	int soma = j1+j2;
	if (r == 1 && a == 1)
		printf("Jogador 2 ganha!\n");
	else if (r == 1 && a == 0)
		printf("Jogador 1 ganha!\n");
	else if (r == 0 && a == 1)
		printf("Jogador 1 ganha!\n");
	else
	{
		if ((soma % 2) == 0 && p == 1)
			printf("Jogador 1 ganha!\n");
		else if ((soma % 2) && p == 1)
			printf("Jogador 2 ganha!\n");
		else if ((soma % 2) == 0 && p == 0)
			printf("Jogador 2 ganha!\n");
		else
			printf("Jogador 1 ganha!\n");
	}
	return 0;
}
