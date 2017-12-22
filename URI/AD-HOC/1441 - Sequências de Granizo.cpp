// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Sequências de Granizo
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1441

#include <iostream>
#include <cstdio>

using namespace std;

int maior;

int gran(int x)
{
	if (x > maior)
		maior = x;
	if (x != 1)
	{
		if (x % 2 == 0)
		{
			return gran(x/2);
		}
		else
			return gran(3*x + 1);
	}
	return maior;
}

int main()
{
	int n;
	while(scanf("%d", &n), n)
	{
		maior = 0;
		printf("%d\n", gran(n));
	}
	return 0;
}


