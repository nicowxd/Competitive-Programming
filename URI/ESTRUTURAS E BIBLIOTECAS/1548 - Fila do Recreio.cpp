// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Fila do Recreio
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1548

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool ordena(int x, int y)
{
	if (x > y)
	{
	return true;
	}
	return false;
}

int main()
{
	int n,m,vet[1010],aux[1010],ntroca;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
	scanf("%d", &m);
	ntroca = 0;
	for (int j = 0; j < m; j++)
	{
	scanf("%d", &vet[j]);
	aux[j] = vet[j];
	}
	sort(vet,vet+m,ordena);
	for (int j = 0; j < m; j++)
	{
	if (aux[j] == vet[j])
	{
	ntroca++;
	}
	}
	printf("%d\n", ntroca);
	}
	return 0;
}
	
	

