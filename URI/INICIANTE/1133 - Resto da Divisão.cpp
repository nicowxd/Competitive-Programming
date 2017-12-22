// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Resto da Divisão
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1133

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int x,y,maior,menor;
	scanf("%d", &x);
	scanf("%d", &y);
	maior = max(x,y);
	menor = min(x,y);
	for (int i = menor+1; i < maior; i++)
	{
	if (i%5 == 2 || i%5 == 3)
	{
	printf("%d\n", i);
	}
	}
	return 0;
}
