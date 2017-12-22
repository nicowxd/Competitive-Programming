// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: CPF 1
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1769

#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string cpf;
	int soma, d1, d2, k;
	while(cin >> cpf)
	{
		soma = 0;
		k = 1;
		printf("CPF ");	
		for (int i = 0; i < 11; i++)
		{
			if (cpf[i] != '.')
			{
				soma += (cpf[i] - '0')*k;
				k++;
			}
		}
		d1 = (soma % 11 == 10) ? 0 : soma % 11;
		if (d1 != (cpf[12] - '0'))
		{
			printf("invalido\n");
		}
		else
		{
		k = 9;
		soma = 0;
		for (int i = 0; i < 11; i++)
		{
			if (cpf[i] != '.')
			{
				soma += (cpf[i] - '0')*k;
				k--;
			}
		}
		d2 = (soma % 11 == 10) ? 0 : soma % 11;
		if (d2 == (cpf[13] - '0'))
		{
			printf("valido\n");
		}
		else
		{
			printf("invalido\n");
		}
		}
	}
	return 0;
}
		



