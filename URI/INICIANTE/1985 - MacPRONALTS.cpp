// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: MacPRONALTS
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1985

#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

map<int, double> cardapio;

int main()
{
	cardapio[1001] = 1.5;
	cardapio[1002] = 2.5;
	cardapio[1003] = 3.5;
	cardapio[1004] = 4.5;
	cardapio[1005] = 5.5;
 	int n, prod, qty;
	double tot = 0;
	scanf("%d", &n);
	while(n--)
	{
	scanf("%d %d", &prod, &qty);
	tot+= cardapio[prod]*qty;
	}
	printf("%.2lf\n", tot);
	return 0;
}
	
