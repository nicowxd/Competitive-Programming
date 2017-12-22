// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Qual o Mais Rápido?
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2175

#include <bits/stdc++.h>

using namespace std;

int main()
{

	double o, b, i;
	scanf("%lf %lf %lf", &o, &b, &i);
	
	if (o < b && o < i)
		printf("Otavio\n");
	else if (b < o && b < i)
		printf("Bruno\n");
	else if (i < b && i < o)
		printf("Ian\n");
	else if (o < b && o == i && i < b)
		printf("Empate\n");
	else if (o < i && o == b && b < i)
		printf("Empate\n");
	else if (b < o && b == i && i < o)
		printf("Empate\n");
	else if (b < i && b == o && o < i)
		printf("Empate\n");
	else if (i < o && i == b && b < o)
		printf("Empate\n");
	else if (i < b && i == o && o < b)
		printf("Empate\n");
	else 
		printf("Empate\n");
	return 0;
}
