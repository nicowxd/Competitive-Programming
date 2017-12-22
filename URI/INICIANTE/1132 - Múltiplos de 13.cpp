// Autor: CarlosJunior<carloserratojr@gmail.com>
// Nome: Múltiplos de 13
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1132

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int x,y,maior,menor,soma=0;
	scanf("%d",&x);
	scanf("%d",&y);
	maior=max(x,y);
	menor=min(x,y);
	for (int i = menor; i <= maior; i++)
	{
	if (i%13!=0)
	{
	soma+=i;
	}
	}
	printf("%d\n", soma);
	return 0;
} 
