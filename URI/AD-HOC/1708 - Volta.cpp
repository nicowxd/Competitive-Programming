// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Volta
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1708

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int cont=1,c,x,y,tmp;
	scanf("%d %d", &x, &y);	
	c = y-x;
	tmp = c;
	while (tmp < y)
	{
	cont++;
	tmp+=c;
	}
	printf("%d\n", cont);
	return 0;
}
