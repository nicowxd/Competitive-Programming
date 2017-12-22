// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Bazinga!
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1828

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	int x;
	char sheldon[30], raj[30];
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
	scanf("%s %s", sheldon, raj);
	if (strcmp(sheldon, "papel") == 0)
	{
	if (strcmp(raj, "pedra") == 0)
	{
	printf("Caso #%d: Bazinga!\n", i+1);
	}
	if (strcmp(raj, "papel") == 0)
	{
	printf("Caso #%d: De novo!\n", i+1);
	}
	if (strcmp(raj, "tesoura") == 0)
	{
	printf("Caso #%d: Raj trapaceou!\n", i+1);
	}
	if (strcmp(raj, "lagarto") == 0)
	{
	printf("Caso #%d: Raj trapaceou!\n", i+1);
	}
	if (strcmp(raj, "Spock") == 0)
	{
	printf("Caso #%d: Bazinga!\n", i+1);
	}
	}
	if (strcmp(sheldon, "pedra") == 0)
	{
	if (strcmp(raj, "pedra") == 0)
	{
	printf("Caso #%d: De novo!\n", i+1);
	}
	if (strcmp(raj, "papel") == 0)
	{
	printf("Caso #%d: Raj trapaceou!\n", i+1);
	}
	if (strcmp(raj, "tesoura") == 0)
	{
	printf("Caso #%d: Bazinga!\n", i+1);
	}
	if (strcmp(raj, "lagarto") == 0)
	{
	printf("Caso #%d: Bazinga!\n", i+1);
	}
	if (strcmp(raj, "Spock") == 0)
	{
	printf("Caso #%d: Raj trapaceou!\n", i+1);
	}
	}
	if (strcmp(sheldon, "tesoura") == 0)
	{
	if (strcmp(raj, "pedra") == 0)
	{
	printf("Caso #%d: Raj trapaceou!\n", i+1);
	}
	if (strcmp(raj, "papel") == 0)
	{
	printf("Caso #%d: Bazinga!\n", i+1);
	}
	if (strcmp(raj, "tesoura") == 0)
	{
	printf("Caso #%d: De novo!\n", i+1);
	}
	if (strcmp(raj, "lagarto") == 0)
	{
	printf("Caso #%d: Bazinga!\n", i+1);
	}
	if (strcmp(raj, "Spock") == 0)
	{
	printf("Caso #%d: Raj trapaceou!\n", i+1);
	}
	}
	if (strcmp(sheldon, "lagarto") == 0)
	{
	if (strcmp(raj, "pedra") == 0)
	{
	printf("Caso #%d: Raj trapaceou!\n", i+1);
	}
	if (strcmp(raj, "papel") == 0)
	{
	printf("Caso #%d: Bazinga!\n", i+1);
	}
	if (strcmp(raj, "tesoura") == 0)
	{
	printf("Caso #%d: Raj trapaceou!\n", i+1);
	}
	if (strcmp(raj, "lagarto") == 0)
	{
	printf("Caso #%d: De novo!\n", i+1);
	}
	if (strcmp(raj, "Spock") == 0)
	{
	printf("Caso #%d: Bazinga!\n", i+1);
	}
	}
	if (strcmp(sheldon, "Spock") == 0)
	{
	if (strcmp(raj, "pedra") == 0)
	{
	printf("Caso #%d: Bazinga!\n", i+1);
	}
	if (strcmp(raj, "papel") == 0)
	{
	printf("Caso #%d: Raj trapaceou!\n", i+1);
	}
	if (strcmp(raj, "tesoura") == 0)
	{
	printf("Caso #%d: Bazinga!\n", i+1);
	}
	if (strcmp(raj, "lagarto") == 0)
	{
	printf("Caso #%d: Raj trapaceou!\n", i+1);
	}
	if (strcmp(raj, "Spock") == 0)
	{
	printf("Caso #%d: De novo!\n", i+1);
	}
	}
	}
	return 0;
}	

