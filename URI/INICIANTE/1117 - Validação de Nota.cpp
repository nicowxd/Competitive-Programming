// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Validação de Nota
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1117

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int conta=0;
	double nota,soma=0;
	while(conta!=2)
	{
	scanf("%lf", &nota);
	if (nota < 0 || nota > 10)
	{
	printf("nota invalida\n");
	}
	else
	{
	soma+=nota;
	conta++;
	}
	}
	printf("media = %.2f\n", soma/2);
	return 0;
}
