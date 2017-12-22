// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Encaixa ou Não I
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1240

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int n, tam;
	string a, b;
	scanf("%d", &n);
	while(n--)
	{
		cin >> a >> b;
		tam = a.size() - b.size();
		if (tam >= 0)
		{
		if (a.substr(tam, b.size()) == b)
			printf("encaixa\n");
		else
			printf("nao encaixa\n");
		}
		else
		{
			printf("nao encaixa\n");
		}
	}
	return 0;
}

