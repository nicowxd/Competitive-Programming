// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: PUM
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1142

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x,y=1;
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
	for (int j=0; j < 4; j++)
	{
	if (y%4 == 0)
	{
	printf("PUM\n");
	}
	else
	{
	printf("%d ", y);
	}
	y++;
	}
	}
	return 0;
}
	
