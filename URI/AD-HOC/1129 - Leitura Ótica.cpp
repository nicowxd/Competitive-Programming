// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Leitura Ótica
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1129

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int n,resp[260],cont;
	char letra;
	while(scanf("%d", &n) != EOF && n)
	{
	for (int i = 0; i < n; i++)
	{
	cont = 0;
	for (int j = 0; j < 5; j++)
	{
	scanf("%d", &resp[j]);
	if (resp[j] <= 127)
	{
	cont++;
	if (j == 0 && cont == 1)
	{
	letra = 'A';
	}
	else if (j == 1 && cont == 1)
	{
	letra = 'B';
	}
	else if (j == 2 && cont == 1)
	{
	letra = 'C';
	}
	else if (j == 3 && cont == 1)
	{
	letra = 'D';
	}
	else if (j == 4 && cont == 1)
	{
	letra = 'E';
	}
	else
	{
	letra = '*';
	}
	}
	if (cont == 0)
	{
	letra = '*';
	}
	}
	printf("%c\n", letra);
	}
	}
	return 0;
}
	
