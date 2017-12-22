// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Senha Fixa
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1114

#include <bits/stdc++.h>

using namespace std;

int main()
{

	char pass[100];
	while(scanf("%s", pass))
	{
		if (strcmp(pass, "2002") == 0)
		{
			printf("Acesso Permitido\n");
			break;
		}
		else
			printf("Senha Invalida\n");
	}
	return 0;
}
