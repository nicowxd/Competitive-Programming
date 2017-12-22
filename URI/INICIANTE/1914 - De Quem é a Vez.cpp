// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: De Quem é a Vez?
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1914

#include <iostream>
#include <cstdio>
#include <cstring>
#include <utility>

using namespace std;

int main()
{
	char jogador1[60],jogador2[60], esc1[10],esc2[10];
	int qt;
	scanf("%d", &qt);
	for (int i = 0; i < qt; i++)
	{
	unsigned int val1 = 0, val2 = 0;
	scanf("%s %s %s %s", jogador1, esc1, jogador2, esc2);
	if (strcmp(esc1, "PAR") != 0)
	{
	swap(jogador1,jogador2);
	}
	scanf("%d %d", &val1, &val2);
	if ((val1+val2) % 2 == 0)
	{
	printf("%s\n", jogador1);
	}
	else
	{
	printf("%s\n", jogador2);
	}
	}
	return 0;
} 

