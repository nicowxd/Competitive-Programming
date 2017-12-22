// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ida à Feira
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1281

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

map<string,double> mapa;        

int main()
{
	//freopen("in", "r", stdin);
	//freopen("out", "w", stdout);
	int n,m,p,qt;
	string comida;
	double preco,val;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
	scanf("%d", &m);
	mapa.clear();
	for (int j = 0 ; j < m; j++)
	{
	cin >> comida >> preco;
	mapa[comida] = preco;
	}
	scanf("%d", &p);
	val = 0;
	for (int j = 0; j < p; j++)
	{
	cin >> comida >> qt;
	val+= mapa[comida]*qt;
	}
	printf("R$ %.2lf\n", val);
	}
	return 0;
}
		
	
	
	
