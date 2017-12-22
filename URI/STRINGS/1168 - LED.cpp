// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: LED
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1168

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int x,soma,j;
	char led[1010];
	scanf("%d", &x);
	for (int i = 0; i < x; i++)
	{
	scanf("%s", led);
	soma = 0;
	j = 0;
	while(led[j] != '\0')
	{
	if (led[j] == '0')
	{
	soma+= 6;
	}
	if (led[j] == '1')
	{
	soma+= 2;
	}
	if (led[j] == '2')
	{
	soma+= 5;
	}
	if (led[j] == '3')
	{
	soma+= 5;
	}
	if (led[j] == '4')
	{
	soma+=4;
	}
	if (led[j] == '5')
	{
	soma+=5;
	}
	if (led[j] == '6')
	{
	soma+=6;
	}
	if (led[j] == '7')
	{
	soma+=3;
	}
	if (led[j] == '8')
	{
	soma+=7;
	}
	if (led[j] == '9')
	{
	soma+=6;
	}
	j++;
	}
	printf("%d leds\n", soma);
	}
	return 0;
}
