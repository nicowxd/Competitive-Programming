// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Mjölnir
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1865

#include <iostream>
#include <cstdio> 
#include <cstring>

using namespace std;

int main()
{
	int x,newton;
	char nome[20];
	scanf("%d", &x);
	for(int i= 0; i < x; i++)
	{
	scanf("%s %d", nome, &newton);
	if (strcmp(nome,"Thor")==0)
	{
	printf("Y\n");
	}
	else
	{
	printf("N\n");
	}
	}
	return 0;
}
