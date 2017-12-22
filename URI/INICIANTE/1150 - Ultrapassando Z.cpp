// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Ultrapassando Z
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1150

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int x,z,i,cont=1;	
	scanf("%d", &x);
	scanf("%d", &z);
	while(z <= x)
	{
	scanf("%d", &z);
	}
	i = x;
	int tmp = i+1;
	while(i < z)
	{
	i+=tmp;
	cont++;
	tmp++;            
	}
	printf("%d\n", cont);
	return 0;
} 

