// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Guru da Sorte
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2508

#include <bits/stdc++.h>

using namespace std;

int lucky (int x)
{
	int aux = x;
	while(aux >= 10)
	{
		int sum = 0;
		while(aux)
		{
			sum += aux%10;
			aux /= 10;
		}
		aux = sum;
	}
	return aux;
}

int main()
{

	int val[256];
	for (int i = 0; i <= 25; i++)
		val['a'+i] = i % 9;
	string nome;
	while(getline(cin, nome))
	{
		int sum = 0;
		for (int i = 0; i < (int) nome.size(); i++)
		{
			if (isalpha(nome[i]) and isupper(nome[i]))
				sum += (val[tolower(nome[i])]) + 1;
			else if (isalpha(nome[i]) and islower(nome[i]))
				sum += val[nome[i]] + 1;
		}
		printf("%d\n", lucky(sum));
	}
	return 0;
}
