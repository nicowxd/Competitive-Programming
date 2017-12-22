// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Jogo do Tijolo
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1436

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int t,n;
	int idade[13];
	scanf("%d", &t);
	for (int i = 0; i < t ; i++)
	{
	scanf("%d", &n);
	for (int j = 0 ; j < n; j++)
	{
	scanf("%d", &idade[j]);
	}
	sort(idade,idade+n);
	printf("Case %d: %d\n", i+1, idade[n/2]);
	}
	return 0;
}
