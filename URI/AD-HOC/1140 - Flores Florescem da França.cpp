// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Flores Florescem da França
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1140

#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char *p, letra, ph[2500];
	while(gets(ph) && ph[0] != '*')
	{
		p = strtok(ph, " ");
		letra = tolower(ph[0]);
		while(p != NULL)
		{
			if (tolower(*p) != letra)
				break;
			p = strtok(NULL, " ");
		}
		if (p == NULL)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}
