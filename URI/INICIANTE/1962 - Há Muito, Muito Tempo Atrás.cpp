// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Há Muito, Muito Tempo Atrás
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1962

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int n, pass;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &pass);
		if (pass >= 2015)
			printf("%d A.C.\n", pass-2015+1);
		else
			printf("%d D.C.\n", 2015-pass);
	}
	return 0;
}


